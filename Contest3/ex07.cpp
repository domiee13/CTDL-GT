// Cho mảng A[], B[] đều có N phần tử. Nhiệm vụ của bạn là tìm giá trị nhỏ nhất của  biểu thức P = A[0]*B[0] + A[1]*B[1] + ..+A[N-1]*B[N-1] bằng cách tráo đổi vị trí các phần tử của cả mảng A[] và B[].

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa vào số phần tử của mảng N; dòng tiếp theo đưa vào N số A[i]; dòng cuối cùng đưa vào N số B[i] các số được viết cách nhau một vài khoảng trống.
// T, N, A[i], B[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N ≤107; 0≤A[i], B[i] ≤1018.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        long long res = 0;
        cin>>n;
        //Dung mang bi sai ?//Phai co dinh kich thuoc mang, neu khong se bi sai
        long long a[n];
        long long b[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i = 0;i<n;i++){
            cin>>b[i];
        }
        sort(b,b+n, greater<long long>());
        
        for(int i =0;i<n;i++){
            res+= a[i]*b[i];
        }
        cout<<res<<endl;
    }
    return 0;
}