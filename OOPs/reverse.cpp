#include <iostream>
using namespace std;

class Reverse
{
    public: 
        int num;
        int revNo;
    Reverse()
    {
        num = 0;revNo = 0;
    }
    void numRev()
    {
        while(num!=0)
        {
            int digit = num%10;
            revNo = revNo*10 + digit;
            num = num/10;
        }
    }
};
int main()
{
    Reverse x;
    cout << "Enter the number: " <<endl;
    cin >> x.num;
    x.numRev();
    cout << x.revNo << endl;

    return 0;
}