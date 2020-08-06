// Cho ba số N, P, S. Trong đó, P là một số nguyên tố. Nhiệm vụ của bạn là đưa ra tất cả N số nguyên tố tính từ P có tổng bằng S. Ví dụ với S = 28, P=7, N =2 ta có kết quả 11 + 17 = 28. Với N = 3, P = 2, S = 23 ta có kết quả : {3, 7, 13}, {5, 7, 11}

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ ba số S, P, N được viết trên một dòng.
// S, P, N thỏa mãn ràng buộc: 1≤T ≤100; 1 ≤ N ≤ 10; 2≤S, P≤200.
// Output:

// Với mỗi test, dòng đầu tiên in ra số lượng đáp án tìm được. Mỗi dòng tiếp theo in ra kết quả tìm được theo thứ tự từ điển.

#include <bits/stdc++.h>

using namespace std;

int s,n,p,vt;
bool ok[300];
vector<int> a; //Luu so nguyen to trong khoang 2 - 200
vector< vector<int> > res;

void init(){
    cin>>n>>p>>s;
    //lower_bound bi wrong-answer
    vt = upper_bound(a.begin(),a.end(),p)-a.begin();
    for(int i = 0;i<300;i++){
        ok[i]=false;
    }
    res.clear();
}
//sàng số nguyên tố
void sang(){
    for(int i = 2;i<=200;i++){
        if(!ok[i]){
            a.push_back(i);
            for(int j = i*i;j<=200;j+=i){
                ok[j]=true;
            }
        }
    }
}

void Try(int i, vector<int> v, int sum){
    if(sum>s) return;
    if(sum==s && v.size()==n){
        res.push_back(v);
        return;
    }
    for(int j = i;j<a.size();j++){
        if(sum+a[j]<=s && v.size()<n && !ok[j]){
            v.push_back(a[j]);
            ok[j]=true;
            Try(j+1,v,sum+a[j]);
            v.pop_back();
            ok[j]=false;
        }
    }
}

//Hien thi ket qua
void display(){
    cout<<res.size()<<endl;
    for(int i = 0;i<res.size();i++){
        for(int j = 0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sang();
    int t;
    cin>>t;
    while(t--){
        init();
        vector<int> v;v.clear();
        Try(vt,v,0);
        display();
    }
    return 0;
}