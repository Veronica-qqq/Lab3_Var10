#include <iostream>
#include "DynamicArray.h"

using namespace std;

int main()
{
    int s;
    cout << "Input size of the array\n";
    cin >> s;
    DynamicArray<int> arr(s);
    cout << "Input elements of the array\n";
    arr.set_array();
    arr.print();
    int var;
    cout << "Choose:\n1)Check for an element in the array\n2)Check for elements in the array\n3)Clear the array\n4)Get the size of the array\n5)Change the size of the array\n";
    cin >> var;
    if (var == 1)
    {
        int n;
        cout << "Input the element you want to find\n";
        cin >> n;
        arr.isContains(n);
    }
    if (var == 2)
    {
        arr.isEmpty();
    }
    if (var == 3)
    {
        arr.m_clear();
    }
    if (var == 4)
    {
        cout << "Size: " << arr.m_size() << endl;
    }
    if (var == 5)
    {
        int r;
        cout << "Input the new size of the array\n";
        cin >> r;
        arr.m_resize(r);
        cout << "New size: " << arr.m_size() << endl;
    }

    return 0;
}
