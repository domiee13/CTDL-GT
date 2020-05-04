/*Cho số nguyên dương N và K. Hãy tính NK modulo 109+7.
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm 1 số nguyên N và K (1 ≤ N ≤ 1000, 1 ≤ K ≤ 109
).

Output:
Với mỗi test, in ra đáp án trên một dòng.
*/

#include <bits/stdc++.h>
const long long mod = 1e9+7;
long long n,k;

using namespace std;

//Tinh a*b
long long mul(long long a, long long b){
    if(b==0) return 0;
    long long tmp = mul(a,b/2);
    if(b&1) return (tmp*2+a)%mod; //b&1 == neu b le
    return tmp*2%mod;
}

long long pow(long long n, long long k){
    if(k==0) return 1;
    if(k==1) return n%mod;
    long long tmp = pow(n,k/2);
    long long a = mul(tmp,tmp);
    if(k&1) return a*n%mod;
    return a%mod;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<pow(n,k)<<endl;
    }
    return 0;
}