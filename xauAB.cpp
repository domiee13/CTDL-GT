#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];

void init(){
    for(int i = 0;i<n;i++){
        a[i]= 0;
    }
}

void display(){
    for(int i = 0;i<n;i++){
        if(a[i]==0) cout<<"A";
        else cout<<"B";
    }
    cout<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        init();
        display();
        for(int i = n-1;i>=0;i--){
            if(a[i] ==1) a[i] =0;
            else{
                a[i] =1;
                break;
            }
            display();
        }
        init();
    }
    return 0;
}