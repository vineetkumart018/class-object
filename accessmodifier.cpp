#include<iostream>
using namespace std;
class strategy{
    public:
    double qty;
    double price;
    void printPriceQty(){
        cout<<"Quantity: "<<qty<<endl;
        cout<<"Price:"<<price<<endl;
    }
};
    int main(){ 
        strategy obj;
        obj.qty=100;
        obj.price=200;
        obj.printPriceQty();
        return 0;
    }