// Cho một xâu chỉ gồm các kí tự ‘(‘ và ‘)’. Một dãy ngoặc đúng được định nghĩa như sau:

// -     Xâu rỗng là 1 dãy ngoặc đúng.

// -     Nếu A là 1 dãy ngoặc đúng thì (A) là 1 dãy ngoặc đúng.

// -     Nếu A và B là 2 dãy ngoặc đúng thì AB là 1 dãy ngoặc đúng.

// Cho một xâu S. Nhiệm vụ của bạn là hãy tìm dãy ngoặc đúng dài nhất xuất hiện trong xâu đã cho.

// Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

// Mỗi test gồm một xâu S có độ dài không vượt quá 105 kí tự.

// Output:  Với mỗi test in ra một số nguyên là độ dài dãy ngoặc đúng dài nhất tìm được.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        cin.tie(0);
        ios_base::sync_with_stdio(0);
        int res = 0;
        string s;
        cin>>s;
        stack<char> stk;
        stk.push(-1);
        int l = s.size();
        for(int i = 0;i<l;i++){
            if(s[i]=='(') stk.push(i);
            else{
                stk.pop();
                if(stk.size()>0){
                    res = max(res,i-stk.top());
                }
                if(stk.size()==0) stk.push(i);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}