#include <iostream>
using namespace std;

template<class T>
class linearlist
{
    public:
    linearlist(int MaxListSize = 10);

    ~linearlist() {delete [] element;} // destructor
   
    bool IsEmpty() const {return length == 0;}
   
    int Length() const {return length;}
   
    bool Find(int k, T& x) const;
    // return the k'th element of list in x
   
    int Search(const T& x) const;
    // return position of x
   
    linearlist<T>& Delete(int k, T& x);
    // delete k'th element and return in x
   
    linearlist<T>& Insert(int k, const T& x);
    // insert x just after k'th element
   
    void Output(ostream& out) const;
    
    
    
    
    
    private:
    int length; 
    int MaxSize;
    T *element; // dynamic 1D array

};


