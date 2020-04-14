#include <iostream>

using namespace std;

int n;
int a[100];
bool found = false;

void init(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        a[i] = 0;
    }
}

void display(){
    for(int i = 1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void Try(int k){
    for(int i = 0;i<=1;i++){
        a[k] = i;
        if(k==n) display();
        else Try(k+1);
    }
}

int main(){
    init();
    Try(1);
    return 0;
}