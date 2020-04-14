#include <iostream>
using namespace std;

long long int ucln(int a, int b){
    if(b==0) return a;
    return ucln(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"UCLN(a,b) = "<<ucln(a,b)<<endl;
    return 0;
}