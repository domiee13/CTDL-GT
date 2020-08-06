// Cho mảng các số nguyên A[] gồm N phần tử. Hãy chia mảng số nguyên A[] thành K tập con khác rỗng sao cho tổng các phần tử của mỗi tập con đều bằng nhau. Mỗi phần tử thuộc tập con xuất hiện duy nhất một lần trong tất cả các tập con. Ví dụ với A[] = {2, 1, 4, 5, 6}, K =3 ta có kết quả {2, 4}, {1, 5}, {6}.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số N và K; dòng tiếp theo đưa vào N số của mmảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, N, K, A[i] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N, K≤20, 0≤A[i]≤100.
// Output:

// Đưa ra 1 nếu có thể chia tập con thành K tập thỏa mãn yêu cầu bài toán, ngược lại đưa ra 0.

#include <bits/stdc++.h>

using namespace std;

int n,k;
int s=0;
int a[100];
int dem = 0;
bool chuaxet[100];
bool check = false;

void backTrack(int sum, int dem){
    //sum = tong moi phan
    //Dem = so phan co the chia
    if(check) return;
    if(dem==k){
        check=true;
        return;
    }
    for(int i = 1;i<=n;i++){
        if(chuaxet[i]){
            chuaxet[i]=false;
            if(sum==s){
                //Tim duoc 1 phan reset sum =  0
                backTrack(0, dem + 1);
                return;
            }
            if(sum>s){
                return;
            }
            //Neu sum < s thi cong them a[i], giu nguyen dem
            else backTrack(sum+a[i],dem);
        }
        chuaxet[i]=true;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        //Khoi tao va nhap cac gia tri
        s = 0;
        check = false;
        cin>>n>>k;
        for(int i  =1;i<=n;i++){
            cin>>a[i];
            chuaxet[i] = true;
            s+=a[i];
        }
        //Neu khong chia het => 0 the chia lam k phan bang nhau
        if(s%k!=0) cout<<0<<endl;
        else{
            //s = tong moi phan
            s/=k;
            backTrack(0,0);
            if(check) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}