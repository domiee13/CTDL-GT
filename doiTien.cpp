#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> a = {1,2,5,10,20,50,100,200,500,1000};
int res = 0;

void Greedy(){
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
    cin>>n;
    sort(a.begin(), a.end(), greater<int>());  
    Greedy();
    cout<<res<<endl;
    return 0;
}