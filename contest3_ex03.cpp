/*
Cho mảng A[] gồm N phần tử.Nhiệm vụ của bạn là tìm 𝑚𝑎𝑥 = ∑ 𝐴𝑖
𝑛−1
𝑖=0 ∗ 𝑖 bằng cách sắp đặt lại các
phần tử trong mảng. Chú ý, kết quả của bài toán có thể rất lớn vì vậy bạn hãy đưa ra kết quả lấy modulo
với 109+7.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa
vào số phần tử của mảng N; dòng tiếp theo đưa vào N số A[i] tương ứng với các phần
tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
 T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤107
.
Output:
 Đưa ra kết quả mỗi test theo từng dòng.
*/

#include <bits/stdc++.h>
const long long mod = 1e9+7;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int res =0;
        cin>>n;
        vector<int> a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i =0;i<n;i++){
            res+= (a[i]*i)%mod;
        }
        cout<<res<<endl;
    }
    return 0;
}