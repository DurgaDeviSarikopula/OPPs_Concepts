#include<iostream>
#include<string>
using namespace std;
class person {
public:
    string name;
    int age;

};
class student : public person {
public:
    int rollno;
    void setinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll no : "<<rollno;
    }
};
int main(){
    student s1;
    s1.name="Durga";
    s1.age=21;
    s1.rollno=8;
    s1.setinfo();
}