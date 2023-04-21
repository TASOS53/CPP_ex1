#include<iostream>

using namespace std;


void func (const int &x );

int main()
{
    int y=5;
    cout<<y<<endl;
    func(y);
}

void func (const int &x)
{
    cout<<"the value of x is = "<<x<<endl;
   

}