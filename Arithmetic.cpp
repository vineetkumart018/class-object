#include<iostream>
using namespace std;
class result{
    int a;
    int b;
    public:
    void input(){
        cout<<"Enter the number:->";
        cin>>a>>b;
    }
    void output(){
        cout<<"sum="<<a+b<<endl;
    }
};
int main(){
    result r;
    r.input();
    r.output();

    return 0;
}