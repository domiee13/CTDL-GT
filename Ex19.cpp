#include <iostream>

using namespace std;

int a[100];
int n;

void init(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
}

void display(){
    cout<<"[";
    for(int i = 1;i<=n;i++){
        if(i==n) cout<<a[i];
        else cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;
}

void process(){
    for(int i = 1;i<=n;i++){
        a[i] = a[i]+a[i+1];
    }
    n--;
    display();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        display();
        while(n>1)
            process();
    }
    return 0;
}