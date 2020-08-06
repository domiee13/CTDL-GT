// Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N]. Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:

// Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
// Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
// Left (L): Chuột được phép sang trái dưới nếu ô bên trái nó có giá trị 1.
// Up (U): Chuột được phép lên trên nếu ô trên nó có giá trị 1.
// Hãy đưa ra tất cả các hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là kích cỡ của mê cung; dòng tiếp theo đưa vào ma trận nhị phân A[N][N].
// T, N, A[i][j] thỏa mãn ràng buộc: 1≤T ≤10; 2≤N≤8; 0≤A[i][j] ≤1.
// Output:

// Đưa ra các xâu ký tự được sắp xếp, trong đó mỗi xâu là một đường đi của con chuột trong mê cung. In ra đáp án theo thứ tự từ điển. Đưa ra -1 nếu chuột không đi được đến đích.

#include <bits/stdc++.h>

using namespace std;

int n;
int a[100][100];
bool ok = false;
vector<string> res;
bool chuaxet[100][100];

//Khoi tao cac gia tri
void init(){
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>>a[i][j];
            chuaxet[i][j]=true;
        }
    }
    ok = false;
    res.clear();
}

void backTrack(int i, int j, string s){
    //Kiem tra xem co duong di khong
    if(!a[0][0] || !a[n-1][n-1]){
        ok =false;
        return;
    }
    //Den dich luu ket qua
    if(i==n-1 && j==n-1){
        res.push_back(s);
        ok = true;
        return;
    }
    //Dang sai o cho nay
    //Neu khong co mang chuaxet thi se di di lai lai, vong lap vo han ?
    if(i<n-1 && a[i+1][j] && chuaxet[i+1][j]){
        //Danh dau diem truoc day di roi
        chuaxet[i][j]=false;
        backTrack(i+1,j,s+"D");
        chuaxet[i][j]=true;
    }
    if(j<n-1 && a[i][j+1] && chuaxet[i][j+1]) {
        chuaxet[i][j]=false;
        backTrack(i,j+1,s+"R");
        chuaxet[i][j]=true;
    }
    if(i!=0 && a[i-1][j] && chuaxet[i-1][j]){
        chuaxet[i][j]=false;
        backTrack(i-1,j,s+"U");
        chuaxet[i][j]=true;
    }
    if(j!=0 && a[i][j-1] && chuaxet[i][j-1]){
        chuaxet[i][j]=false;
        backTrack(i,j-1,s+"L");
        chuaxet[i][j]=true;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        backTrack(0,0,"");
        if(!ok) cout<<-1;
        else{
            sort(res.begin(),res.end());
            for(int i = 0;i<res.size();i++){
                cout<<res[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}