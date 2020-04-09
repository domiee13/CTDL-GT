//Chuyen tu ma tran ke ve danh sach ke
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int a[50][50];
int count[100];
vector<int> tmp;
int n;

ifstream inp("maTranKe.inp",ios::in);
ofstream outdsk("danhSachKe.out",ios::out);

void input(){
    inp>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++) inp>>a[i][j];
    }
}

void output(){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(a[i][j]) {
                tmp.push_back(j);
                count[i]++;    
            }
        }
    }
    outdsk<<n<<endl;
    int tg = 0;
    for(int i= 1;i<=n;i++){
        tg += count[i];
        outdsk<<tg<<" ";
        for(int j = 0;j<count[i];j++){
            outdsk<<tmp.front()<<" ";
            tmp.erase(tmp.begin(),tmp.begin()+1);
        }
        outdsk<<endl;
    }
}

int main(){
    input();
    output();
    cout<<"Done!"<<endl;
    return 0;
}