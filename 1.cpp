#include<iostream>
#include<cstring>

using namespace std;

struct students 
{
  
  int regno;
  string name;
  float cgpa;

};
 void initialise( students s[], int size)
  {
      for(int i=1;i<=size;i++)
      {
        cout<<"enter reg number "<<endl;
        cin>>s[i].regno;
        cin.ignore();
        cout<<"enter name "<<endl;
        getline(cin , s[i].name);
        cout<<"enter CGPA"<<endl;
        cin>>s[i].cgpa;
      }
  }
  void display(students s[], int size)
  {
    for(int i=1;i<=size;i++)
    {
        cout<<"reg number of student number "<<i<<" is "<<s[i].regno<<endl;
        cout<<"name number of student number "<<i<<" is "<<s[i].name<<endl;
        cout<<"CGPA number of student number "<<i<<" is "<<s[i].cgpa<<endl;
    }

  }

int main()
{   
    int size=4;
    students s[size];
    initialise(s , size);
    display(s , size);

    return 0;
}