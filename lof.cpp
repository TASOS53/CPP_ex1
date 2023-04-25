#include"lof.h"
#include<iostream>
using namespace std;


bool LOF::Search(int x)
{
    LOF_node *current=first;
    int index;
    while(current!=nullptr)//οσο το current δεν εχει τιμη μηδεν(δηλαδή δεν φτάσαμε στον τελευταίο κόμβο της λίστας) και 
    {
        if (current->FileNumber==x)   return true;//Το βρήκα!
        else
        {    
            current= current->next;
            index ++;
        }
    }
    return false;
 //   if(current==nullptr) return false; //Σημαίνει οτι έφτασα στο τέλος και δεν το βρήκα 
   // else return true;
}


void LOF::Insert(int NewFileNumber)

{
    
    LOF_node *new_node = new LOF_node();
    new_node->FileNumber=NewFileNumber;
    new_node->next=0;

    if (first==nullptr)
    {
        new_node->next=nullptr;
        first=new_node;
    }
    else if (NewFileNumber<first->FileNumber)
    {
        new_node->next=first;
        first=new_node;
    }
    else if (NewFileNumber>first->FileNumber)
    {
        LOF_node *current=first;

        while (current->next != nullptr && current->next->FileNumber < NewFileNumber)
        {
           current=current->next;
        }
        new_node->next=current->next;
        current->next=new_node;

    }
}


void LOF::PrintMyList(void)
{

    LOF_node * current= first;
    while (current!=nullptr)
    {
        cout<<current->FileNumber<<endl;
        current= current->next;
    }
     
     
}