#include<iostream>

using namespace std;

int main()
{
    int arr[10]={0};
    cout<<"enter values of array "<<endl;

    for(int i=0; i<10; i++)
   {
     cin>>arr[i];

   }
   int *ptr=&arr[0];
   int sum=0;
   
   for(int i=0;i<10;i++)
   {
    sum= sum+*(arr+i);
    
   }
   cout<<sum;

   return 0;
}