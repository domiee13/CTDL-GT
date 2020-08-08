// Cho mảng A[] gồm n phần tử, hãy tìm cặp phần tử có tổng gần nhất so với 0.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n là số phần tử của mảng A[]; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤T≤100; 2≤N ≤103, -106≤A[i] ≤106.
// Output:

// Đưa ra tổng gần nhất với 0 của cặp phần tử.

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        long res = a[0]+a[1];
        int sum = 0;
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                sum  = a[i]+a[j];
                if(abs(sum)<abs(res)) res= a[i]+a[j];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}