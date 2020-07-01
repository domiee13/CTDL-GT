#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct data {
    int val, ind;
};

bool cmp(data a, data b){
    if(a.val<b.val) return true;
    if(a.val==b.val && a.ind<b.ind) return true;
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res = 0;
        vector<data> a(n);
        for(int i =0;i<n;i++){
            cin>>a[i].val;
            a[i].ind = i;
        }
        
        sort(a.begin(),a.end(),cmp);
        for(int i = 0;i<n;i++){
            while(a[i].ind != i){
                res++;
                swap(a[i],a[a[i].ind]);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}