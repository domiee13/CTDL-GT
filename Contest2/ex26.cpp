// Cho số tự nhiên K và xâu ký tự các chữ số S.  Nhiệm vụ của bạn là đưa ra số lớn nhất bằng cách thực hiện nhiều nhất K lần đổi chỗ các ký tự trong S. Ví dụ K =3 và S = “1234567” ta được “7654321”.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số K; dòng tiếp theo là xâu ký tự S.
// T, K, S thỏa mãn ràng buộc: 1≤T ≤100; 1≤K≤10; 1≤.lenght(S)≤7.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

int k;
string s,s1;

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>k>>s;
        //Duyet chuoi s tu dau den cuoi
        for(int i = 0;i<s.size();i++){
            char Max = s[s.size()-1];
            int pos = s.size()-1;
            //Duyet tu cuoi de tim phan tu lon nhat va o xa nhat
            for(int j = s.size()-1;j>i;j--){
                if(Max<s[j]){
                    Max = s[j];
                    pos = j;
                }
            }
            if(Max>s[i] && k>0){
                swap(s[i],s[pos]);
                k--;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}