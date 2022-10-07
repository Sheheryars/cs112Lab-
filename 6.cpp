#include<iostream>

using namespace std;

class stack {
    private:
     int top;
    public:
     int arr[15];
     int count;
     stack()
      {
        top= -1;
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

      int pop()
      {
        if(top < 0 )
        { 
            cout<<"Stack underflow"<<endl;
        }
        else
        {
            return arr[top--];
             count--;
        }
       
      };

      void emptychk()
      {
        if( top < 0 )
        {
            cout<<"Stack underflow"<<endl;

        }
        else
        {
            cout<<"Stack is not empty, "<<count<<" values are inside "<<endl;
        }
      };

};

int main()
{
    stack s;
    int x=0;
    while(x !=4){
    cout<<"1,Push"<<endl;
    cout<<"2,Pop"<<endl;
    cout<<"3,Check"<<endl;
    cout<<"4,Exit"<<endl;
    
    cin>>x;
    switch(x)
    {
      case 1:
      {
        cout<<"Enter a value"<<endl;
        int z;
        cin>>z;
        s.push(z);
        break;
      }

      case 2:
      {
        cout<<s.pop();
        cout<<endl;
        break;

      }

      case 3:
      {
        s.emptychk();
        break;
      }

      case 4:
      {
        break;
      }
    }
}
  return 0;
}