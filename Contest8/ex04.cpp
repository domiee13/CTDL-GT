// Cho xâu ký tự S[] bao gồm các ký tự in hoa [A, B, …,Z]. Ta định nghĩa giá trị của xâu S[] là
// tổng bình phương số lần xuất hiện mỗi ký tự trong xâu. Ví dụ với xâu S[] = “AAABBCD” ta
// có F(S) = 32 + 22 + 12 + 12 = 15. Hãy tìm giá trị nhỏ nhất của xâu S[] sau khi loại bỏ K ký tự
// trong xâu.
// Input:
// • Dòng đầu tiên đưa vào số lượng test T (T≤100).
// • Mỗi test được tổ chức thành 2 dòng. Dòng thứ nhất ghi lại số K. Dòng thứ 2 ghi
// lại xâu ký tự S[] có độ dài không vượt quá 10^6.
// Output:
// • Đưa ra giá trị nhỏ nhất của mỗi test theo từng dòng

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        long long k;
        string s;
        cin>>k>>s;
        //Mang dem so lan xuat hien
        int d[300]={0};
        priority_queue<long long, vector<long long> > q;
        for(int i = 0;i<s.size();i++){
            d[s[i]]++;
        }
        for(int i = 0;i<300;i++){
            if(d[i]) q.push(d[i]);
        }
        while(q.size()>0 && k>0){
            long long top = q.top();q.pop();
            k--;
            top--;
            q.push(top);
        }
        long long res = 0;
        while(q.size()){
            res += q.top()*q.top();
            q.pop();
        }
        cout<<res<<endl;
    }
}