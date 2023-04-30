#include<string>
#include"lof.h"
using namespace std;

class LOW_node;


class LOW
{
    public:
        LOW(){first=nullptr;}
        ~LOW(){};
        LOW_node * Search(string x);
        void Insert(string k, int fileNumber );
        void PrintMyList(void);
        void update(LOW_node* y, int FileNumber);
        void Delete();
    private:
        LOW_node *first;
        
};

class LOW_node
    {
        friend LOF;
        public:
            LOW_node ()
            {
                numberOfFiles=0;
                next=nullptr;
                lof=nullptr;
            };
            ~LOW_node (){};
            string word;
            int numberOfFiles; //Το πλήθος των αρχείων στα οποία βρέθηκε η λέξη 
            LOF *lof;
            LOW_node *next;
        
    };