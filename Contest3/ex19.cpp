// Một phân số đơn vị nếu tử số của phân số đó là 1. Mọi phân số nguyên dương đều có thể biểu diễn thành tổng các phân số đơn vị. Ví dụ 2/3 = 1/2  + 1/6. Cho phân số nguyên dương P/Q bất kỳ (P < Q), hãy biểu diễn phân số nguyên dương thành tổng phân số đơn vị.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ đôi tử số P và mẫu số Q của phân số nguyên dương được viết trên một dòng.
// T, P, Q thỏa mãn ràng buộc: 1≤T≤100;  1≤P, Q≤100.
// Output:

// Đưa ra đáp án tìm được trên 1 dòng, theo dạng “1/a + 1/b + …”

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int tu,mau;
        cin>>tu>>mau;
        long long res;
        while(1){
            if(mau%tu==0){
                cout<<"1/"<<mau/tu<<endl;//Truong hop cuoi
                break;
            }
            else{
                res = mau/tu + 1;
                cout<<"1/"<<res<<" + ";
                tu = tu*res-mau;
                mau = mau*res;
            }
        }
    }
    return 0;
}