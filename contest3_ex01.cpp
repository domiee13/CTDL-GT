// Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000. Tổng số tiền cần đổi có
// giá trị bằng N. Hãy xác định xem có ít nhất bao nhiêu tờ tiền sau khi đổi tiền?
// Input:
// Dòng đầu tiên là số lượng bộ test T (T ≤ 50). Mỗi test gồm 1 số nguyên N ( 1 ≤ N ≤ 100 000).
// Output: Với mỗi test, in ra đáp án trên một dòng.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[] = {1000,500,200,100,50,20,10,5,2,1};
    int n = 10;
    int t;
    cin>>t;
    while(t--){
        int res = 0;
        int k;
        cin>>k;
        for(int i = 0;i<n;i++){
            res += k/a[i];
            k = k%a[i];
        }
        cout<<res<<endl;
    }
    return 0;
}