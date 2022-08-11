#include <iostream>

using namespace std;

class Testing
{
    private:
        int a;
        float b;
    public:
        int c;
        float d;
    Testing()//--> constructors
    {
        a=0;
        b=0;
        c=0;
        d=0;
    }
    // void set_default(void)
    // {
    //     a = 0;
    //     b = 0;
    // }
    void print_values(void)
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
        cout << "d: " << d << endl;
    }
};

int main()
{
    Testing x;//---> object for class Testing
    // x.a = 5;
    x.c = 8;
    x.d = 0.1;
    // x.set_default();
    x.print_values();
    // cout << x.c << endl;

    return 0;
}