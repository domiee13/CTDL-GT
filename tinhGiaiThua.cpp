#include <iostream>
using namespace std;

long long int giaithua(int n){
    if( n == 0) return 1;
    return giaithua(n-1)*n;
}
 
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    cout<<"n! = "<<giaithua(n)<<endl;
    return 0;
}