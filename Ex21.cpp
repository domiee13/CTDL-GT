/*
Cho xâu ký tự S bao gồm các ký tự in hoa khác nhau. Hãy đưa ra tất cả các hoán vị của xâu ký
tự S. Ví dụ S=”ABC” ta có kết quả {ABC ACB BAC BCA CAB CBA}.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test là một xâu ký tự S được
viết trên 1 dòng.
 T, S thỏa mãn ràng buộc: 1≤T≤10; 1≤length(S) ≤10;
Output:
 Đưa ra kết quả mỗi test theo từng dòng.
*/

#include <iostream>

using namespace std;

string s;
int a[100] = {0};
bool used[100] = {false};

void Try(int k){
    for(int i = 1;i<=s.size();i++){
        if(used[i]){
            a[k] = i;
            used[i] =true;
            if(k==s.size()){
                for(int l = 1;l<=s.size();l++){
                    cout<<s[a[l]];
                }
                cout<<" ";
            }
            else Try(k+1);
            used[i] = false;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin.ignore();
        getline(cin,s);
        Try(1);
    }
    return 0;
}