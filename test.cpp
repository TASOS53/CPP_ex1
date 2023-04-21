#include<iostream>
#include"lof.h"
#include<fstream>
using namespace std;

int main(void)
{
    LOF *l1 = new LOF();
    l1->Insert(2);
    l1->Insert(33);
    l1->Insert(4);
    if(l1->Search(4))cout<<"bla bla";
    else cout<<"ha ha";
    

    return 0;
}   