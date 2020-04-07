#include <iostream>
using namespace std;

int a[100];
int n;
bool isFinal = false;

void init(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        a[i] = i;
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

void genNext(){
    int j = n - 1;
    while(j>0 && a[j]>a[j+1]) j--;
    if(j==0) isFinal = true;
    else{
        int k = n;
        while(a[k]<a[j]) k--;
        swap(a[k],a[j]);
        int l = j+1;
        int r = n;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }

}

int main(){
    int count;
    cin>>count;
    while(count --){
        init();
        while(!isFinal){
            display();
            genNext();
        }
        cout<<endl;
        isFinal = false;
    }
    return 0;
}