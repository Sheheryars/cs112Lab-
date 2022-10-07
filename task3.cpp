#include<iostream>

using namespace std;

class pointers{
 protected:
 int x;
 int *ptrx;
 int **ptp;

 public:
 pointers()
 {
    x=50;
 }
 ~pointers()
 {
   cout<<"destructor was called"<<endl;
 };

 void callbyval( int b )
 {
    x=b;
 }
 void calltoptr( int b)
 {
    ptrx=&x;
    cout<<"the address of x is "<<&x<<endl;
    cout<<"the address ptrx is pointing to is "<<ptrx<<endl;
    cout<<"value of x is "<<x<<endl;
    cout<<"value of ptrx is "<<ptrx<<endl;
    x=b;
    cout<<"New value of x is "<<x<<endl;
    cout<<"New value of ptrx is "<<ptrx<<endl;


 }
  void calltodoubleptr ( void )
  {
    cout<<"the address of ptrx is "<<&ptrx<<endl;
    cout<<"the address of ptp is "<<&ptp<<endl;
    ptp=&ptrx;
    cout<<"value of ptrx is "<<ptrx<<endl;
      cout<<"value of ptp is "<<ptp<<endl;

  }

};
int main()
{
    int c =20;
    pointers p;

    p.callbyval( c );
    p.calltoptr( c );
    p.calltodoubleptr( );

    return 0;

}