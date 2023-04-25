#include<iostream>
#include"lof.h"
#include<fstream>
using namespace std;

int main(void)
{
    LOF *l1 = new LOF();
    l1->Insert(2);
    l1->Insert(1);
    l1->Insert(0);
    l1->Insert(21);
    l1->Insert(44);
    l1->Insert(20);
    
    //l1->Print(); PREPEI NA THN YLOPOIHSO 
    //if(l1->Search(4))cout<<"bla bla";
    //else cout<<"ha ha";
    

    return 0;
}   