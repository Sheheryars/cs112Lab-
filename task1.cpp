#include<iostream>

using namespace std;

int main()
{
 int x=20;
 int *ptrx;
ptrx=&x;

 cout<<"the value of x is "<<x<<endl;
 cout<<"the value of pointer to x is "<<*ptrx<<endl;
 cout<<"the address of x is "<<&x<<endl;
 cout<<"the address of pointer to x is "<<ptrx<<endl;

return 0;

}