#include <iostream>

using namespace std;

int a[1000], n;

void init(){
    cout<<"n = ";
    cin>>n;
    for(int i = 0; i < n;i++){
        a[i] = 0;
    }
}

void display(){
    for(int i = 0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

bool isFinal(){
    for(int i = 0;i<n;i++){
        if(a[i] == 0) return false;
    }
    return true;
}

void genNext(){
    int i = n-1;
    while(a[i]==1) i--;
    if(i>=0) a[i] = 1;
    for(int j = i+1;j<n;j++){
        a[j] = 0;
    }
}

int main(){
    init();
    display();
    while(!isFinal()){
        genNext();
        display();
    }
    return 0;
}