#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float cgpa;
};

int main(){
    Student s1;
    s1.name="Vineet Gupta";
    // s1.rno =84;
    s1.cgpa =8.8;
    cout<<"Enter the roll number:";
    cin>>s1.rno;
    Student s2;
    s2.name="Ansh panday";
    s2.rno=20;
    s2.cgpa=9.0;
    cout<<s1.name<<endl<<s1.cgpa<<endl<<s1.rno<<endl<<endl;


}