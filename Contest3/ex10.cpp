// Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[]. Nhiệm vụ của bạn là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất. Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây A[i] và A[j].

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào số lượng sợi dây N; dòng tiếp theo đưa vào N số A[i] là độ dài của các sợi dây; các số được viết cách nhau một vài khoảng trống.
// T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤10^6; 0≤A[i]≤10^6.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

//Phuong phap: su dung hang doi uu tien priority_queue<long long, vector<long long>, greate<long long> > a
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long val;
        priority_queue<long long, vector<long long> , greater<long long> > a;
        for(int i = 0;i<n;i++){
            cin>>val;
            a.push(val);
        }
        long long res = 0;
        while(a.size()>1){
            long long x = a.top();a.pop();
            long long y = a.top();a.pop();
            a.push(x+y);
            res+= x+y;
        }
        cout<<res<<endl;
    }
    return 0;
}