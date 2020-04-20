#include <iostream>
#include <algorithm>

using namespace std;

int n,s;
int x[100] = {0};
//Luu menh gia tien
int t[100] = {0};

void init(){
    cin>>n>>s;
    for(int i = 1;i<=n;i++){
        cin>>t[i];
    }
}

void Greedy(){
    int i = 0;
    int sum = s;
    while(i<n){
        if(t[i]<sum){
            x[i]=1;
            sum -= t[i];
        }
        if(sum==0) break;
        else i++;
    }
}

int main(){
    init();
    sort(t,t+n);
    Greedy();
    for(int i = 1;i<=n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return 0;
}