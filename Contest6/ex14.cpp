// Cho số tự nhiên N. Hãy tìm cặp số nguyên tố đầu tiên có tổng là N. Nếu không tồn tại cặp số nguyên tố có tổng bằng N, hãy đưa ra -1.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm là một số N được ghi trên một dòng.
// T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤10^6.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

vector<bool> ok(1000007,false);
void sang(){
    ok[0]=ok[1]=true;
    for(long long i = 2;i<=1000000;i++){
        if(!ok[i]){
            for(long long j = i*i;j<=1000000;j+=i){
                ok[j]=true;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    sang();
    while(t--){
        long long n;
        cin>>n;
        bool check = false;
        for(long long i = 2;i<=n;i++){
            if(!ok[i] && !ok[n-i]){
                cout<<i<<" "<<n-i<<endl;
                check=true;
                break;
            }
        }
        if(!check) cout<<-1<<endl;
    }
    return 0;
}