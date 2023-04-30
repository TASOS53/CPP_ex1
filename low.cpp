#include"low.h"
#include<iostream>
#include<string>
using namespace std;


bool LOW::Search(string x, LOW_node *y)
{
    y=nullptr;
    LOW_node *current=first;
    while(current!=nullptr)//οσο το current δεν εχει τιμη μηδεν(δηλαδή δεν φτάσαμε στον τελευταίο κόμβο της λίστας) και 
    {
        if (current->word.compare(x)==0 ) 
        {  
            y=current; //ο δείκτης y θα με βοηθήσει να ξέρω σε ποια διεύθυνση ειναι αποθηκευμένος ο κόμβος Low_node στον οποίο βρέθηκε η λέξη που εψαχνα
            return true;//Το βρήκα!
        }
        else
        {    
            current= current->next;
        }
    }
    return false;
    
 
}

void LOW::Insert(string NewWord, int fileNumber)

{
    
    LOW_node *new_node = new LOW_node();
    new_node->word=NewWord;
    new_node->numberOfFiles=1; //Την πρωτη φορά που θα καλέσω την insert θα είναι η πρώτη φορά που θα βρω την λέξη.
    new_node->lof= new LOF();
    new_node->lof->Insert(fileNumber);
    

    if (first==nullptr)
    {
        new_node->next=nullptr;
        first=new_node;
    }
    else if (NewWord<first->word)
    {
        new_node->next=first;
        first=new_node;
    }
    else if (NewWord>first->word)
    {
        LOW_node *current=first;

        while (current->next != nullptr && current->next->word <NewWord)
        {
           current=current->next;
        }
        new_node->next=current->next;
        current->next=new_node;

    }
}

void LOW::PrintMyList(void)
{

    LOW_node * current= first;
    while (current!=nullptr)
    {
        //cout<<current->word<<' '<<current->numberOfFiles<<endl;
        cout<<current->word<<" has been found in "<<current->numberOfFiles<<" files." << "And the files are: ";
        current->lof->PrintMyList();
        cout<<endl;
        current= current->next;
    }
     
     
}


void LOW :: update (LOW_node*y, int FileNumber)
{
   if(y->lof->Search(FileNumber)==false) 
   { 
        y->lof->Insert(FileNumber);
        y->numberOfFiles++;
   }

}