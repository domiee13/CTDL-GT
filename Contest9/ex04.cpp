#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    vector<int> ke[n+5];
    for(int i =1;i<=n;i++){
        getline(cin,s);
        s+=" ";
        int so = 0;
        int j = 0;
        while(j<s.size()){
            if(s[j]>='0' && s[j]<='9')
                so = so*10+int(s[j]-'0');
            else if(so>0){
                ke[i].push_back(so);
                so = 0;
            }
            j++;
        }
    }
    for(int i = 1;i<=n;i++){
        sort(ke[i].begin(),ke[i].end());
    }
    int d[n+5][n+5];
    memset(d,0,sizeof(d));
    for(int i =1;i<=n;i++){
        for(int j =0;j<ke[i].size();j++){
            d[i][ke[i][j]]=1;
        }
    }
    //Display 
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}