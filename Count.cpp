#include<iostream>
#include"Count.h"
using namespace std;
Count::Count():x_(0)
{
    
}
void Count::print()
{
    cout<<x_<<endl;
}
void setx(Count &cref, int num)
{
    cref.x_=num;
}
