// Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N]. Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:

// Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
// Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
// Hãy đưa ra một hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

//                         https://www.geeksforgeeks.org/wp-content/uploads/ratinmaze_filled_path1.png

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là kích cỡ của mê cung; dòng tiếp theo đưa vào ma trận nhị phân A[N][N].
// T, N, A[i][j] thỏa mãn ràng buộc: 1≤T ≤10; 2≤N≤10; 0≤A[i][j] ≤1.
// Output:

// Đưa ra tất cả đường đi của con chuột trong mê cung theo thứ tự từ điển. Đưa ra -1 nếu chuột không đi được đến đích.

#include <bits/stdc++.h>

using namespace std;

int n;
int a[100][100];
vector<string> res;
bool check = false;

void backTrack(int i,int j, string s){
    //Kiem tra o dau tien
    if(i==0 && j ==0 && a[i][j]==0){
        check=false;
        return;
    }
    if(i==n-1 && j==n-1 && a[i][j]){
        res.push_back(s);
        check=true;
        return ;
    }
    //neu di duong xuong duoi
    if(i<n-1 && a[i+1][j]){
        backTrack(i+1,j,s+"D");
    }
    //Neu di duoc sang phai
    if(j<n-1 && a[i][j+1]){
        backTrack(i,j+1,s+"R");
    }
    //Neu khong di duoc
    if((i<n-1 && j<n-1 && !a[i+1][j] &&!a[i][j+1]) || i>n-1 || j>n-1)
        return;
}

void init(){
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>a[i][j];
        }
    }
    check = false;
    res.clear();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        backTrack(0,0,"");
        if(!check){
            cout<<-1;
        }
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