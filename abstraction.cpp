#include<iostream>
#include<string>
using namespace std;
class Hello{
    public:
    virtual void hey()=0;
};
class Hey : public Hello{
public:
void hey(){
        cout<<"This is child";
    } 
};
int main(){
    Hey h1; 
    h1.hey();
    
}