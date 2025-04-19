#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
    void setData(void){
        cout<<"Ente the Id:";
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of this employee"<<id<<endl;
        cout<<"and this is empoyee number is "<<count<<endl;
    }
    static void getCount(void){
        //cout<<id;//Throws an error;
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count;//Default value ic 0


int main(){
    Employee vineet,Ansh,Pratyush;
    vineet.setData();
    vineet.getData();
    Employee::getCount();
    Ansh.setData();
    Ansh.getData();
    Employee::getCount();
    Pratyush.setData();
    Pratyush.getData();
    Employee::getCount();


    return 0;
}