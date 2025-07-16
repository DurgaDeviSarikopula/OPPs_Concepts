#include<iostream>
#include<string>
using namespace std;
class Hello{
    public:
    void hey(int x){
        cout<<"X : "<<x;
    } 
    void hey(char x){
        cout<<"X : "<<x;
    }
    void hey(char x,int Y){
        cout<<"X : "<<x<<" "<<Y;
    }
};
int main(){
    Hello h1;
    //h1.hey(10); // ------ PRINTS THE FUNCTION ACCORDING TO THE INPUT -------
    h1.hey('H',10);
}
