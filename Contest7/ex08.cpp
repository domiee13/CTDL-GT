// Cho biểu thức đúng P chỉ bao gồm các phép toán +, -, các toán hạng cùng với các ký tự ‘(’, ‘)’. Hãy bỏ tất cả các ký tự ‘(’, ‘)’ trong P để nhận được biểu thức tương đương. Ví dụ với P = a – (b + c) ta có kết quả P = a – b – c .

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T;
// Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức P được viết trên một dòng.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Ràng buộc:

// T, P thỏa mãn ràng buộc: 1≤T≤100; 1≤length(P)≤10^3.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        //luu vi tri cac '('
        stack<int> stk;
        for(int i =0;i<s.size();i++){
            if(s[i]=='(') stk.push(i);
            else if(s[i]==')'){
                if(stk.size()>0){
                    int top = stk.top();stk.pop();
                    if(top==0) continue;
                    if(s[top-1]=='+') continue;
                    if(s[top-1]=='-'){
                        for(int j=top;j<=i;j++){
                            if(s[j]=='+') s[j] = '-';
                            else if(s[j]=='-') s[j] = '+';
                        }
                    }
                }
            }
        }
        for(int i = 0;i<s.size();i++){
            if(s[i]!='(' && s[i]!=')')
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}