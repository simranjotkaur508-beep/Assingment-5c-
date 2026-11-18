#include<iostream>
using namespace std;
void swap(int &x,int &y,int temp);
int main()
{
    int a,b;
    cout<<"enter tow numbers";
    cin>>a>>b;
    swap(a,b);
    cout<<"swap numbers are :-"<<a<<"and"<<b;
    return 0;
}

void swap(int &x,int &y,int temp)
{
    temp=y;
    y=x;
    x=temp;
    
}