// Cho biểu thức toán học đúng, bạn cần tìm tất cả các biểu thức đúng có thể bằng cách xóa bỏ các cặp dấu ngoặc tương ứng với nhau từ biểu thức ban đầu.

// Ví dụ: Cho biểu thức: (2+(2*2)+2) Các biểu thức tìm được:

// (2+2*2+2)

// 2+(2*2)+2

// 2+2*2+2

// Các biểu thức (2+2*2)+2 và 2+(2*2+2) không được chấp nhận vì không xóa đi các cặp dấu ngoặc tương ứng với nhau

// Input: Một dòng chứa biểu thức gồm các số nguyên không âm, các dấu +, -, *, / và dấu ngoặc đơn.

// Biểu thức không quá 200 kí tự, có chứa ít nhất 1 và không quá 10 cặp dấu ngoặc.

// Output: In ra tất các các biểu thức khác nhau thỏa mãn đầu bài theo thứ tự từ điển

#include <bits/stdc++.h>

using namespace std;

struct dta{
    int s,e;
};

vector<dta> a;
vector<string> res;
string s;
int np[100];

bool cmp(dta a,dta b){
    return a.s<b.s;
}

void Try(int i, int n){
    for(int j = 0;j<=1;j++){
        np[i]=j;
        if(i==n-1){
            int ok[205]={0};
            int d = -1;
            for(int l = 0;l<s.size();l++){
                if(s[l]=='(' && np[++d]==0){
                    ok[a[d].s]=ok[a[d].e]=1;
                }
            }
            if(d>=0){
                string str="";
                for(int i = 0;i<s.size();i++){
                    if(ok[i]==0) str+=s[i];
                }
                res.push_back(str);
            }
        }
        else Try(i+1,n);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        stack<int> stk; //Luu lai vi tri cac (
        for(int i = 0;i<s.size();i++){
            if(s[i]=='(') stk.push(i);
            else if(s[i]==')'){
                dta tmp;
                tmp.s = stk.top();
                stk.pop();
                tmp.e = i;
                a.push_back(tmp);
            }
        }
        sort(a.begin(),a.end(),cmp);
        Try(0,a.size());
        sort(res.begin(),res.end());
        vector<string> ans;
        for(int i =0;i<res.size();i++){
            if(res[i]==s) continue;
            if(ans.size()==0) ans.push_back(res[i]);
            else if(ans[ans.size()-1]!=res[i]) ans.push_back(res[i]);
        }
        for(int i = 0;i<ans.size();i++){
            cout<<ans[i]<<endl;
        }
    }
    return 0;
}