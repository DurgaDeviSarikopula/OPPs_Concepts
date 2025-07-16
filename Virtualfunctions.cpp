#include<iostream>
#include<string>
using namespace std;
class Hello{
    public:
    virtual void hey(){
        cout<<"This is Parent";
    } 
};
class Hey : public Hello{
public:
void hey(){
        cout<<"This is child";
    } 
};
int main(){
    Hello h1; 
    h1.hey();
    
}