#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,tmp;
        cin>>n;
        int a[n];
        stack<int> s;
        vector<int> res;
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        for(int i =n-1;i>=0;i--){
            while(!s.empty() && s.top()<a[i]) s.pop();
            // while(s.top()<a[i] && !s.empty()) s.pop();
            if(!s.empty()) res.push_back(s.top());
            else{
                res.push_back(-1);
            }
            s.push(a[i]);
        }
        reverse(res.begin(),res.end());
        for(int i = 0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}