#include<iostream>
#include<cstring>

using namespace std;

struct member
{
  
  int age;
  string name;
  double salary;

};
 void initialise( member &s)
  {
      
      
        cout<<"enter age "<<endl;
        cin>>s.age;
        cin.ignore();
        cout<<"enter name "<<endl;
        getline(cin , s.name);
        cout<<"enter salary"<<endl;
        cin>>s.salary;
      
  }
  void display(member &s)
  {
  
    
        cout<<"Name of member is "<<s.name<<endl;
        cout<<"Age of member is "<<s.age<<endl;
        cout<<"Salary of member is "<<s.salary<<endl;
   

  }

int main()
{   
    member s;
    initialise(s);
    display(s);

    return 0;
}