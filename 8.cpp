#include<iostream>

using namespace std;

class stack {
    private:
     int top;
    public:
     int arr[13];
     int count;
     int count2;
     stack()
      {
        top= -1;
        count=-1;
        count2=6;
        arr[13]={0};
      }
       void push1(int x)
      {
        if(count >= 6)
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            arr[++count]=x;
            
        }
      };
      void push2(int x)
      {
        if(count2 >= 13)
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            arr[++count2]=x;
            
        }
      }
        int pop1()
      {
        if(count < 0 )
        { 
            cout<<"Stack underflow"<<endl;
        }
        else
        {
            return arr[count--];
             
        }
       
      };

       int pop2()
      {
        if(count2 < 7 )
        { 
            cout<<"Stack underflow"<<endl;
        }
        else
        {
            return arr[count2--];
             
        }
        
      };
       void emptychk1()
      {
        if( count < 0 )
        {
            cout<<"Stack underflow"<<endl;

        }
        else
        {
            cout<<"Stack1 is not empty"<<endl;
        }
      };
      
      void emptychk2()
      {
        if( count2 < 7 )
        {
            cout<<"Stack underflow"<<endl;

        }
        else
        {
            cout<<"Stack2 is not empty"<<endl;
        }
      };
};
   
int main()
{
    stack s;
    int x=0;
    while(x !=7){
    cout<<"1,Push stack 1"<<endl;
    cout<<"2,Pop stack 1"<<endl;
    cout<<"3,push stack 2"<<endl;
    cout<<"4,pop stack 2"<<endl;
    cout<<"5,check stack 1"<<endl;
    cout<<"6,check stack 2"<<endl;
    cout<<"7,Exit"<<endl;
     cin>>x;
    switch(x)
    {
        case 1:
      {
        cout<<"Enter a value for stack 1"<<endl;
        int z;
        cin>>z;
        s.push1(z);
        break;
      }
      case 2:
       {
        cout<<s.pop1();
        cout<<endl;
        break;

      }
      case 3:
      {
         cout<<"Enter a value for stack 2"<<endl;
        int z;
        cin>>z;
        s.push2(z);
        break;
      }
      
      case 4:
       {
        cout<<s.pop2();
        cout<<endl;
        break;

      }
     case 5:
     {
        s.emptychk1();
        break;
      }
     case 6:
     {
        s.emptychk2();
        break;
      }
     case 7:
      {
        break;
      }
    }
}
return 0;
}