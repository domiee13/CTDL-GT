// Cho một xâu chỉ gồm các kí tự ‘(‘, ‘)’, ‘[‘, ‘]’, ‘{‘, ‘}’. Một dãy ngoặc đúng được định nghĩa như sau:

// -     Xâu rỗng là 1 dãy ngoặc đúng.

// -     Nếu A là 1 dãy ngoặc đúng thì (A), [A], {A} là 1 dãy ngoặc đúng.

// -     Nếu A và B là 2 dãy ngoặc đúng thì AB là 1 dãy ngoặc đúng.

// Cho một xâu S. Nhiệm vụ của bạn là xác định xâu S có là dãy ngoặc đúng hay không?

// Input:

// Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

// Mỗi test gồm 1 xâu S có độ dài không vượt quá 100 000.

// Output: 

// Với mỗi test, in ra “YES” nếu như S là dãy ngoặc đúng, in ra “NO” trong trường hợp ngược lại.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> stk;
        bool ok = true;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                stk.push(s[i]);
            }
            else if(s[i]=='}'){
                if(stk.size()==0){
                    ok = false;
                }
                else if(stk.top()=='{') stk.pop();
            }
            else if(s[i]==']'){
                if(stk.size()==0){
                    ok = false;
                }
                else if(stk.top()=='[') stk.pop();
            }
            else if(s[i]==')'){
                if(stk.size()==0){
                    ok = false;
                }
                else if(stk.top()=='(') stk.pop();
            }
        }
        if(stk.size()>0) ok = false;
        if(ok) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}