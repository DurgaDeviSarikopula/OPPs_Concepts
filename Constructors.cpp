#include<iostream>
using namespace std;
class Durga{
public: 
    string name;
    int age;
    long mobile;
    Durga(){
        age=21; //----------- NON-PARAMETERISED CONSTRUCTOR ---------------
    }
    Durga(string n,long m){
        name=n;
        mobile=m;            //-------- PARAMETERISED CONSTRUCTOR -------
    }
    void getdetails(){
        cout<<"Name : "<<name<<endl<<"Mobile : "<<mobile;
    }
}; 
int main(){
    Durga d1("Durga",9063);
    //d1.getdetails();
    //cout<<d1.age;
    Durga d2(d1); //---------- COPY CONSTRUCTOR --------
    d2.getdetails();
}
