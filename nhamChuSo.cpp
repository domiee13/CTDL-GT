
/*
Trong một buổi học toán, giáo viên viết 2 số nguyên, A và B, và yêu cầu Tèo thực hiện phép cộng. Tèo
không bao giờ tính toán sai, nhưng thỉnh thoảng cậu ta chép các con số một cách không chính xác. Lỗi
duy nhất của là ghi nhầm '5' thành '6' hoặc ngược lại. Cho hai số, A và B, tính tổng nhỏ nhất và lớn
nhất mà Tèo có thể nhận được.
Input: Có một dòng chứa hai số nguyên dương A và B ( 1 ≤ A, B ≤ 1 000 000).
Output: In ra 2 số nguyên cách nhau một dấu cách, tổng nhỏ nhất và lớn nhất có thể nhận được.
*/

//Y tuong. So nho nhat : 5 la 5 con 6 thanh 5
//Y tuong. So lon nhat : 5 la 6 con 6 thanh 6

#include <iostream>
#include <string>

using namespace std;

int max(int a, int b){
    if(a>b) return a;
    else return b;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int maxlen = max(s1.length(),s2.length());
        int min,max;
        for(int i = 0;i<maxlen;i++){
            if(s1[i]=='6') s1[i] = '5';
            
            if(s2[i]=='6') s2[i] = '5';

        }
        
        min = stoi(s1)+stoi(s2);
        for(int i = 0;i<maxlen;i++){
            if(s1[i]=='5') s1[i] = '6';

            if(s2[i]=='5') s2[i] = '6';
        }     
        max = stoi(s1)+stoi(s2);
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}