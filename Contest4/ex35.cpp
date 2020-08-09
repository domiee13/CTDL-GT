// Cho mảng A[] gồm N số có cả các số âm và số dương. Nhiệm vụ của bạn là tìm mảng con liên tục có tổng lớn nhất của mảng. Ví dụ với mảng A[]={-2, -5, 6, -2,-3, 1, 5, -6} ta có kết quả là 7 tương ứng với dãy con {6, -2, -3, 1, 5}.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào hai số N tương ứng với số phần tử của mảng; dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống.
// T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤100; -100≤A[i] ≤100.
// Output:

// Đưa ra tổng con liên tục lớn nhất của mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int max;
        bool ktd = false;//Kiem tra xem mang co so duong khong
        for(int i = 0;i<n;i++){
            cin>>a[i];
            if(a[i]>0) ktd = true;
            if(i==0) max = a[0];
            if(a[i]>max) max = a[i];
        }
        if(!ktd) cout<<max<<endl;
        else {
            int sum =0,res=0;
            for(int i = 0;i<n;i++){
                if(sum+a[i]<0){
                    sum=0;continue;
                }
                sum+= a[i];
                if(res<sum) res = sum;
            }
            cout<<res<<endl;
        }
    }   
    return 0;
}