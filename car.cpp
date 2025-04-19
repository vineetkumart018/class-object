#include<iostream>
using namespace std;
class car{
    public:
    string name;
    long int price;
    int seats;

    car(string s, long int r,int g){
        name=s;
        price=r;
        seats=g;
    }
};
// void print(car c){
//     cout<<c.name<<endl<<c.price<<endl<<c.seats<<endl<<endl;
// }
// void change (car& c){
//     c.name="Audi 8";

// }
    
int main(){
    car c1("Honda City",14000000,9);
    // c1.name="Honda City";
    // c1.price=1400000;
    // c1.seats=9;
    // print(c1);
    // change(c1);//pass by value;
    // print(c1);
    car c2("toyota",5000000,6);
    // change(c2);
    // print(c2);
    // c2.name="toyota";
    // c2.price=5000000;
    // c2.seats=6;
    car c3("mercedes",16700000,4);
    // change(c3);
    // print(c3);
    // c3.name="mercedes";
    // c3.price=16700000;
    // c3.seats=4;
    cout<<c1.name<<endl<<c1.price<<endl<<c1.seats<<endl<<endl;
    cout<<c2.name<<endl<<c2.price<<endl<<c2.seats<<endl<<endl;
    cout<<c3.name<<endl<<c3.price<<endl<<c3.seats<<endl<<endl;
// print(c1);
// print(c2);
// print(c3);
return 0;
}