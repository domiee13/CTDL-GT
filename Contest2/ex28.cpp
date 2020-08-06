// Nội dung bài tập
// Cho mảng A[] gồm N số nguyên dương phân biệt và số X. Nhiệm vụ của bạn là tìm phép tổ hợp các số trong mảng A[] có tổng bằng X. Các số trong mảng A[] có thể được sử dụng nhiều lần. Mỗi tổ hợp các số của mảng A[] được in ra theo thứ tự không giảm các số. Ví dụ với A[] = {2, 4, 6, 8}, X = 8 ta có các tổ hợp các số như sau:

// [2, 2, 2, 2], [2, 2, 4], [2, 6], [4, 4], [8].

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số N và X; dòng tiếp theo đưa vào N số của mmảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, N, X, A[i] thỏa mãn ràng buộc: 1≤T ≤10; 1≤X, A[i]≤100. N ≤ 20.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng. Mỗi đường tổ hợp được bao bởi cặp ký tự [, ]. Đưa ra -1 nếu không có tổ hợp nào thỏa mãn yêu cầu bài toán.

#include <bits/stdc++.h>

using namespace std;

int n,k;
int a[100];
vector< vector<int> > res;

void backTrack(int i, int sum, vector<int> v){
    //i: xet phan tu tai vi tri i
    if(sum>k) return;
    if(sum==k){
        res.push_back(v);
        return;
    }
    for(int j = i;j<=n;j++){
        if(sum+a[j]<=k){
            v.push_back(a[j]);
            backTrack(j,sum+a[j],v);
            v.pop_back();
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i = 1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        vector<int> v;
        v.clear();
        res.clear();
        backTrack(1,0,v);
        if(res.size()==0) cout<<-1;
        else{
            for(int i = 0;i<res.size();i++){
                cout<<"[";
                for(int j=0;j<res[i].size();j++){
                    if(j==res[i].size()-1) cout<<res[i][j]<<"]";
                    else cout<<res[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}