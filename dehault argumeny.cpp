#include<iostream>
using namespace std;
void add(int a,int b=20,int c=50);
int main()
{
    add(5);
    return 0;

}

void add(int a,int b,int c)
{
    cout<<a+b+c;
}