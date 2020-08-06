// Cho dãy số A[] = (a1, a2, .., an) và số tự nhiên K. Hãy đưa ra tất cả các dãy con của dãy số A[]
// sao cho tổng các phần tử của dãy con đó đúng bằng K. Các phần tử của dãy số A[] được giả
// thuyết là nguyên dương và không có các phần tử giống nhau. Ví dụ với dãy con A[] = {5, 10,
// 15, 20, 25}, K = 50 ta có 3 dãy con {5, 10, 15, 20}, {5, 20, 25}, {10, 15, 25}.
// Input:
//  Dòng đầu tiên đưa vào số lượng bộ test T.
//  Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất
// đưa vào số N là số lượng phần tử của dãy số A[] và số K; dòng tiếp theo đưa vào
// N phần tử của dãy số A[].
//  T, N, A[i] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N≤10; 1≤ K, A[i] ≤100.
// Output:
//  Đưa ra tất cả các dãy con của dãy số A[] thỏa mãn yêu cầu bài toán theo thứ tự
// từ điển, trong đó mỗi dãy con được bao bởi các ký tự [, ]. Nếu không có dãy con
// nào thỏa mãn yêu cầu bài toán, hãy đưa ra -1.

#include <bits/stdc++.h>

using namespace std;

int a[100],b[100];
//b luu day nhi phan
int n,k;
vector< vector<int> > res;

void init(){
    cin>>n>>k;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    res.clear();
}

void backTrack(int i){
    for(int j = 0;j<=1;j++){
        b[i]=j;
        if(i==n){
            vector<int> tmp;
            int sum=0;
            for(int k = 1;k<=n;k++){
                if(b[k]){
                    sum+=a[k];
                    tmp.push_back(a[k]);
                }
            }
            if(sum==k) res.push_back(tmp);
        }
        else backTrack(i+1);
    }
}

void display(){
    sort(res.begin(),res.end());
    for(int i = 0;i<res.size();i++){
        cout<<"[";
        for(int j = 0;j<res[i].size();j++){
            if(j==res[i].size()-1) cout<<res[i][j]<<"] ";
            else cout<<res[i][j]<<" ";
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        backTrack(1);
        if(res.size()==0) cout<<-1;
        else display();
        cout<<endl;
    }
    return 0;
}