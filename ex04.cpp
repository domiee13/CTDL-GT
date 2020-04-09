// Chuyen tu ma tran ke ve danh sach canh, ket qua ghi ra file danhSachCanh.out
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int a[50][50];
//So dinh cua do thi
int n;
// So canh cua do thi
int m;
int count[100];
vector<int> tmp;


ifstream inp("maTranKe.inp",ios::in);

void input(){
    m = 0;
    inp>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            inp>>a[i][j];
            if(a[i][j] == 1) m++; 
        }
    }
}

void displayDanhSachCanh(){
    cout<<"Danh sach canh: "<<endl;
    cout<<n<<" "<<m/2<<endl;
    for(int i = 1;i<=n;i++){
        for(int j = i;j<=n;j++)
            if(a[i][j] == 1) cout<<i<<"\t"<<j<<endl;
    }
}

//Chuyen tu ma tran ke ve danh sach ke
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
    displayDanhSachCanh();
    displayDanhSachKe();
    return 0;
}