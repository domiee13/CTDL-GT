/*
Trong một buổi học toán, giáo viên viết 2 số nguyên, A và B, và yêu cầu Tèo thực hiện phép cộng. Tèo
không bao giờ tính toán sai, nhưng thỉnh thoảng cậu ta chép các con số một cách không chính xác. Lỗi
duy nhất của là ghi nhầm '5' thành '6' hoặc ngược lại. Cho hai số, A và B, tính tổng nhỏ nhất và lớn
nhất mà Tèo có thể nhận được.
Input: Có một dòng chứa hai số nguyên dương A và B ( 1 ≤ A, B ≤ 1 000 000).
Output: In ra 2 số nguyên cách nhau một dấu cách, tổng nhỏ nhất và lớn nhất có thể nhận được
*/

//Ý tưởng: Lớn nhất khi 5->6, nhỏ nhất khi ngược lại, sử dụng hàm atoi bị lỗi ???

#include <bits/stdc++.h>

using namespace std;

string a,b;

string sum(){
    while(a.size()<b.size()) a="0"+a;
    while(a.size()>b.size()) b="0"+b;
    int len = a.size();
    string res ="";
    int nho = 0;
    for(int i = len-1;i>=0;i--){
        int so = int(a[i]-'0')+int(b[i]-'0') + nho;
        res = char(so%10 +'0') +res;//Lay chu so hang don vi
        nho = so/10;
    }
    if(nho>0) return char(nho+'0') + res;
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        for(int i =0;i<a.size();i++){
            if(a[i]=='6') a[i] = '5';
        }
        for(int i =0;i<b.size();i++){
            if(b[i]=='6') b[i] = '5';
        }
        cout<<sum()<<" ";
          for(int i =0;i<a.size();i++){
            if(a[i]=='5') a[i] = '6';
        }
        for(int i =0;i<b.size();i++){
            if(b[i]=='5') b[i] = '6';
        }
        cout<<sum()<<endl;
    }
    return 0;
}