/*
Cho mảng A[], B[] đều có N phần tử. Nhiệm vụ của bạn là tìm giá trị nhỏ nhất của biểu thức P =
A[0]*B[0] + A[1]*B[1] + ..+A[N-1]*B[N-1] bằng cách tráo đổi vị trí các phần tử của cả mảng A[] và
B[].
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa
vào số phần tử của mảng N; dòng tiếp theo đưa vào N số A[i]; dòng cuối cùng đưa vào
N số B[i] các số được viết cách nhau một vài khoảng trống.
 T, N, A[i], B[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤107

; 0≤A[i], B[i] ≤1018
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
*/

#include <bits/stdc++.h> 

using namespace std;

void display(vector<int> a){
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){    
        int n;
        cin>>n;
        int tmp;
        vector<int> a;
        vector<int> b;
        for(int i = 0;i<n;i++){
            cin>>tmp;
            a.push_back(tmp);
        }
        for(int i = 0;i<n;i++){
            cin>>tmp;
            b.push_back(tmp);
        }
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end());
        // display(a);
        // display(b);
        int res=0;
        for(int i = 0;i<n;i++){
            res+= a[i]*b[i];
        }
        cout<<res<<endl;
    }
    return 0;
}