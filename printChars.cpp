/*Το αρχείο printChars, θα θεωρηθεί ως η MAIN του προγράμματος μας, επίσης μέσα στον 
κώδικα των αρχείων υπάρχουν κάποιες εντολές σε σχόλια -όπου αυτό κρίνεται αναγκαίο- προκειμένου να 
αναδειχθούν κάποιες δοκιμές που έγιναν στην διάρκεια κατασκευ'ης του κωδικα. */

#include"low.h"
#include<string>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{   
    /*Ξεκινάμε δηλώνοντας τον πίνακα orderOfFiles, 
    προκειμένου να διαβαστούν τα αρχεία με την σειρά 
    που υποδικνύει η εκφώνηση.*/

    int orderOfFiles[] = {26, 94, 22, 40, 43, 24, 87, 44, 31, 45, 6, 
    49, 14, 53, 58, 33, 74, 13, 19, 93, 55, 71, 39, 29, 10, 80, 86, 77,
    79, 82, 9, 92, 17, 96, 50, 2, 65, 90, 89, 11, 57, 51, 68, 83, 66, 54, 
    27,95, 48, 81, 70, 25, 4, 60, 21, 76, 75, 61, 15, 37, 30, 62, 34, 56, 
    88, 59, 1,32, 3, 73, 78, 42, 16, 36, 7, 47, 12, 67, 85, 64, 28, 52, 84, 
    98, 69, 41, 63, 72, 46, 20, 18, 100, 97, 99, 23, 38, 35, 91, 8, 5};
    
    //int orderOfFiles[] = {1000,1001} ;
    int i;
    string pathName,test_word;
    string s1=".\\input\\";
    string s2;
    string s3 =".txt";
    
    /*Τα παραπάνω τρία στον αριθμό stringεχουν φτιαχτεί για να 
    κατασκευάζεται κάθε φορά το path του αρχείου που πρέπει να 
    γίνει open ωστε να διαβαστούν οι λέξεις του μία προς μια.*/
    
    LOW *l2 = new LOW();
    LOW_node *y=nullptr ;
    
    for(i=0; i<100; i++)
    {
        s2=to_string(orderOfFiles[i]); 
        /*Χρησιμοποιώ την to_String  ώστε να μετατρέψω το int 
        περιεχόμενο του orderOfFiles[i], για να μπορώ να κάνω 
        την ανάθεση τιμής στο s2*/
        
        pathName= s1+s2+s3;
        // cout<< pathName<<endl;

        ifstream FileToBeRead;   
        FileToBeRead.open(pathName);   //Ανοίγω το τρέχον αρχείο.         
        if (FileToBeRead.is_open()==false)//Αν το αρχείο αποτύχει να ανοίξει. 
        {
            cerr<<"The File has not opened"<<endl;
            return EXIT_FAILURE;
        }
        string new_word;
        
        while (FileToBeRead >> new_word) // get all characters untill find whitespace.
        {
            if((y=(l2->Search(new_word)))==nullptr)//If not found.
            {
                l2->Insert(new_word,orderOfFiles[i]);//Αφού δεν βρέθηκε η λέξη πρόσθεσε την!
            }
            else
            {
                l2->update(y,orderOfFiles[i]);//αλλιώς ενημέρωσε το πεδίο numberOfFiles του τρέχοντος LOW_node κόμβου.
            }
        }
        FileToBeRead.close();//Κλείσε το τρέχον αρχείο.
    }
    //l2->PrintMyList();
   
    cout<<"All words have been loaded."<<endl;
    cout<<"Search for a word"<<endl;
    cin>>test_word;
    while ( !cin.eof() )//Διάβασε μέχρι να λέξεις μέχρι να δοθεί απο το πληκτρολόγιο το ΕΟF είτε CRTL+D,είτε CRTL+Z,είτε CRTL+Z. 
    {
        if((y=(l2->Search(test_word)))==nullptr)//Ελεγξε, αν η λέξη που διάβασες απο το πληκτρολόγιο υπάρχει στην λίστα LOW(ListOfWords)
        {
            cout<<"The word "<<test_word<<" is not found."<<endl;
        }
        else
        {
            cout<<"The word "<<test_word<<" appears in "<<y->numberOfFiles<< " documents."<<endl;
            cout<<"These documents are: ";
            y->lof->PrintMyList();//Tυπωσε το πεδίο fileNumber τoυ εκάστοτε lof_node
            cout<<endl;
        }
        cout<<"Search for a word "<<endl;
        cin>>test_word;
    }
     //cout <<"Before delete" <<endl;
    //_sleep(20000);

    l2->Delete();

    //cout <<"After delete" <<endl;
    //_sleep(20000);

    /*H μέθοδος sleep() xρησιμοποιήθηκε για να ελεγχθεί με την βοήθεια του task manager,
     πόσος χώρος εξοικονομήθηκε απο την διαγραφή των κόμβων
    */

   return 0;
}