class LOF_node;


class LOF
{
    public:
        LOF (){first=0;}
        void Insert(int k );
        bool Search(int x);
    private:
        LOF_node *first;
};

class LOF_node
    {
        friend LOF;
        private:
            int FileNumber;//this variable will define the number of file e.g. -->33<--.txt, in which the word was found
            LOF_node *next;
        public:
        int getFileNumber()
        {
            return FileNumber;
        }
        LOF_node* get_next()
        {
            return next;
        }
    };