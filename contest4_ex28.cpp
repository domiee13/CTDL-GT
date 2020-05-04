/*
Có N con kanguru trong vườn thú, con thứ i có chiều cao bằng A[i]. Con kanguru có chiều cao X có thể
chứa được một con có chiều cao bằng Y trong túi của nó nếu như X >= 2*Y.
Một con đã chứa một con kanguru rồi, thì không thể nhảy vào túi một con kanguru khác.
Bầy Kanguru rất thích chơi trốn tìm, vì vậy chúng thường xuyên nhảy vào túi của nhau. Các bạn hãy tính
toán xem trong trường hợp tối ưu, số con kanguru nhìn thấy trong vườn thú ít nhất bằng bao nhiêu?
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm số nguyên N (1 ≤ N ≤ 100 000).
Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 100 000).
Output:
Với mỗi test, in ra đáp án trên một dòng.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res = n;
        vector<int> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i = n/2-1, j = n-1; i>=0 && j>=n/2; ){
            if(a[j]>=2*a[i]){
                res--;
                i--;
                j--;
            }
            else i--;
        }
        cout<<res<<endl;
    }
    return 0;
}