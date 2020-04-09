#include <iostream>
#include <fstream>

using namespace std;

int a[100][100] = {0};

ofstream out("king.out", ios::out);

void gen(){
    for(int i = 1;i<=64;i++){     
        a[i][i+1] = 1;
        a[i][i-1] = 1;
        a[i][i-8] =1;
        a[i][i+8] =1;
        a[i][i-7] = 1;
        a[i][i-9] = 1;
        a[i][i+9]= 1;
        a[i][i+7] = 1;
    }
}

void output(){
    for(int i = 1;i<=64;i++){
        for(int j  = 1;j<=64;j++) 
            out<<a[i][j]<<" ";
        out<<endl;
    }
}

int main(){
    gen();
    output();
    cout<<"Done"<<endl;
    return 0;
}