#include <iostream>
using namespace std;

int a[100];
int n,k;

void init(){
    cin>>n>>k;
    for(int i = 1;i<=k;i++){
        a[i] = i;
    }
}

void display(){
    for(int i = 1; i<=k;i++ ){
        cout<<a[i];
    }
    cout<<" ";
}

bool isFinal(){
    for(int i = 1;i<=k;i++){
        if(a[i]!=n-k+i) return false;
    }
    return true;
}

void genNext(){
    int j = k;
    while(a[j]==n-k+j) j--;
    if(j>0){
        a[j] = a[j] + 1;
        for(int i = j +1;i<=k;i++){
            a[i] = a[i-1] + 1;
        }
    }
}

int main(){
    int count;
    cin>>count;
    while(count--){
        init();
        display();
        while(!isFinal()){
            genNext();
            display();
        }
        cout<<endl;
    }
    return 0;
}