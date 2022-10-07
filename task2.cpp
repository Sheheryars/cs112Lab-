#include<iostream>

using namespace std;

int main()
{
 int x=90;
 int *ptrx;
 int **ptp;
 ptrx=&x;
 ptp=&ptrx;

 cout<<"the address of x is "<<&x<<endl;
 cout<<"the address of ptrx is "<<&ptrx<<endl;
 cout<<"the address ptrx is pointing to is "<<ptrx<<endl;
 cout<<"the address of ptp is "<<&ptp<<endl;
 cout<<"the address ptp is pointing to is "<<ptp<<endl;
 cout<<"Value of x "<<x<<endl;
 cout<<"Value of ptrx "<<*ptrx<<endl;
 cout<<"Value of ptp "<<**ptp<<endl;   

return 0;
}