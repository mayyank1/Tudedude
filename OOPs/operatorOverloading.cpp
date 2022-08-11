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
    void setValues(int ,int );//-->mutators function
    bool isreal();//-->enquiry function
    ComplexNo findProduct(ComplexNo);//-->facilitators function
    ComplexNo operator +(const ComplexNo&);//-->Operator overloading
    ComplexNo operator *(const ComplexNo&);
    friend ComplexNo operator -(const ComplexNo& ,const ComplexNo&);//-->operator Overloading by friend function
};


int main()
{
    ComplexNo a,b,c;
    a.setValues(1,2);
    b.setValues(3,4);
    c = a + b;
    c.display();
    c = a * b;
    c.display();
    c = a - b;
    c.display();
    return 0;
}



void ComplexNo::display()//-->accessors function
{
    cout << real << "+" << imag << "i" << endl;
}
void ComplexNo::setValues(int x,int y)
{
    real = x;
    imag = y;
}
bool ComplexNo::isreal()
{
    if(imag==0)
        return true;
    else
        return false;
}
ComplexNo ComplexNo::findProduct(ComplexNo x)
{
    ComplexNo z;
    z.real = real*x.real - imag*x.imag;
    z.imag = imag*x.real + real*x.imag;
    return z;
}
ComplexNo ComplexNo::operator +(const ComplexNo& k)
{
    ComplexNo c;
    c.real = real + k.real;
    c.imag = imag + k.imag;
    return c;
}
ComplexNo ComplexNo::operator *(const ComplexNo& k)
{
    ComplexNo c;
    c.real = real*k.real - imag*k.imag;
    c.imag = imag*k.real + real*k.imag;
    return c;
}
ComplexNo operator -(const ComplexNo& x ,const ComplexNo& y)
{
    ComplexNo c;
    c.real = x.real - y.real;
    c.imag = x.imag - y.imag;
    return c;
}