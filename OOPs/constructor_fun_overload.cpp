#include <iostream>
using namespace std;
class ComplexNo
{
    private: 
        int real;
        int imag;
    public: 
    ComplexNo()//-->Default Constructor
    {
        real = 0;
        imag = 0;
    }
    ComplexNo(int a, int b)//-->Specific constructor
    {
        real = a;
        imag = b;
    }
    ComplexNo(const ComplexNo& z)//-->copy constructor
    {
        real = z.real;
        imag = z.imag;
    }
    void display();

};
    void ComplexNo::display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
int main()
{
    ComplexNo x;
    x.display();
    ComplexNo y(2,3);
    y.display();
    ComplexNo z(y);
    z.display();

    return 0;
}