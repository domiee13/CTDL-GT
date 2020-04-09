//Chuyen tu danh sach canh sang ma tran ke
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int n,m;
int a[50][50];
int inpArr[50][2];
int count[100];
vector<int> tmp;

ifstream inp("danhSachCanh.inp",ios::in);

void input(){
    inp>>n>>m;
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=2;j++){
            inp>>inpArr[i][j]; 
        }
        a[inpArr[i][1]][inpArr[i][2]] = 1;
        a[inpArr[i][2]][inpArr[i][1]] = 1;
    }
}

void displayMaTran(){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void displayDanhSachKe(){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(a[i][j]) {
                tmp.push_back(j);
                count[i]++;    
            }
        }
    }
    cout<<"Danh sach ke: "<<endl;
    cout<<n<<endl;
    int tg = 0;
    for(int i= 1;i<=n;i++){
        tg += count[i];
        cout<<tg<<" ";
        for(int j = 0;j<count[i];j++){
            cout<<tmp.front()<<" ";
            tmp.erase(tmp.begin(),tmp.begin()+1);
        }
        cout<<endl;
    }
}

int main(){
    input();
    cout<<"Ma tran ke: "<<endl;
    displayMaTran();
    displayDanhSachKe();
    return 0;
}