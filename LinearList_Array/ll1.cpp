#include "ll1.h"


template <class T>
linearlist<T>::linearlist(int MaxListSize)
{
    MaxSize = MaxListSize;
    element = new T[MaxSize];
    length = 0;
}