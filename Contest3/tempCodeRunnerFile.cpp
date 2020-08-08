// Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[]. Nhiệm vụ của bạn là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất. Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây A[i] và A[j].

// Dữ liệu vào

// Dòng đầu ghi số bộ test T (T<10). Mỗi bộ test gồm 2 dòng. Dòng đầu tiên là số nguyên N (N ≤ 2*106).

// Dòng tiếp theo gồm N số nguyên dương c[i] ( 1 ≤ A[i] ≤ 10^9).

// Kết quả 

// In ra đáp án của bộ test trên từng dòng, theo modulo 10^9+7.

#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9+7;

int main(){
    long long n;
    cin>>n;
    long long val;
    priority_queue<long long, vector<long long>, greater<long long> > a;
    for(long long i = 0;i<n;i++){
        cin>>val;
        a.push(val);
    }
    long long res = 0;
    while(a.size()>1){
        long long x = a.top();a.pop();
        long long y = a.top();a.pop();
        long long tmp = (x+y)%mod;//x va y co the rat to dan den tran so nen can phai chia cho 10^9+7 lay phan du 
        a.push(tmp);
        res += tmp;
        res%=mod;
    }
    cout<<res<<endl;
    return 0;
}