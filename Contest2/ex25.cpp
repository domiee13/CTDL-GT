// Cho tập các số A[] = (a1, a2, .., an). Hãy kiểm tra xem ta có thể chia tập A[] thành hai tập con sao cho tổng các phần tử của hai tập con bằng nhau hay không. Đưa ra YES nếu có thể thực hiện được, ngược lại đưa ra NO.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N phần tử của dãy số A[].
// T, N, A[i] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N≤100; 1≤ A[i] ≤100.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        //k = tong cac phan tu cua mang
        int n,k = 0;
        cin>>n;
        int a[n+5]={0};
        for(int i = 0;i<n;i++){
            cin>>a[i];
            k+=a[i];
        }
        //k le thi khong chia thanh 2 mang co tong = nhau duoc
        if(k%2!=0) cout<<"NO"<<endl;
        else{
            int s = k/2;
            int dp[s+1]={0};//Neu tao duoc tong x thi dp[x]=1
            dp[0]=1;
            for(int i = 0;i<n;i++){
                for(int j = s;j>=a[i];j--){
                    if(dp[j-a[i]]==1) dp[j]=1;
                }
            }
            if(dp[s]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
    return 0;
}