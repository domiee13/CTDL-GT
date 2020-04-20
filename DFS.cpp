#include <iostream>
#include <fstream>
#define MAX 50

using namespace std;

int a[MAX][MAX],n;
bool used[MAX] = {true};

void init(){
    int i,j;
    ifstream inp("inputDFS.inp",ios::in);
    inp>>n;
    cout<<"So dinh cua do thi la: "<<n<<endl;
    for(int i = 1;i<=n;i++){
        used[i] = true;
        for(int j = 1;j<=n;j++){
            inp>>a[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    init();
    return 0;
}