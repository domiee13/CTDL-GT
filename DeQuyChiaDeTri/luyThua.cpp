#include <bits/stdc++.h>

using namespace std;

int luyThua(int a,int n){
    if(n==0) return 1;
    if(n==1) return a;
    else{
        int tmp = luyThua(a,n/2);
        if(n%2==0) return tmp * tmp;
        else return tmp* tmp * a;
    }
}

int main(){
    int a,n;
    cin>>a>>n;
    cout<<a<<"^"<<n<<" = "<<luyThua(a,n)<<endl;
    return 0;
}