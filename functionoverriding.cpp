#include<iostream>
#include<string>
using namespace std;
class Hello{
    public:
    void hey(){
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
    Hey h1; //--------CHILD CLASS OVERIDING PARENT CLASS -------
    h1.hey();
    
}