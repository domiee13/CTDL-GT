#include <bits/stdc++.h>

using namespace std;

int n,k,a[100];
bool stop=false;

void init(){
    cin>>n;
    k=1;
    a[k]=n;
}

void sinh(){
    int i = k; 
    while(i>0 && a[i]==1) i--;
    if(i<=0) stop = true;
    else{
        a[i]-=1;
        int d = k-i+1;
        k=i;
        for(int j = i+1;j<=i+d/a[i];j++){
            a[j]=a[i];
        }
        k+=d/a[i];
        if(d%a[i]) a[++k]=d%a[i];
    }
}

void display(){
    for(int i = 1;i<=k;i++){
        if(i==1) cout<<"(";
        cout<<a[i];
        if(i<k) cout<<" ";
        else cout<<") ";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        stop = false;
        while(!stop){
            display();
            sinh();
        }
        cout<<endl;
    }
    return 0;
}