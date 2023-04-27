#include<string>
#include"lof.h"
using namespace std;

class LOW_node;


class LOW
{
    public:
        bool Search(string x, LOW_node* y);
        void Insert(string k );
        void PrintMyList(void);
        void update(LOW_node* y, int FileNumber);
        
    private:
        LOW_node *first;
        
};

class LOW_node
    {
        friend LOF;
        public:
            LOW_node ()
            {
                word=nullptr;
                numberOfFiles=0;
                next=nullptr;
                
            };
            string word;
            int numberOfFiles; //Το πλήθος των αρχείων στα οποία βρέθηκε η λέξη 
            LOF object_lof;
            LOW_node *next;
        
    };