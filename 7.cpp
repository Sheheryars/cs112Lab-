#include<iostream>

using namespace std;
 
 class stack {
    private:
     int top;
     int top2;
    public:
     int arr[15];
     int rev[15];
     int count;
     stack()
      {
        top= -1;
        top2=-1;
        count=0;
      }

      void push(int x)
      {
        if(top >= 15)
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            arr[++top]=x;
            count++;
        }
      };

      void reverse()
      {
        for(int i=0; i<count;i++)
        {
             if(top2 >= 15)
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            rev[++top2]=arr[top--];
           
        }

        }

      }

      void display1()
      {
        for(int i=0;i<count;i++)
        {
            cout<<arr[i]<<endl;
        }
      }
      void display2()
      {
        for(int i=0;i<count;i++)
        {
            cout<<rev[i]<<endl;
        }
      }
 };

 int main()
{
    stack s;
        
        cout<<"Enter values for stack"<<endl;
        cout<<"Enter -1 to stop entering values "<<endl;
        int z;
      while(z !=-1){ 
        cin>>z;
        s.push(z);}

        s.display1();
        s.reverse();
        s.display2();
        return 0;
 }
      
    
