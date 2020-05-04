#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a;
    int tmp;
    for(int i = 0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    int x1 =0;
    int x2 =0;
    for(int i = 0;i<k;i++){
        x1+=a[i];
    }
    for(int i = k;i<n;i++){
        x2+=a[i];
    }
    cout<<x2-x1<<endl;
    return 0;
}