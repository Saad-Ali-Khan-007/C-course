#include<iostream>

using namespace std;
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id=inpId;
        salary=34;
    }
    Employee(){}
};
//default visibility mode is vibrate//
class Programmer : Employee{
    public:
    Programmer(int inpId){
        id =inpId;
    }
    int languageCode=9;
    void getData(){
        cout<<id<<endl;
    }

};
int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillF(1);
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    return 0;
}