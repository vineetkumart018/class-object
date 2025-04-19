#include <iostream>
using namespace std;
class Complex; // forward Declaration.

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(Complex o1, Complex o2);
    int sumcompcomplex(Complex o1, Complex o2);
};
class Complex
{
    int a, b;
    // Individually declaring fuctions as friends.
    //  friend int calculator::sumrealcomplex(Complex o1, Complex o2);
    //  friend int calculator::sumcompcomplex(Complex o1, Complex o2);
    // Alternate :Declaring the entire calculator class as friend
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void PrintNumber()
    {
        cout << "Your number is" << a << "," << b << "i" << endl;
    }
};

int calculator::sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcompcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int result = calc.sumrealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;
    int result2 = calc.sumcompcomplex(o1, o2);
    cout << "The sum of Complex part of o1 and o2 is " << result2 << endl;
    return 0;
}