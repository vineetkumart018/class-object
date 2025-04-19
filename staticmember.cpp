#include<iostream>
using namespace std;
class student
{
    char nm[20];
    int ag;
    static char clg_nm[30];
    static int session_yr;
    public:
    void get(){
        cout<<"\n Enter Name and age of student:->";
        cin>>nm>>ag;

    }
    static void accept(){
        cout<<"\nEnter Collage name and session year:->";
        cin>>clg_nm>>session_yr;

    }
    void show(){
        cout<<"\nCollage name="<<clg_nm<<"\n Session year="<<session_yr<<"\n Student name="<<nm<<"\nAge="<<ag;

    }

};
char student::clg_nm[30]="No Name";
int student::session_yr=0;
int main(){
    student a,b,c;
    a.get();
    b.get();
    c.get();
    a.show();
    b.show();
    c.show();
    return 0;

}