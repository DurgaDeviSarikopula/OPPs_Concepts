#include<iostream>
#include<string>
using namespace std;
class Bank {
public:
    int accno;
    string holder;
    int balance;

    void getinfo(){
        cout<<"Enter account number : ";
        cin>>accno;
        cout<<"Enter name of holder : ";
        cin>>holder;
        cout<<"Enter total balance : ";
        cin>>balance;
    } 
    void display(){
        cout<<"Account Number : "<<accno<<endl;
        cout<<"Holder Name : "<<holder<<endl;
        cout<<"Total Balance : "<<balance;
    }

};
int main(){
    Bank b1;
    b1.getinfo();
    b1.display();
}