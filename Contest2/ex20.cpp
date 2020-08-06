// Cho dãy số A[] gồm n số nguyên dương. Tam giác đặc biệt của dãy số A[] là tam giác được tạo ra bởi n hàng, trong đó hàng thứ n là dãy số A[], hàng i là tổng hai phần tử liên tiếp của hàng i+1 (1≤i≤n-1). Ví dụ A[] = {1, 2, 3, 4, 5}, khi đó tam giác được tạo nên như dưới đây:

// [48]

// [20, 28]

// [8, 12, 16]     

// [3, 5, 7, 9 ]

// [1, 2, 3, 4, 5 ]

//             Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N số của mảng A[].
// T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤10;
// Output:

// Đưa ra kết quả mỗi test theo từng dòng. Mỗi dòng của tam giác tổng được bao bởi ký tự [, ].

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[100];
int n;
vector< vector<int> > res;
//Viet sai dinh danh tren -> complier-error
void init(){
    res.clear();
    cin>>n;
    vector<int> tmp;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        tmp.push_back(a[i]);
    }
    res.push_back(tmp);
}

void display(){
    for(int i = res.size()-1;i>=0;i--){
        cout<<"[";
        for(int j = 0;j<res[i].size();j++ ){
            if(j==res[i].size()-1) cout<<res[i][j];
            else cout<<res[i][j]<<" ";
        }
        cout<<"] ";
    }
}

void process(){
    n--;
    vector<int> tmp;
    for(int i = 0;i<n;i++){
        a[i]=a[i]+a[i+1];
        tmp.push_back(a[i]);
    }
    res.push_back(tmp);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        while(n>1) process();
        display();
        cout<<endl;
    }
    return 0;
}