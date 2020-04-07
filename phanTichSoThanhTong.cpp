#include <iostream>
using namespace std;

int a[100] = {0};
int b[100];
int n,count;

void input(){
    cout<<"n = ";
    cin>>n;
}

bool OK(){
    int tmp = 0;
    for(int i = 1;i<=n;i++)
        tmp+=a[i]*(i-1);
    
    if(tmp==n) return true;
    return false;
}



bool khongLap(){
	int tmp = 0;
	int mark = 1;
	for( int i = 1; i<= n; i++ )
		if( a[i] ) tmp = tmp*10 + (i-1);
	for( int j = 0; j< count; j++ )
		if( b[j] == tmp ) {
			mark = 0;
			return false;
		}
	if( mark ){
		b[count] = tmp;
		count++;
		return true;
	}
}


void display(){
	if( OK() ){
		if(khongLap()){
			for( int i = 1; i<= n; i++ )
				if( a[i] && i-1 ) cout<< i-1 << " ";
			cout<< endl;
		}
	}
}



void gen( int &ok ){
	int i = n;
	while( i > 0 && a[i] ) {
		a[i] = 0;
		i--;
	}
	if( i > 0 ) a[i] = 1;
	else ok = 0; // tim dc xau cuoi cung  => dung
}

void next( int ok ){
	while( ok ){ // lap toi khi ok = 0;
		display();
		gen(ok);
	}
}

int main(){
    count = 0;
	int ok = 1;
	input();
	next( ok );
	return 0;
}