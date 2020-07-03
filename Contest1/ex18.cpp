#include <bits/stdc++.h>

using namespace std;

int pos[50], t[50], stop=0,n,s;
bool ok =false;

void sinh(int k){
    int i = k;
    while(i>0 && pos[i]==n-k+i) i--;
    if(i<=0) stop=1;
    else{
        pos[i]++;
        for(int j=i+1;j<=k;j++){
            pos[j]=pos[j-1]+1;
        }
    }
}

int main(){
    cin>>n>>s;
    //Nhap gia tri tien
    for(int i = 1;i<=n;i++){
        cin>>t[i];
    }
    for(int i = 1;i<=n;i++){
        stop = 0;
        ok = false;
        for(int j=1;j<=i;j++){
            pos[j]=j;
        }
        while(!stop){
            int res =0;
            for(int j = 1;j<=i;j++){
                res+=t[pos[j]];
            }
            if(res==s){
                ok = true;
                cout<<i<<endl;
                return 0;
            }
            sinh(i);
        }
    }
    if(!ok) cout<<-1<<endl;
    return 0;
}