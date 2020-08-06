// Cho biểu thức số học, hãy cho biết biểu thức số học có dư thừa các cặp ký hiệu ‘(’,’) ‘ hay không?

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T;
// Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Ràng buộc:

// T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤20.
// Ví dụ:

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<char> stk;
        bool ok;
        for(int i = 0;i<s.size();i++){
            if(s[i]==')'){
                ok = true;
                char top = stk.top();
                stk.pop();
                while(top!='('){
                    if(top=='+' || top=='-' || top=='*' || top=='/'){
                        ok = false;
                    }
                    top = stk.top();
                    stk.pop();
                }
                if(ok) break;//Cap ngoac la cap ngoac thua
            }
            else stk.push(s[i]);
        }
        if(ok) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
    return 0;
}