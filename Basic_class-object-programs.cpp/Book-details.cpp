#include<iostream>
#include<string>
using namespace std;
class Book {
public:
    string title;
    int pages;
}; 
int main(){
    Book b1;
    b1.title="C++ Guide";
    b1.pages=300;
    cout<<"Title : "<<b1.title<<","<<" "<<"Pages : "<<b1.pages<<endl;
    Book b2;
    b2.title="Python";
    b2.pages=470;
    cout<<"Title : "<<b2.title<<","<<"Pages : "<<b2.pages;
}