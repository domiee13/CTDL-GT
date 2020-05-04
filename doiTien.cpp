#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> a = {1000,500,200,100,50,20,10,5,2,1};
// ,500,200,100,50,20,10,5,2,1
int res = 0;

void Greedy(){
    res = 0;
    int i = 0;
    int sum = n;
    while(i<n){
        while(a[i]<=sum){
            res++;
            sum -= a[i];
        }
        if(sum==0) break;
        else i++;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        sort(a.begin(), a.end(), greater<int>());  
        Greedy();
        cout<<res<<endl;
    }
    return 0;
}