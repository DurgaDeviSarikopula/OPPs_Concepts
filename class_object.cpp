#include<iostream>
using namespace std;
class Durga{
public: 
    string name;
    int age;
    long long mobile;
    void changename(string newname){
        name=newname;
    } 
}; 
int main(){
    Durga d1;
    d1.name="DURGA_Devi";
    d1.age=21;
    d1.mobile=9063704851;
    cout<<d1.name<<" "<<d1.age<<" "<<d1.mobile<<endl;
    d1.changename("sarikopula");
    cout<<d1.name;
}