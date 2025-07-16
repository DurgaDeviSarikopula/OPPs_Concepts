#include<iostream>
#include<string>
using namespace std;
class person {
public:
    string name;
    int age;

};
class student : public person{ //-------------- CHILD CLASS DERIVING FROM PARENT CLASS ----------
public:
    int rollno;  
    void setinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll no : "<<rollno<<endl;

    }
};
class child : public person{ // -------------- ANOTHER CHILD CLASS DERIVING FROM PARENT CLASS  ----------
public:
   int mobile;
    void setinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Mobile : "<<mobile<<endl;
    }
};
int main(){
    child s1;
    s1.name="Durga";
    s1.age=21;
    s1.mobile=9063;
    s1.setinfo();
    student s2;
    s2.name="Durga";
    s2.age=21;
    s2.rollno=88;
    s2.setinfo();

}