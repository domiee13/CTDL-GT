// Cho mảng A[] gồm n số nguyên. Nhiệm vụ của bạn là sắp xếp mảng theo số lần xuất hiện các phần tử của mảng. Số xuất hiện nhiều lần nhất đứng trước. Nếu hai phần tử có số lần xuất hiện như nhau, số nhỏ hơn đứng trước. Ví dụ A[] = {5, 5, 4, 6, 4 }, ta nhận được kết quả là A[] = {4, 4, 5, 5, 6}.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[] và số k; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤10^4; 1≤ k ≤10^3; 1≤ A[i] ≤10^5.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

struct dta{
    int val;
    int count;
};
//Ham so sanh
bool cmp(dta a,dta b){
    if(a.count>b.count) return true;
    if(a.count==b.count && a.val<b.val) return true;
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        dta a[n];
        int d[100005]={0};
        for(int i = 0;i<n;i++){
            cin>>a[i].val;
            d[a[i].val]++;
        }
        for(int i =0;i<n;i++){
            a[i].count = d[a[i].val];
        }
        sort(a,a+n,cmp);
        for(int i =0 ;i<n;i++){
            cout<<a[i].val<<" ";
        }
        cout<<endl;
    }
    return 0;
}