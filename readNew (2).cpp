/*Read word by word from a .txt file*/
#include<iostream>
#include <fstream>
#include <string>
#include <cstdlib>


using namespace std;

int main()
{ 

    
    ifstream file;
    file.open ("myFile.txt");
    if (file.is_open()==false) 
    {
        cerr<<"The File has not opened"<<endl;
        return EXIT_FAILURE;
    }

    string word;
    
    while (file >> word) // get all characters untill find whitespace
    {
        cout<< word << '\n';
    }
    return 0;

      
    
}






/* ifstream file;
    file.open ("myFile.txt");   //C:\\Users\\tasoulis\\Desktop\\input\\1.txt
    string word;
    char x ;
    word.clear();

    while ( ! file.eof() )
    {
        x = file.get();

        while ( x != ' ' )
        {
            word = word + x;
            x = file.get();
        }

            cout<< word <<endl;
            word.clear();

    }
*/

