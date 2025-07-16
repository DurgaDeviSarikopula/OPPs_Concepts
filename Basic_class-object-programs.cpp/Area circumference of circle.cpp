#include<iostream>
#include<string>
using namespace std;
class Circle{
public:
int radius;
    void area(int radius){
        float pi=3.14;
        float area=radius*radius*pi;
        cout<<"Area : "<<area<<endl;
        float circumfernce=2*pi*radius;
        cout<<"Circumference : "<<circumfernce;
    }
};
int main(){
    Circle r1;
    r1.area(7);
}
