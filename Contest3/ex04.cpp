// Cho mảng A[] gồm các số từ 0 đến 9. Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số được tạo bởi các số trong mảng A[]. Chú ý, tất cả các số trong mảng A[] đều được sử dụng để tạo nên hai số.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số phần tử của mảng N; dòng tiếp theo đưa vào N số A[i] tương ứng với các phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤20; 0≤A[i]≤9.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i =0 ;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int s1 = 0;
        int s2 = 0;
        for(int i = 0;i<n;i++){
            if(i%2==0){
                s1= s1*10+a[i];
            }
            else{
                s2 = s2*10+a[i];
            }
        }
        cout<<s1+s2<<endl;
    }
    return 0;
}