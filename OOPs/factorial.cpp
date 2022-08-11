#include <iostream>
using namespace std;
class Factorial
{
    public: 
        int num;
        long long int fact;
    Factorial()
    {
        num = 0;
        fact = 0;
    }
    long long facto(int n)
    {
        if(n == 0)
            return 1;
        else
            return(n*facto(n-1));
    }
};
int main()
{
    Factorial x;
    cout << "Enter the number: " << endl;
    cin >> x.num;
    x.fact = x.facto(x.num);
    cout << x.fact << endl;
    return 0;
}