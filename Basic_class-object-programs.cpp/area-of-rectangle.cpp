#include<iostream>
#include<string>
using namespace std;
class Reactangle {
public:
int length;
int breadth;
int cal(int length,int breadth){
    int area=length*breadth;
    cout<<"Area : "<<area;
}
};
int main(){
    Reactangle r1;
    r1.cal(5,4);
}