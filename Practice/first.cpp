#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex , Complex );
    int sumCompComplex(Complex , Complex );
};

class Complex
{
    int a, b;
    // Indivitually declaring functions as friends
    // friend int Calculator :: sumRealComplex(Complex , Complex );
    // friend int Calculator :: sumCompComplex(Complex , Complex );

    // Aliter: Declaring the entire Calculator class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int Calculator :: sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator :: sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2, c3;
    Calculator calc;

    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 6);
    c2.printNumber();
    int res = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part of c1 and c2 is: "<<res<<endl;
    int resc = calc.sumCompComplex(c1, c2);
    cout << "The sum of Complex part of c1 and c2 is: "<<resc<<endl;
    return 0;
}