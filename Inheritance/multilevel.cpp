#include<iostream>
#include<string>
using namespace std;
class person {
public:
    string name;
    int age;

};
class student : public person { //-------- FROM FIRST PARENT TO SECOND PARENT --------
public:
    int rollno;  
};
class child : public student{ // -------------- FROM SECOND PARENT TO CHILD ----------
public:
   int mobile;
    void setinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll no : "<<rollno<<endl;
        cout<<"Mobile : "<<mobile;
    }
};
int main(){
    child s1;
    s1.name="Durga";
    s1.age=21;
    s1.rollno=8;
    s1.mobile=9063;
    s1.setinfo();
}