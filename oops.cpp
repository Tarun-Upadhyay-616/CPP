#include<iostream>
#include<string>
using namespace std;

class Teacher{
    // properties/attributes
private:
    double salary;
public:
    string name;
    string dept;
    string subject;

    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getsalary(){
        return salary;
    }
};

class Account{
private:
    double balance;
public:
    string username;
    string accId;
};

int main(){
    Teacher t1;
    t1.name = "Tarun";
    t1.dept = "Ece";
    t1.subject = "OOPS";
    t1.setSalary(200000);
    cout<<t1.getsalary()<<endl;
    cout<< t1.name;
    return 0;
}