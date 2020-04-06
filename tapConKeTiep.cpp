#include <iostream>
using namespace std;

int n,k;
int a[1000];

void init(){
    for(int i = 1;i<=k;i++){
        a[i] = i;
    }
}

void input(){
    cin>>n>>k;
    for(int i = 1;i<=k;i++){
        cin>>a[i];
    }
}

void display(){
    for(int i = 1;i<=k;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void genNext(){
    int j = k;
    while(j>=0 && a[j] == n-k+j) j--;
    if(j>0){
        a[j] = a[j] + 1;
        for(int i = j+1;i<=k;i++){
            a[i] = a[i-1] + 1;
        }
    }
    else{
        init(); 
    }
}

int main(){
    int count;
    cin>>count;
    while(count--){
        input();
        genNext();
        display();
    }
    return 0;
}