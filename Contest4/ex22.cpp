// Cho dãy số A[] gồm có N phần tử đã được sắp xếp tăng dần và số K.

// Nhiệm vụ của bạn là kiểm tra xem số K có xuất hiện trong dãy số hay không. Nếu có hãy in ra vị trí trong dãy A[], nếu không in ra “NO”.

// Input:

// Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

// Mỗi test bắt đầu bằng số nguyên N và K (N ≤ 100 000, 0 ≤ K ≤ 10^6).

// Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10^6), các phần tử là riêng biệt.

// Output: 

// Với mỗi test in ra trên một dòng đáp án tìm được.

#include <bits/stdc++.h>

using namespace std;

long long n,k,a[100005];

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i =1;i<=n;i++){
            cin>>a[i];
        }
        long long pos = lower_bound(a+1,a+n+1,k)-a;
        if(a[pos]==k) cout<<pos<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}