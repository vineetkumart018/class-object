#include<iostream>
using namespace std;
class c2;
class c1{
    int val;
    public:
    void indata(int a){
        val =a;

    }
    void display(void){
        cout<<val<<endl;
    }
    friend void exchange(c1 &,c2 &);
};
class c2{
    int val2;
    public:
    void indata(int a){
        val2 =a;

    }
    void display(void){
        cout<<val2<<endl;
    }
    friend void exchange(c1 &,c2 &);
};
void exchange(c1 & x,c2 & y){//Call by reference
    int temp= x.val;
    x.val=y.val2;
    y.val2=temp;
}
int main(){
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1,oc2);
    cout<<"The value of oc1 after exchanging becomes:->";
    oc1.display();
    cout<<"The value of oc2 after exchanging becomes:->";
    oc2.display();
    return 0;
}