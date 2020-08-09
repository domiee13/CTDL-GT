// Cho P1, P2 là hai biểu thức đúng chỉ bao gồm các ký tự mở ngoặc ‘(’ hoặc đóng ngoặc ‘)’ và các toán hạng in thường. Nhiệm vụ của bạn là định xem P1 và P2 có giống nhau hay không.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T;
// Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào P1, dòng tiếp theo đưa vào P2.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Ràng buộc:

// T, P thỏa mãn ràng buộc: 1≤T≤100; 1≤length(P) ≤100.

#include <bits/stdc++.h>

using namespace std;

string bongoac(string s){
    stack<int> stk;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='(') stk.push(i);
        else if(s[i]==')'){
            int top = stk.top();stk.pop();
            if(top==0) continue;
            if(s[top-1]=='+') continue;
            else if(s[top-1]=='-'){
                for(int j = top;j<=i;j++){
                    if(s[j]=='+') s[j]='-';
                    else if(s[j]=='-') s[j]='+';
                }
            }
        }
    }
    string res="";
    for(int i  = 0;i<s.size();i++){
        if(s[i]!='(' && s[i]!=')') res+=s[i];
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if(bongoac(s1)==bongoac(s2)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}