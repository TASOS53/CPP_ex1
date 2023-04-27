//print characters from .txt files , from folder input , with the defined order by the orederOfFiles.cpp file.

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
    int i;
    string pathName;
    string s1=".\\input\\";
    string s2;
    string s4 =".txt";
    
    for(i=0; i<2; i++)
    {
        s2=to_string(orderOfFiles[i]);
        pathName= s1+s2+s4;
        cout<< pathName<<endl;
    
    
    
        ifstream FileToBeRead; //The name of each file which words I am going to print
        //FileToBeRead.open("C:\Users\tasoulis\Documents\UNIPI\ΥΛΙΚΟ_ΔΙΑΦΑΝΕΙΕΣ\ΕΤΟΣ_1ο\Β_ΕΞΑΜΗΝΟ\ΔΟΜΕΣ_ΔΕΔΟΜΕΝΩΝ\ΕΡΓΑΣΙΕΣ\1\input");     
        FileToBeRead.open(pathName);            
        if (FileToBeRead.is_open()==false) 
        {
            cerr<<"The File has not opened"<<endl;
            return EXIT_FAILURE;
        }

        string word;
        
        while (FileToBeRead >> word) // get all characters untill find whitespace
        {
            cout<< word << '\n';
        }
        FileToBeRead.close();
    }


    

    

















    return 0;

}