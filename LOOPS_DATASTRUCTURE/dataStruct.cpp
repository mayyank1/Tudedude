#include <iostream>
#include <string.h>
using namespace std;
struct Employee
{
    char name[20];
    int age;
    int id;
    int salary;
};
int main()
{
    Employee x{"Mayank",20,214598,20000};
    // char naam[] = "Mayank";
    // strcpy(x.name, naam);
    // x.age = 20;
    // x.id = 214598;
    // x.salary = 20000;
    cout << x.name << "\t" << x.age << "\t" << x.id << "\t" << x.salary << endl;

}