#include <iostream>
using namespace std;
class Employee
{
    private:
        string name;
        string phoneNo;
        string jobPost;
        int age;
    public:
    void setData(string,string,string,int);
    void putData();
};
int main()
{
    Employee no1;
    no1.setData("Mayank","8126838717","HR",20);
    no1.putData();


    return 0;
}
void Employee::setData(string x,string y,string z,int a)
{
    name = x;
    phoneNo = y;
    jobPost = z;
    age = a;
}

void Employee::putData()
{
    cout<<"----EMPLOYEE DATA----"<<endl;
    cout<<"Name: "<< name <<endl;
    cout<<"Phone: "<< phoneNo<<endl;
    cout<< "Job: "<< jobPost<<endl;
    cout<<"Age: "<< age<<endl;
}