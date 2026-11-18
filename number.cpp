#include <iostream>
using namespace std;

int maximum(int a=5, int b=10);
void check(int a=5, int b=10);

int main()
{
    cout << maximum(5,10) << endl;

     check(10,5) ;

    return 0;
}

int maximum(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void check(int a, int b)
{
   for(a;a>=-100 && a<=100; )
   {
       for(b;b>=-100 && b<=100; )
       {
        cout<<"both"<<a<<"and"<<b<<"are integer";
       }
   }

   cout<<"real";
}