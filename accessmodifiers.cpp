#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    float marks;
    void display_details(){
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    student s1;
    s1.rollno=101;
    s1.name="John";
    s1.marks=78.5;
    s1.display_details();
    return 0;
}