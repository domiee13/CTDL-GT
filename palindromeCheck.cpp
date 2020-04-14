#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str, int n){
    if(n<1) return true;
    if(str[0] == str[n-1]){
        str.erase(str.begin());
        return isPalindrome(str, n-2);
    }
    else return false;
}

int main(){
    string str;
    getline(cin, str);
    int n = str.size();
    if(isPalindrome(str,n)) cout<<"La chuoi palindrome"<<endl;
    else cout<<"Khong phai chuoi palindrome"<<endl;
    return 0;
}