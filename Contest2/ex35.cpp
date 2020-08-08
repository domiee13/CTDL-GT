// Xét tất cả các tập hợp các số nguyên dương có các phần tử khác nhau và không lớn hơn số n cho trước. Nhiệm vụ của bạn là hãy đếm xem có tất cả bao nhiêu tập hợp có số lượng phần tử bằng k và tổng của tất cả các phần tử trong tập hợp bằng s?

// Các tập hợp là hoán vị của nhau chỉ được tính là một.

// Ví dụ với n = 9, k = 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.

// Input:  Gồm nhiều bộ test (không quá 100 test).

// Mỗi bộ test gồm 3 số nguyên n, k, s với 1 ≤ n ≤ 20, 1 ≤ k ≤ 10 và 1 ≤ s ≤ 155. Input kết thúc bởi 3 số 0.

// Output:  Với mỗi test in ra số lượng các tập hợp thỏa mãn điều kiện đề bài.

#include <bits/stdc++.h>

using namespace std;

int n,k,s;
int d = 0;
int a[100]={0};

void init(){
    d = 0;
    for(int i = 1;i<=k;i++){
        a[i]=i;
    }
}
bool isOK(){
    int sum = 0;
    for(int i = 1;i<=k;i++){
        sum+=a[i];
    }
    if(sum==s) return true;
    return false;
}

void Try(int i){
    for(int j = a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            if(isOK()) d++;
        }
        else Try(i+1);
    }
}


int main(){
    while(cin>>n>>k>>s){
        if(n==0 && k ==0 && s==0) return 0;
        init();
        Try(1);
        cout<<d<<endl;
    }
    return 0;
}