#include<iostream>
#include <string>
#define ENDFILE "CTRL-Z" //ENDFILE is a string
using namespace std;

int main()
{
    const char NWLN = '\n'; // newline character
    char next;
    int charCount;
    int totalChars;
    int lineCount;
    lineCount = 0;
    totalChars = 0;
    cout << "Enter a line or press CRTL-Z : ";
    
    while (cin.get(next)) 
    { 
        // a new line, if user hits ^Z, cin.get returns 0
        charCount = 0;
        while (next != NWLN && !cin.eof())
        {
            cout.put(next);
            charCount++;
            totalChars++;
            cin.get(next);
        } // end inner while to get a line
        
        cout.put(NWLN);
        lineCount++;
        cout << "Number of characters in line "<< lineCount << " is " << charCount << endl;
        cout << "Enter a line or press CRTL-Z :";
    } 

    cout << endl << endl<< "Number of lines processed is "<< lineCount << endl;
    cout << "Total number of characters is "<< totalChars << endl;
    return 0;
}