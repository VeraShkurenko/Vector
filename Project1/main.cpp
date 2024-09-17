#include<iostream>
#include"Vector.h"
using namespace std;

int main()
{
    srand(time(0));
    Vector obj1(5);
    obj1.InputRand();
    obj1.Print();

    obj1.PushBack(100);
    obj1.Print();

    obj1.PushBack(200);
    obj1.Print();

    int last = obj1.PopBack();
    obj1.Print();
    cout << "Last = " << last << endl;

    last = obj1.PopBack();
    obj1.Print();
    cout << "Last = " << last << endl;

    obj1.PushStart(100);
    obj1.Print();

    obj1.PushStart(200);
    obj1.Print();

    int first = obj1.PopStart();
    obj1.Print();
    cout << "First = " << first << endl;

    first = obj1.PopStart();
    obj1.Print();
    cout << "First = " << first << endl;

    int indx, val;
    cout << "Enter index to insert value: ";
    cin >> indx;
    cout << "Enter value to insert at index: ";
    cin >> val;

    obj1.PushAtIndex(indx, val);
    obj1.Print();

    int index;
    cout << "Enter index to remove: ";
    cin >> index;

    int removed = obj1.PopAtIndex(index);
    if (removed != -1) {
        cout << "Removed element: " << removed << endl;
    }
    else {
        cout << "Invalid index!" << endl;
    }
    obj1.Print();

    int newS;
    cout << "Enter size of the new array: ";
    cin >> newS;

    int* newArr = new int[newS];
    cout << "Enter " << newS << " elements for the new array: ";
    for (int i = 0; i < newS; i++) {
        cin >> newArr[i];
    }

    obj1.PushArr(newArr, newS);
    obj1.Print();

    delete[] newArr;  

    return 0;
}
