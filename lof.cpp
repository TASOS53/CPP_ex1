#include"lof.h"

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

    LOF_node *current=first;

    //We know that the last Lof_node, next member has the value zero/NULL
    while (current!=nullptr)
    {
        current = current->next;
    }
    current->next= new_node;
    
}