//print characters from .txt files , from folder input , with the defined order by the orederOfFiles.cpp file.
#include"low.h"
#include<string>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{   
    int orderOfFiles[] = {26, 94, 22, 40, 43, 24, 87, 44, 31, 45, 6, 
    49, 14, 53, 58, 33, 74, 13, 19, 93, 55, 71, 39, 29, 10, 80, 86, 77,
    79, 82, 9, 92, 17, 96, 50, 2, 65, 90, 89, 11, 57, 51, 68, 83, 66, 54, 
    27,95, 48, 81, 70, 25, 4, 60, 21, 76, 75, 61, 15, 37, 30, 62, 34, 56, 
    88, 59, 1,32, 3, 73, 78, 42, 16, 36, 7, 47, 12, 67, 85, 64, 28, 52, 84, 
    98, 69, 41, 63, 72, 46, 20, 18, 100, 97, 99, 23, 38, 35, 91, 8, 5};
    

    //int orderOfFiles[] = {1000,1001} ;
    int i;
    string pathName;
    string s1=".\\input\\";
    string s2;
    string s4 =".txt";

   
    LOW *l2 = new LOW();
    
    LOW_node *y=nullptr ;
    
    for(i=0; i<100; i++)
    {
        s2=to_string(orderOfFiles[i]);
        pathName= s1+s2+s4;
        cout<< pathName<<endl;
    
    
    
        ifstream FileToBeRead;   
        FileToBeRead.open(pathName);            
        if (FileToBeRead.is_open()==false) 
        {
            cerr<<"The File has not opened"<<endl;
            return EXIT_FAILURE;
        }

        string new_word;
        
        while (FileToBeRead >> new_word) // get all characters untill find whitespace
        {
            if((y=(l2->Search(new_word)))==nullptr)//If not found
            {
                l2->Insert(new_word,orderOfFiles[i]);
            }
            else
            {
                l2->update(y,orderOfFiles[i]);
            }
        }
        FileToBeRead.close();
    
    }
    l2->PrintMyList();



    
     


   return 0;

}