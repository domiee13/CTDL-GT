// Cho đơn đồ thị G vô hướng liên thông được mô tả bởi danh sách kề. Hãy in ra danh sách cạnh tương ứng của G.

// Input

// Dòng đầu tiên ghi số N là số đỉnh (1<N<50)
// N dòng tiếp theo mỗi dòng ghi 1 danh sách kề lần lượt theo thứ tự từ đỉnh 1 đến đỉnh N
// Output: Ghi ra lần lượt từng cạnh của đồ thị theo thứ tự tăng dần.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<int> ke[100];
    string s;
    for(int i = 1;i<=n;i++){
        getline(cin,s);
        s+=" ";
        int so = 0;
        int j=0;
        while(j<s.size()){
            if(s[j]>='0' && s[j]<='9'){
                so = so*10 + int(s[j]-'0');
            }
            else if(so > 0){
                ke[i].push_back(so);
                so = 0;
            }
            j++;
        }
    }
    for(int i = 1;i<=n;i++){
        sort(ke[i].begin(),ke[i].end());
    }
    //Mang danh dau da duoc in ra chua
    int d[100][100];
    memset(d,0,sizeof(d));
    for(int i = 1;i<=n;i++){
        for(int j = 0;j<ke[i].size();j++){
            if(!d[i][ke[i][j]] && !d[ke[i][j]][i]){
                cout<<i<<" "<<ke[i][j]<<endl;
                d[i][ke[i][j]] = d[ke[i][j]][i] = 1;
            }
        }
    }
    return 0;
}