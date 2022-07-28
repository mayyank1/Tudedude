#include <iostream>

using namespace std;

int main()
{
    int no1,no2;
    char op;
    cout << "Enter the first no: ";
    cin >> no1;
    cout << "Enter the second no: ";
    cin >> no2;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Answer : ";

    switch(op)
    {
        case '+': 
            cout << no1+no2 << endl; 
            break;
        case '-': 
            cout << no1-no2 << endl; 
            break;
        case '*': 
            cout << no1*no2 << endl; 
            break;
        case '/': 
            cout << no1/no2 << endl; 
            break;
        default:
            cout << "Invalid" << endl;
    }

    return 0;
}