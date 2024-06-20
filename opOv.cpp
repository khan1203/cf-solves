#include<iostream>
using namespace std;

class coord{
    int x, y;
    public:
    coord(){x=0, y=0;}
    coord(int i, int j){x=i, y=j;}
    void get_xy(int &i, int &j){i=x,j=y;}
    coord operator + (coord ob2);
    coord operator - (coord ob2);
    coord operator * (coord ob2);
    coord operator / (coord ob2);
    coord operator % (coord ob2);
};

coord coord:: operator + (coord ob2){
    coord temp;
    temp.x=x+ob2.x;
    temp.y=y+ob2.y;

    return temp;
}

coord coord:: operator - (coord ob2){
    coord temp;
    temp.x=x-ob2.x;
    temp.y=y-ob2.y;

    return temp;
}

coord coord:: operator * (coord ob2){
    coord temp;
    temp.x=x*ob2.x;
    temp.y=y*ob2.y;

    return temp;
}

coord coord:: operator / (coord ob2){
    coord temp;
    temp.x=x/ob2.x;
    temp.y=y/ob2.y;

    return temp;
}

coord coord:: operator % (coord ob2){
    coord temp;
    temp.x=x%ob2.x;
    temp.y=y%ob2.y;

    return temp;
}
int main(){

    coord ob1(10,10), ob2(4,6),ob3, ob4;
    int x1,y1,x2,y2;

    ob3=ob1+ob2;

    ob3.get_xy(x1,y1);
    cout<<"Mid Point: ("<<x1/2<<", "<<y1/2<<")\n";

    ob4=ob1-ob2;
    ob4.get_xy(x2,y2);

    cout<<"Substraction: "<<x2<<", "<<y2<<"\n";

    ob3=ob1*ob2;

    ob3.get_xy(x1,y1);
    cout<<"Multiplication: ("<<x1<<", "<<y1<<")\n";

    ob3=ob1/ob2;

    ob3.get_xy(x1,y1);
    cout<<"Division: ("<<x1<<", "<<y1<<")\n";

    ob3=ob1%ob2;

    ob3.get_xy(x1,y1);
    cout<<"Modulus: ("<<x1<<", "<<y1<<")\n";

    
    return 0;
}