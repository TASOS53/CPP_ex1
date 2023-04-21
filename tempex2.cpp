#include<iostream>
using namespace std;


void changeVal(int &) ; //function call by reference

int main()
{
    int y=10;
    cout<<y<<endl;
    changeVal(y);
    cout<<y<<endl;
    return 0;
}

void changeVal( int &y)
{
    y=y+10;
}