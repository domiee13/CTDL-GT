// Cho N công việc. Mỗi công việc được biểu diễn như một bộ 3 số nguyên dương <JobId, Deadline, Profit>, trong đó JobId là mã của việc, Deadline là thời gian kết thúc của việc, Profit là lợi nhuận đem lại nếu hoàn thành việc đó đúng thời gian. Thời gian để hoàn toàn mỗi công việc là 1 đơn vị thời gian. Hãy cho biết lợi nhuận lớn nhất có thể thực hiện các việc với giả thiết mỗi việc được thực hiện đơn lẻ.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là số lượng Job N; phần thứ hai đưa vào 3×N số tương ứng với N job.
// T, N, JobId, Deadline, Profit thỏa mãn ràng buộc:1≤T≤100;  1≤N≤1000; 1≤ JobId ≤1000; 1≤ Deadline ≤1000; 1≤ Profit ≤1000.
// Output:

// Đưa số lượng công việc tương ứng và lợi nhuận lớn nhất có thể đạt được.

//Giai thich de bai: deadline = 4 nhung co the hoan thanh cong viec trong 1h, deadline la thoi gian toi da can de hoan thanh cong viec

#include <bits/stdc++.h>

using namespace std;

struct data{
    int id,dl,profit;
};

//Sap xep theo loi nhuan
bool cmp(data a, data b){
    return a.profit>b.profit;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        data a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i].id>>a[i].dl>>a[i].profit;
        }
        sort(a,a+n,cmp);
        // for(int i = 0;i<n;i++){
        //     cout<<a[i].dl<<" "<<a[i].profit<<endl;
        // }
        int count= 0;
        int res = 0;
        int f[1001] = {0};//Danh dau xem thoi gian nao da lam, khong duoc them viec khac vao khoang thoi gian do
        
        for(int i = 0;i<n;i++){
            //Tim thoi gian trong chua co cong viec nao duoc lam
            while(f[a[i].dl] && a[i].dl>0) a[i].dl-=1;
            //Neu khoang thoi gian nay chua co viec lam
            if(!f[a[i].dl] && a[i].dl>0){
                f[a[i].dl] = 1;
                res += a[i].profit;
                count ++;
            }
        }
        cout<<count<<" "<<res<<endl;
    }
    return 0;
}