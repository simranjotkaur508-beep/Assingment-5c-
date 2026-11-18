#include<iostream>
using namespace std;
int add( int a,int b);
int add(int a,int b);
int main()
{
     cout<<add(10,20)<<endl;
     cout<<add(10,20)<<endl;
     return 0;
}


 int add( int a=10,int b=20)
 {
    return a+b;
 }

 int add(int a=10,int b=20)
{
    return a+b;
}
