#include<iostream>
using namespace std;
class strategy{
    public:
    int Order_qty;
    double price;
    void submit(strategy s){
        cout<<s.Order_qty<<endl;
        cout<<s.price;
    }
};
int main(){
strategy s1;
s1.submit(s1);
return 0;
}

