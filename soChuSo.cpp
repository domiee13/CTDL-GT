#include <iostream>

using namespace std;

int soChuSo(int n){
    if(n<10) return 1;
    return 1+ soChuSo(n/10);
}

int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    cout<<"So chu so cua n = "<<soChuSo(n)<<endl;
    return 0;
}