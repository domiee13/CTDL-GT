#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,k;
int a[100], t[100];
vector< vector<int> >  res;

void init(){
    res.clear();
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>t[i];
    sort(t+1,t+n+1);
}

void Try(int i){
    for(int j=0;j<=1;j++){
        a[i] = j;
        if(i==n){
            int s=0;
            for(int l=1;l<=n;l++){
                if(a[l]) s+=t[l];
            }
            if(s==k){
                vector<int> x;
                for(int l = 1;l<=n;l++)
                    if(a[l]) x.push_back(t[l]);
                res.push_back(x);
            }
        }
        else Try(i+1);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        Try(1);
        if(res.size()==0) cout<<-1<<endl;
        else{
            sort(res.begin(),res.end());
            for(int i=0;i<res.size();i++){
                cout<<"[ ";
                for(int j=0;j<res[i].size()-1;j++){
                    cout<<res[i][j]<<" ";
                }
                cout<<res[i][res[i].size()-1]<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}