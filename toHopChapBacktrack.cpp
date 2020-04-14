#include <iostream>

using namespace std;

int n,k;
int a[100] = {0};

void init(){
    cin>>n>>k;
    for(int i = 1;i<=k;i++){
        a[i] = i;
    }
}

void display(){
    for(int i = 1;i<=k;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void Try(int i){
    for(int j = a[i-1]+1;j<=n-k+i;j++){
        a[i] = j;
        if(i==k) display();
        else Try(i+1);
    }
}

int main(){
    init();
    Try(1);
    return 0;
}