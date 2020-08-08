// Cho mảng A[] gồm N số nguyên không âm và số K. Nhiệm vụ của bạn là hãy chia mảng A[] thành hai mảng con có kích cỡ K và N-K sao cho hiệu giữa tổng hai mảng con là lớn nhất. Ví dụ với mảng A[] = {8, 4, 5, 2, 10}, K=2 ta có kết quả là 17 vì mảng A[] được chia thành hai mảng {4, 2} và { 8, 5,10} có hiệu của hai mảng con là 23-6=17 là lớn nhất.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số phần tử của mảng N và số K; dòng tiếp theo đưa vào N số A[i] tương ứng với các phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, N, K, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ K<N ≤50; 0≤A[i]≤1000.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

//2 truong hop
//TH1 mang 1 dai k, mang 2 dai n - k
//TH1 mang 2 dai n- k, mang 2 dai k

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long res =0;
        long long a[100];
        for(int i  =0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long s1=0;
        long long s2=0;
        for(int i = 0;i<k;i++){
            s1+=a[i];
        }
        for(int i = k;i<n;i++){
            s2+=a[i];
        }
        res = abs(s2-s1);
        s1 = 0;
        s2 = 0;
        for(int i = 0;i<n-k;i++){
            s1+=a[i];
        }
        for(int i = n-k;i<n;i++){
            s2+=a[i];
        }
        res = max(res,abs(s2-s1));
        cout<<res<<endl;
    }
}