//Solving . . .
#include <iostream>

using namespace std;

int a[100],n;

void init(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
}

bool check(){
    int leftSum = 0;
    for(int i=1;i<=n;i++){
        leftSum+=a[i];
        int rightSum = 0;
        for(int j = i+1;j<=n;j++){
            rightSum += a[j];
        }
        cout<<"leftSum = "<<leftSum<<endl;
        cout<<"rightSum = "<<rightSum<<endl;
        if(leftSum == rightSum) return true;
    }
    return false;
}

int main(){
    init();
    if(check()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}