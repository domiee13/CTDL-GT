// Ban đầu cho một queue rỗng. Bạn cần thực hiện các truy vấn sau:

// Trả về kích thước của queue
// Kiểm tra xem queue có rỗng không, nếu có in ra “YES”, nếu không in ra “NO”.
// Cho một số nguyên và đẩy số nguyên này vào cuối queue.
// Loại bỏ phần tử ở đầu queue nếu queue không rỗng, nếu rỗng không cần thực hiện.
// Trả về phần tử ở đầu queue, nếu queue rỗng in ra -1.
// Trả về phần tử ở cuối queue, nếu queue rỗng in ra -1.
// Dữ liệu vào

// Dòng đầu tiên chứa số nguyên T là số bộ dữ liệu, mỗi bộ dữ theo dạng sau.

// Dòng đầu tiên chứa số nguyên n - lượng truy vấn (1 ≤ n ≤ 1000)

// N dòng tiếp theo, mỗi dòng sẽ ghi loại truy vấn như trên, với truy vấn loại 3 sẽ có thêm một số nguyên, không quá 106.

// Kết quả: In ra kết quả của các truy vấn..

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int so;
        queue<int> q;
        while(n--){
            int opt;
            cin>>opt;
            if(opt==1){
                cout<<q.size()<<endl;
            }
            else if(opt==2){
                if(q.size()==0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else if(opt==3){
                int val;
                cin>>val;
                q.push(val);
            }
            else if(opt==4 && q.size()>0){
                q.pop();
            }
            else if(opt==5){
                if(q.size()>0) cout<<q.front()<<endl;
                else cout<<-1<<endl;
            }
            else if(opt==6){
                if(q.size()>0) cout<<q.back()<<endl;
                else cout<<-1<<endl;
            }
            so = opt;
        }
        if(so==3 || so==4) cout<<endl;
    }
    return 0;
}