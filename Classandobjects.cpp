#include<iostream>
using namespace std;
class student{
    public:
    char name[20];
    int roll_number;
    float total_marks;
    student(int roll_number,char name,float total_marks){
        cout<<"Enter roll no:";
        cin>>roll_number;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the marks:";
        cin>>total_marks;
    }
    void show(){
        cout<<roll_number;
        cout<<name;
        cout<<total_marks;
    }
};
int main(){
    student a1(32,"Vineet kumar",49.00);
    return 0;
}