#include <iostream>

using namespace std;

int n;
bool chuaxet[100] = {false};
int a[100];

void display(){
    for(int i = 1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void Try(int k){
    for(int i = 1;i<=n;i++){
        if(!chuaxet[i]){
            a[k] = i;
            chuaxet[i] = true;
            if(k==n) display();
            else Try(k+1);
            chuaxet[i] = false;
        }
    }
}

int main(){
    cin>>n;
    Try(1);
    return 0;
}