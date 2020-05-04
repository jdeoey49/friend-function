#include<iostream>
#include"Count.h"
using namespace std;
int main()
{
    Count counter;
    
    cout<<"counter.x_ after instantiation ";
    counter.print();
    
    setx(counter,8);
    cout<<"counter.x_ after call to setx() friend function: ";
    counter.print();
    
}

