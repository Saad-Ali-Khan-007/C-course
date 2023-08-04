#include<iostream>
using namespace std;
class Base1{
    int data1;
    public:
    Base1(int i){
    data1=i;
    cout<<"Base class constructor called "<<endl;
    }
    void printData1(void){
        cout<<"The value of data 1 is "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
    data2=i;
    cout<<"Base class constructor called "<<endl;
    }
    void printData2(void){
        cout<<"The value of data 2 is "<<data2<<endl;
    }
};
class Derived: public Base1, public Base2{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d): Base1(a),Base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived constructor caled "<<endl;
    }
    void printData(void){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};
int main(){
    Derived saad(1,2,3,4);
    saad.printData1();
    saad.printData2();
    saad.printData();
    return 0;
}