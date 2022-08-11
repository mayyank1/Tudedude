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
};


int main()
{
    ComplexNo a,b,c,d;
    ComplexNo *e;
    e = &d;
    a.setValues(1,2);
    b.setValues(3,4);
    a.display();
    b.display();
    c = a.findProduct(b);
    c.display();
    cout << c.isreal() << endl;
    d.setValues(1,2);
    e->display();//--> accesing pointers variable in cpp

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