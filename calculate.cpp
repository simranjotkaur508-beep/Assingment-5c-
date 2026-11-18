#include<iostream>
using namespace std;
float circle(int a);
float triangle(int a,int b);
int rectangle(int a,int b);
int main()
{
  cout<< circle(5) << endl;
  cout<<triangle(10,5) << endl;
  cout<<rectangle(10,5) << endl;
  return 0;

}

float circle(int a)
{
    cout<<3.14*a*a;
   
}

float triangle(int a,int b)
{
    cout<<0.5*a*b;
   
}

int rectangle (int a,int b)
{
      cout<<a*b;
      
}


