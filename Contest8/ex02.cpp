// Yêu cầu bạn xây dựng một queue với các truy vấn sau đây:
// “PUSH x”: Thêm phần tử x vào cuối của queue (0 ≤ x ≤ 1000).
// “PRINTFRONT”: In ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.
// “POP”: Xóa phần tử ở đầu của queue. Nếu queue rỗng, không làm gì cả.
// Dữ liệu vào:
// Dòng đầu tiên là số lượng truy vấn Q (Q ≤ 100000).
// Mỗi truy vấn có dạng như trên.
// Kết quả:
// 2

// Với mỗi truy vấn “PRINT”, hãy in ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    queue<int> q;
    while(t--){
        string s;
        cin>>s;
        if(s=="PUSH"){
            int so;
            cin>>so;
            q.push(so);
        }
        else if(s=="PRINTFRONT") (q.size()>0) ? cout<<q.front()<<endl : cout<<"NONE"<<endl;
        else if(s=="POP" && q.size()>0) q.pop();
    }
    return 0;
}