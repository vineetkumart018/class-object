#include<iostream>
using namespace std;
class student{
    string name;
    int age;
    public:
    void get(){
        cout<<"Enter the name and age:"<<endl;
        cin>>name;

    }
    void show(){
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
    }

};
int main(){
    student st[30];
    int i,n;
    cout<<"Enter the number of student:->";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the details of student no "<<i+1<<endl;
        st[i].get();
        st[i].show();
    }
    return 0;
}
