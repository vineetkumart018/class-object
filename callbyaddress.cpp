#include<iostream>
using namespace std;
int swap(int* a,int* b ){
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;

}
int main(){
    int a,b;
    a=5;
    b=10;
    cout<<"Before swap"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    swap(a,b);
    cout<<"After swap:"<<"a="<<a<<endl<<"b="<<b;

    return 0;
}