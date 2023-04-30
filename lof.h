class LOF_node;


class LOF
{
    public:
        LOF (){first=nullptr;}
        ~LOF (){};
        bool Search(int x);
        void Insert(int k );
        void PrintMyList(void);
        void Delete();
    private:
        LOF_node *first;
};

class LOF_node
    {
        friend LOF;
        LOF_node () {next=nullptr;}
        ~LOF_node () {};
        private:
            int FileNumber;//this variable will define the number of file e.g. -->33<--.txt, in which the word was found
            LOF_node *next;
    };