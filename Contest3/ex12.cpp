//     Cho xâu ký tự S bao gồm các ký tự in thường. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các ký tự trong S để hai ký tự giống nhau đều không kề nhau hay không? Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự S được viết trên một dòng.
// T, S thỏa mãn ràng buộc: 1≤T≤100;  1≤length(S)≤10000.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int d[10000]={0};
        int res = 0;
        for(int i = 0;i<s.size();i++){
            d[s[i]]++;
            //Tim ki tu xuat hien nhieu nhat
            if(res<d[s[i]]){
                res = d[s[i]];
            }
        }
        if(res<=s.size()-res && res%2==0) cout<<1<<endl;
        else if(res<=(s.size()/2+1) && res%2!=1) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}