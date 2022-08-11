#include <iostream>
using namespace std;

int findGreatest(int ,int ,int);
float findGreatest(float ,float ,float);

int main()
{
    int a,b,c;
    float x,y,z;
    cout << "Enter the 3 integer no:" << endl;
    cin >> a >> b >> c;
    cout << "Greatest no: " << findGreatest(a,b,c) << endl;
    cout << "Enter the 3 float no:" << endl;
    cin >> x >> y >> z;
    cout << "Greatest no: " << findGreatest(x,y,z) << endl;


    return 0;
}
int findGreatest(int a,int b,int c)
{
    if(a>=b && a>=c) 
        return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
}

float findGreatest(float a,float b,float c)
{
    if(a>=b && a>=c) 
        return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
}