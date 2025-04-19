#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
    cout<<"Enter the element of array:->";
    cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]!='0'){
            count++;
        }
    }
    cout<<"The number of element in the array:->"<<count;
    return 0;
}