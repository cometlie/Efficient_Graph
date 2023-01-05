#ifndef EXPANDABLEARRAYLIST_H
#define EXPANDABLEARRAYLIST_H

#include<iostream>

template <typename T>
class ExpandableArrayList
{
public:
    ExpandableArrayList();
    ExpandableArrayList(size_t size);
    void Clear();
    void resizeList(size_t size);
    T & operator[](size_t i);
private:
    T *data;
    size_t currentSize;

};



template<typename T>
ExpandableArrayList<T>::ExpandableArrayList()
{

}

template<typename T>
ExpandableArrayList<T>::ExpandableArrayList(size_t size)
{
    data = new T[size];
    currentSize = size;
}

template<typename T>
void ExpandableArrayList<T>::Clear()
{
    delete [] data;
    currentSize = 0;
}

template<typename T>
void ExpandableArrayList<T>::resizeList(size_t size)
{
    T *NewArray = new T[size];
    T *OldArray = data;
    data = NewArray;
    delete [] OldArray;
    currentSize = size;
}

template<typename T>
T &ExpandableArrayList<T>::operator[](size_t i)
{
    return data[i];
}

#endif // EXPANDABLEARRAYLIST_H
