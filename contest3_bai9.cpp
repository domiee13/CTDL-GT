/*
BÀI 9. SẮP XẾP CÔNG VIỆC 2
Cho N công việc. Mỗi công việc được biểu diễn như một bộ 3 số nguyên dương <JobId, Deadline,
Profit>, trong đó JobId là mã của việc, Deadline là thời gian kết thúc của việc, Profit là lợi nhuận đem
lại nếu hoàn thành việc đó đúng thời gian. Thời gian để hoàn toàn mỗi công việc là 1 đơn vị thời gian.
Hãy cho biết lợi nhuận lớn nhất có thể thực hiện các việc với giả thiết mỗi việc được thực hiện đơn lẻ.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là số
lượng Job N; phần thứ hai đưa vào 3×N số tương ứng với N job.
 T, N, JobId, Deadline, Profit thỏa mãn ràng buộc:1≤T≤100; 1≤N≤1000; 1≤ JobId
≤1000; 1≤ Deadline ≤1000; 1≤ Profit ≤1000.
Output:
 Đưa số lượng công việc tương ứng và lợi nhuận lớn nhất có thể đạt được.
*/

#include <bits/stdc++.h>

using namespace std;

struct Job{
    int id,deadline,profit;
};

bool cmp(Job a, Job b){
    return a.profit > b.profit;
}

void display(Job a[], int n){
    for(int i =0;i<n;i++){
        cout<<a[i].deadline<<" "<<a[i].profit<<endl;
    }
}

void displayOne(Job a){
    cout<<a.id<<" "<<a.deadline<<" "<<a.profit<<endl;
}

int main(){
    int n;
    cin>>n;
    Job a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i].id>>a[i].deadline>>a[i].profit;
    }
    sort(a,a+n,cmp);
    int count = 0;
    int res = 0;
    int F[1001] = {0};
    display(a,n);
    for(int i = 0;i<n;i++){
        while(F[a[i].deadline] && a[i].deadline > 0) a[i].deadline -= 1;
        if(!F[a[i].deadline] && a[i].deadline > 0){
            F[a[i].deadline] = 1;
            res+= a[i].profit;
            count++;
        }
    }
    cout<<count<<" "<<res<<endl;
    return 0;
};