// Cho dãy số A[] gồm n số nguyên dương. Tam giác đặc biệt của dãy số A[] là tam giác được tạo ra bởi n hàng, trong đó hàng thứ 1 là dãy số A[], hàng i là tổng hai phần tử liên tiếp của hàng i-1 (2≤i≤n). Ví dụ A[] = {1, 2, 3, 4, 5}, khi đó tam giác được tạo nên như dưới đây:

// [1, 2, 3, 4, 5 ]

// [3, 5, 7, 9 ]

// [8, 12, 16]

// [20, 28]

// [48]

//             Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N số của mảng A[].
// T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤10;
// Output:

// Đưa ra tam giác tổng của mỗi test theo từng dòng. Mỗi dòng của tam giác tổng được bao bởi ký tự [, ].

#include <bits/stdc++.h>

using namespace std;

int a[100];
int n;

//Nhập n và các phần tử
void init(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
}

//Hiển thị kết quả
void display(){
    cout<<"[";
    for(int i = 1;i<=n;i++){
        if(i==n) cout<<a[i];
        else cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;
}

//Thực hiện yêu cầu đề bài
void process(){
    for(int i = 1;i<=n;i++){
        a[i] = a[i]+a[i+1];
    }
    n--;
    display();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        display();
        while(n>1)
            process();
    }
    return 0;
}