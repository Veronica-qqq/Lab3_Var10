#ifndef DYNAMICARRAY_H_INCLUDED
#define DYNAMICARRAY_H_INCLUDED
#include <iostream>

using namespace std;

template<typename T>

class DynamicArray {
private:
    int countel;  //количество элементов массива
    T *p;
public:
    DynamicArray();
    DynamicArray(int t_countel);
    DynamicArray(const DynamicArray &d);
    ~DynamicArray();
    DynamicArray& operator=(const DynamicArray &a);
    void set_array();
    void print() const;
    T& operator[] (int i) const;
    int m_size() const;
    void m_resize(int size1);
    void m_clear();
    void isEmpty() const;
    void isContains(int el) const;
    };

template <typename T>
DynamicArray<T>::DynamicArray()
{
    countel = 0;
    p = NULL;
}

template <typename T>
DynamicArray<T>::DynamicArray(int t_countel)
    {
        countel = t_countel;
        p = new T[t_countel];
        for (int i = 0; i < t_countel; i++)
            {
            p[i] = 0;
            }
    }

template <typename T>
DynamicArray<T>::DynamicArray(const DynamicArray &d)
{
    countel = d.countel;
    p = new T[countel];
    for (int i = 0; i < countel; i++)
    {
            p[i] = d.p[i];
    }
}

template <typename T>
DynamicArray<T>::~DynamicArray()
{
    delete [] p;
}

template <typename T>
DynamicArray<T> & DynamicArray<T>::operator=(const DynamicArray &a)
{
    delete [] p;
    countel = a.countel;
    p = new T[countel];
    for (int i = 0; i < countel; i++)
    {
        p[i] = a.p[i];
    }
    return *this;
}

template <typename T>
void DynamicArray<T>::set_array()
{
    for (int i = 0; i < countel; i++)
        {
            cin >> p[i];
        }

}

template <typename T>
void DynamicArray<T>::print() const
{
    for (int i = 0; i < countel; i++)
    {
        cout << p[i] << " ";
    }
}

template <typename T>
T& DynamicArray<T>::operator[] (int i) const
{
    return p[i];
}

template <typename T>
int DynamicArray<T>::m_size() const
{
    return countel;
}

template <typename T>
void DynamicArray<T>::m_resize(int size1)
{
    if (size1 > countel)
    {
       int new_countel;
       T *new_p = new T[new_countel];
       for (int i = 0; i < countel; i++)
        {
            new_p[i] = p[i];
        }
       delete [] p;
       p = new_p;
       countel = new_countel;
    }
    countel = size1;
}

template <typename T>
void DynamicArray<T>::m_clear()
{
    delete [] p;
    p = NULL;
    countel = 0;
    cout << "The array is cleared";
}

template <typename T>
void DynamicArray<T>::isEmpty() const
{
    if (countel == 0)
    {
        cout << "The array is empty";
    }
    else {
        cout << "The array isn't empty";
    }
}

template <typename T>
void DynamicArray<T>::isContains(int el) const
{
    int h;
    for (int i = 0; i < countel; i++)
    {
        if (p[i] == el)
        {
            h++;
        }
    }
    if (h == 0)
        {
            cout << "The array isn't contains this element";

        }
    else {
            cout << "The array is contains this element";
        }
}



#endif // DYNAMICARRAY_H_INCLUDED
