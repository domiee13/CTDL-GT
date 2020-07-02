#include <bits/stdc++.h>

using namespace std;

class HinhChuNhat{
    public:
        float w,h;
        // ham set chieu rong
        void set_w(float a);
        //Set chieu dai
        void set_h(float b);
        // ham get chieu rong
        float get_w();
        //Get chieu dai
        float get_h();
        //Tinh dien tich, chu vi
        float dientich();
        float chuvi();
        bool isVuong();
       
};

void HinhChuNhat::set_w(float a){
    w=a;
}

void HinhChuNhat::set_h(float b){
    h=b;
}

float HinhChuNhat::get_w(){
    return w;
}

float HinhChuNhat::get_h(){
    return h;
}

float HinhChuNhat::dientich(){
    return w*h;
}

float HinhChuNhat::chuvi(){
    return (w+h)*2;
}

bool HinhChuNhat::isVuong(){
    if(w==h) return true;
    return false;
}

class HinhKhoi : public HinhChuNhat{
    public:
        float cao;
        void set_cao(float c);
        float get_cao();
        float thetich();
        bool isVuong();
};

void HinhKhoi::set_cao(float c){
    cao = c;
}

float HinhKhoi::get_cao(){
    return cao;
}

float HinhKhoi::thetich(){
    return w*h*cao;
}

bool HinhKhoi::isVuong(){
    if(w==h && h==cao) return true;
    return false;
}

int main(){
    HinhChuNhat a;
    a.set_w(5);
    a.set_h(5);
    cout<<a.dientich()<<endl;
    cout<<a.chuvi()<<endl;
    if(a.isVuong()) cout<<"La hinh vuong"<<endl;
    else cout<<"Khong la hinh vuong"<<endl;
    HinhKhoi b;
    b.set_w(4);
    b.set_h(4);
    b.set_cao(5);
    cout<<b.thetich()<<endl;
    if(b.isVuong()){
        cout<<"La hinh khoi vuong"<<endl;
    }
    else{
        cout<<"Khong la hinh khoi vuong"<<endl;
    }
    return 0;
}