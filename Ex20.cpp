#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[100];
int n;
vector< vector<int> > res;

void init(){
    res.clear();
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
}

void display(){
    for(int i = res.size()-1;i>=0;i--){
        cout<<"[";
        for(int j = 0;j<res[i].size();j++){
            if(j==res[i].size()-1) cout<<res[i][j];
            else cout<<res[i][j]<<" ";
        }
        cout<<"] ";
    }
}

void process(){
    n--;
    vector<int> tmp;
    for(int i = 1;i<=n;i++){
        a[i] = a[i]+a[i+1];
        tmp.push_back(a[i]);
    }
    res.push_back(tmp);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        vector<int> tmp;
        for(int i = 1;i<=n;i++){
            tmp.push_back(a[i]);
        }
        res.push_back(tmp);
        while(n>1)
            process();
        // for(int i = res.size()-1;i>=0;i--){
        //     for(int j = 0;j<res[i].size();j++){
        //         cout<<res[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        display();
        cout<<endl;
    }
    return 0;
}