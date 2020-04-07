#include <iostream>
using namespace std;

int a[100];
int n;
bool isFinal = false;

void init(){
    cin>>n;
    for(int i = n;i>0;i--){
        a[n-i+1] = i;
    }
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void display(){
    for(int i = 1;i<=n;i++){
        cout<<a[i];
    }
    cout<<" ";
}

void gen(){
    int j = n - 1;
    //Tim j sao cho a[j] > a[j+1]
    while(a[j]<a[j+1]) j--;
    if(j>0){
        int k = n;
        //Tim a[k] nho nhat ma a[k]<a[j]
        while(a[k]>a[j]) k--;
        swap(a[j],a[k]);
        int l = j+1;
        int r = n;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }else{
        isFinal = true;
    }
}

int main(){
    int count;
    cin>>count;
    while(count--){
        init();
        while(!isFinal){
            display();
            gen();
        }
        cout<<endl;
        isFinal = false;
    }
}