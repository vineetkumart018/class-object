#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float cgpa;

    Student(string s,int r){//Parameterised constructor
        name=s;
        rno=r;
        // cgpa=g;

    }

    Student(){//Default constructor
    }

    Student(string s,int r,float g){//parameterised constructor

        name=s;
        rno=r;
        cgpa=g;
    }
    Student(int r,float g, string s){//parameterised constructor
        name=s;
        rno=r;
        cgpa=g;
    }
};

int main(){
    Student s1("Vineet Gupta",84);
    // Student s2("Ansh panday",20,9.0);
    // s1.name="Vineet Gupta";
    s1.rno =96;
    s1.cgpa =8.8;

    Student s2;
    s2.name="Ansh panday";
    s2.rno=20;
    s2.cgpa=9.0;
    Student s3("Pratyush Mishra",59,7.7);
    Student s4=s1;//s4 inherit the proparities of s1//Copy constructor
    s4.name="Atul upadyaya";//Deep Copy because its doen't change the original data.
    Student s5(s1);//s5 inherit the properities of s1  //copy constructor//Another way of call constructure
    s5.name="Nikhil";//Deep Copy because its doen't change the original data.
    Student s6(39,4.5,"Abhay panday");
    cout<<s1.name<<endl<<s1.cgpa<<endl<<s1.rno<<endl<<endl;
    cout<<s2.name<<endl<<s2.cgpa<<endl<<s2.rno<<endl<<endl;
    cout<<s3.name<<endl<<s3.cgpa<<endl<<s3.rno<<endl<<endl;
    cout<<s4.name<<endl<<s4.cgpa<<endl<<s4.rno<<endl<<endl;
    cout<<s5.name<<endl<<s5.cgpa<<endl<<s5.rno<<endl<<endl;
    cout<<s6.name<<endl<<s6.cgpa<<endl<<s6.rno<<endl<<endl;
}
