#include <iostream>

using namespace std;

int t[100] = {0};
int a[100] = {0};
int n,S;
int sum = 0;
int cbest = 99999;
int c= 0;
int abest[100] = {0};

void init(){
    cin>>n;
    cin>>S;
    for(int i = 1;i<=n;i++){
        cin>>t[i];
    }
}

void display(){
    for(int i = 1;i<=n;i++){
        cout<<abest[i]<<" ";
    }
    cout<<endl;
}

void Try(int k){
    for(int i = 0;i<=1;i++){
        a[k] = i;
        sum += a[k]*t[k];
        c = c+i; 
        if(k==n){
            if((sum==S) && (c<cbest)){
                cbest = c;
                for(int i = 1;i<=n;i++){
                    abest[i] = a[i];
                }
            }
        }else if(sum<=S) Try(k+1);
        sum = sum-  a[k]*t[k];
        c = c-i;
    }
}

int main(){
    init();
    Try(1);
    display();
    return 0;
}