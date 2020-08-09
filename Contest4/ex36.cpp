// Cho hai xâu nhị phân biểu diễn hai số. Nhiệm vụ của bạn là đưa ra tích của hai số. Ví dụ với xâu S1=”1100” và S2=”1010” ta sẽ có kết quả là 120.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 hai xâu nhị phân S1, S2 được viết trên một dòng.
// T, S1, S2 thỏa mãn ràng buộc: 1≤T≤100;  1≤ length(S1), length(S2)≤30.
//     Output:

// Đưa ra tích của mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int a=0,b=0,p=1;
        for(int i = s1.size()-1;i>=0;i--){
            a = a+int(s1[i]-'0')*p;
            p*=2;
        }
        p=1;
        for(int i = s2.size()-1;i>=0;i--){
            b = b+int(s2[i]-'0')*p;
            p*=2;
        }     
        cout<<a*b<<endl;   
    }
    return 0;
}