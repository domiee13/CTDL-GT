// Cho số tự nhiên n. Hãy in ra tất cả các số nhị phân từ 1 đến n.
// Input:
// • Dòng đầu tiên ghi lại số lượng test T (T≤100).
// • Mỗi test là một số tự nhiên n được ghi trên một dòng (n≤10000).
// Output:
// • Đưa ra kết quả mỗi test trên một dòng

#include <bits/stdc++.h>

using namespace std;

long long b[10001]={0};
long long np(int n){
    vector<int>a;
    while(n){
        a.push_back(n%2);
        n/=2;
    }
    long long res=0;
    for(int i = a.size()-1;i>=0;i--){
        res = res*10+a[i];
    }
    return res;
}

void Pre(int n){
    b[0] = 0;
    b[1] = 1;
    for(int i = 2;i<=n;i++){
        b[i] = np(i);
    }
}

int main(){
    int t;
    cin>>t;
    Pre(10001);
    while(t--){
        int n;
        cin>>n;
        for(int i = 1;i<=n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}