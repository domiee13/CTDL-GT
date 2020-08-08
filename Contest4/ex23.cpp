// Một dãy số tự nhiên bắt đầu bởi con số 1 và được thực hiện N-1 phép biến đổi “gấp đôi” dãy số như sau:

// Với dãy số A hiện tại, dãy số mới có dạng A, x, A trong đó x là số tự nhiên bé nhất chưa xuất hiện trong A.

// Ví dụ với 2 bước biến đổi, ta có [1] à [1 2 1] à [1 2 1 3 1 2 1].

// Các bạn hãy xác định số thứ K trong dãy số cuối cùng là bao nhiêu?

// Input:

// Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

// Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 50, 1 ≤ K ≤ 2^N - 1).

// Output: 

// Với mỗi test, in ra đáp án trên một dòng.

#include <bits/stdc++.h>

using namespace std;

//Tinh 2 mu n
long long Mul(int n){
    if(n==0) return 1;
    if(n==1) return 2;
    long long p = Mul(n/2);
    if(n%2==0) return p*p;
    else return 2*p*p;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        long long len = Mul(n)/2;//VI tri trung tam tinh tu 1
        while(1){
            if(n==1){
                cout<<1<<endl;
                break;
            }
            if(len==k){
                cout<<n<<endl;
                break;
            }  
            if(k>len){
                k = len-(k-len);//Lay doi xung qua phan tu trung tam
            } 
            n--;
            len/=2;
        }
    }
    return 0;
}