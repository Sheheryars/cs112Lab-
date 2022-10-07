#include<iostream>

using namespace std;

void callbypointer( int *x , int *y)
{
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
}

int main()
{
   //swapping 2 values via pointers
   int z=5;
   int *zptr=&z;
   int g=9;
   int *gptr=&g;

   cout<<"the value of z and g before swap are "<<*zptr<<endl<<*gptr<<endl;
   callbypointer(&z , &g);
   cout<<"the value of z and g after swap are "<<*zptr<<endl<<*gptr<<endl;
 
   return 0;
}