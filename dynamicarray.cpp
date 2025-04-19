#include<iostream>
using namespace std;
class Array{
    private:
    int *a;
    int n;
    public:
    void input();
    void show();

};
void Array::input(){
    cout<<"how many number are there:";
    cin>>n;
    a=new int[n];
    cout<<"Enter the array element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

}
void Array::show(){
    cout<<"Array is"<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<"t";
        cout<<endl;
    }
}
int main(){
    Array a,b;
    a.input();
    b.input();
    a.show();
    b.show();
    return 0;
}
