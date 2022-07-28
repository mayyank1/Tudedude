#include <iostream>

using namespace std;

int main()
{
    int inpNo = 0;
    cout << "Enter the no: ";
    cin >> inpNo;

    if(inpNo == 0)
        cout << "ZERO" << endl;
    else if(inpNo%2==0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;

    return 0;
}