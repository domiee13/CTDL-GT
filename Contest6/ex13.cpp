// Cho mảng A[] gồm n phần tử đã được sắp xếp. Hãy tìm số lần xuất hiện số X trong mảng. Nếu số lần xuất hiện số x trong mảng là 0 hãy đưa ra -1.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N và X; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
// T, N, X, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤10^3, 1≤A[i], X ≤10^6.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int d[100005]={0};
        int a[1005]={0};
        for(int i = 0;i<n;i++){
            cin>>a[i];
            d[a[i]]++;
        }
        if(!d[x]) cout<<-1<<endl;
        else cout<<d[x]<<endl;
    }
    return 0;
}