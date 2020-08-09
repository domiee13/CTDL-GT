// Cho một xâu chỉ gồm các kí tự ‘(‘, ‘) và có độ dài chẵn. Hãy đếm số lượng dấu ngoặc cần phải đổi chiều ít nhất, sao cho xâu mới thu được là một dãy ngoặc đúng.

// Input:

// Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

// Mỗi test gồm 1 xâu S có độ dài không vượt quá 100 000, chỉ gồm dấu ( và ).

// Output: 

// Với mỗi test, in ra đáp án tìm được trên một dòng.

//Y tuong: Bo cac cap ngoac dung truoc
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> stk;
        for(int i = 0;i<s.size();i++){
            //Dua ngoac sai vao stack
            if(s[i]=='(' || s[i]==')' && stk.size()==0) stk.push(s[i]);
            else if(s[i]==')'){
                if(stk.size() > 0 && stk.top()=='(') stk.pop();
                else stk.push(s[i]);
            }
        }
        int d1=0,d2=0;
        while(stk.size()>0){
            if(stk.top()=='(') d1++;
            else d2++;
            stk.pop();
        }
        cout<<d1/2+d2/2+d1%2+d2%2<<endl;     
    }
    return 0;
}