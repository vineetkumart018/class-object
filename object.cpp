#include<iostream>
using namespace std;
class Strategy{
    public:
    int order_quantity;
    void PrintOrderQuantity(){
        cout<<"Order Qty:\t"<<order_quantity;

    }
};
int main(){
    Strategy obj;//automatic allocation
    obj.order_quantity=10;
    obj.PrintOrderQuantity();
    Strategy* obj1= new Strategy();//dynamic strorage allocation
    obj1->order_quantity=20;
    obj1->PrintOrderQuantity();
    delete obj1;

    return 0;
}