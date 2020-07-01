#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    stack<int> stk;
    string s;
    int tmp;
    while(t--){
        cin>>s;
        if(s=="PUSH"){
            cin>>tmp;
            stk.push(tmp);
        }
        else if(s=="POP" && stk.size()>0) stk.pop();
        else if(s=="PRINT"){
            if(stk.size()==0) cout<<"NONE"<<endl;
            else cout<<stk.top()<<endl;
        }
    }
    return 0;
}