#include<iostream>
#include<cstring>

using namespace std;

struct students 
{
  
  int regno;
  string name;
  int age;

};
 void initialise( students s[], int size)
  {
      for(int i=1;i<=size;i++)
      {
        cout<<"enter reg number "<<endl;
        cin>>s[i-1].regno;
        cin.ignore();
        cout<<"enter name "<<endl;
        getline(cin , s[i-1].name);
        cout<<"enter age"<<endl;
        int a;
        do
        {
            cin>>a;
          if(a>=11 && a<=14)
          {
            s[i-1].age=a;
          }
          else
          {
            cout<<"Wrong age entered"<<endl;
          }
        }while(s[i-1].age != a);
      }
  };
  void display(students s[], int size)
  {
    for(int i=1;i<=size;i++)
    {  
        if(s[i-1].age==14)
        {
        cout<<"name of student is "<<s[i-1].name<<endl;
        }
    }
  } ;

  void displayeven(students s[], int size)
  {
    for(int i=1;i<=size;i++)
    {
      if(s[i-1].regno%2==0)
      {
        cout<<"name of student is "<<s[i-1].name<<endl;
      }
    }
  };

  void displaystd(students s[], int size)
  {
     cout<<"Enter roll number "<<endl;
     int roll;
     cin>>roll;
     
     for(int i=1;i<=size;i++)
     {
        if(roll==s[i-1].regno)
        {
         cout<<"Roll number of student is "<<s[i-1].regno<<endl;
         cout<<"Name of student is "<<s[i-1].name<<endl;
         cout<<"Age of student is "<<s[i-1].age<<endl;
        }
     }
  };

int main()
{   
    cout<<"Enter number of students,has to be more than 10"<<endl;
    int size;
    cin>>size;
    students s[size];
    initialise(s , size);
    cout<<endl;
    display(s , size);
    cout<<endl;
    displayeven(s, size);
    cout<<endl;
    displaystd(s , size);

    return 0;
}