#include <iostream>

using namespace std;

int t[100] = {0};
int a[100] = {0};
int n,S;
int sum = 0;
bool found = false;

void init(){
    cin>>n;
    cin>>S;
    for(int i = 1;i<=n;i++){
        cin>>t[i];
    }
}

void display(){
    for(int i = 1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void Try(int i){
    for(int j = 0;j<=1;j++){
        a[i] = j;
        sum += a[i]*t[i];
        if(i==n){
            if(sum==S){
                display();
                found = true;
            }
        }
        else if(sum<S) Try(i+1);
        if(found) break;
        sum -= a[i]*t[i];
    }
}

int main(){
    init();
    Try(1);
    return 0;
}