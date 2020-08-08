// Cho số tự nhiên N. Hãy tìm số nguyên dương X nhỏ nhất được tạo bởi số 9 và số 0 chia hết
// cho N. Ví dụ với N = 5 ta sẽ tìm ra X = 90.
// Input:
// • Dòng đầu tiên ghi lại số lượng test T (T≤100).
// • Những dòng kế tiếp mỗi dòng ghi lại một test. Mỗi test là một số tự nhiên N
// được ghi trên một dòng (N≤100).
// Output:
// • Đưa ra theo từng dòng số X nhỏ nhất chia hết cho N tìm được .

#include <bits/stdc++.h>

using namespace std;

string solve(int n){
    queue<string> q;
    q.push("9");
    while(q.size()>0){
        string res = q.front();q.pop();

        //Chia string cho so nguyen
        long long tmp = 0;        
        for(int i = 0;i<res.size();i++){
            tmp = tmp*10 + int(res[i]-'0');
            tmp%=n;
        }
        if(tmp==0){
            return res;
        }
        q.push(res+"0");
        q.push(res+"9");
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}