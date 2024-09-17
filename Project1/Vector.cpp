#include "Vector.h"
#include<iostream>
#include<Windows.h>
using namespace std;

Vector::Vector()
{
    arr = nullptr;
    size = 0;
}

Vector::Vector(int s)
{
    size = s;
    arr = new int[size] {0};
}

Vector::~Vector()
{
    delete[] arr;
    size = 0;
}

void Vector::InputRand()
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 41 - 20;
    }
}

void Vector::Print()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n---------------------------------------------------\n";
}

void Vector::PushBack(int a)
{
    int* temp = new int[size + 1];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    temp[size] = a;

    delete[] arr;
    arr = temp;
    size++;
}

int Vector::PopBack()
{
    if (size == 0)
        return -1;

    int* temp = new int[size - 1];

    for (int i = 0; i < size - 1; i++)
    {
        temp[i] = arr[i];
    }

    int el = arr[size - 1];

    delete[] arr;
    arr = temp;
    size--;

    return el;
}

void Vector::PushStart(int b)
{
    int* temp = new int[size + 1];

    for (int i = 0; i < size; i++)
    {
        temp[i + 1] = arr[i];
    }

    temp[0] = b;

    delete[] arr;
    arr = temp;
    size++;
}

void Vector::PushAtIndex(int index, int c)
{
    if (index < 0 || index > size)
        return;

    int* temp = new int[size + 1];

    for (int i = 0; i < index; i++)
    {
        temp[i] = arr[i];
    }

    temp[index] = c;

    for (int i = index; i < size; i++)
    {
        temp[i + 1] = arr[i];
    }

    delete[] arr;
    arr = temp;
    size++;
}

int Vector::PopStart()
{
    if (size == 0)
        return -1;

    int* temp = new int[size - 1];

    for (int i = 1; i < size; i++)
    {
        temp[i - 1] = arr[i];
    }

    int el = arr[0];

    delete[] arr;
    arr = temp;
    size--;

    return el;
}

int Vector::PopAtIndex(int index)
{
    if (index < 0 || index >= size)
        return -1;

    int* temp = new int[size - 1];

    for (int i = 0; i < index; i++)
    {
        temp[i] = arr[i];
    }

    int el = arr[index];

    for (int i = index + 1; i < size; i++)
    {
        temp[i - 1] = arr[i];
    }

    delete[] arr;
    arr = temp;
    size--;

    return el;
}

void Vector::PushArr(int* newArr, int newS)
{
    int* temp = new int[size + newS];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < newS; i++)
    {
        temp[size + i] = newArr[i];
    }

    delete[] arr;
    arr = temp;
    size += newS;
}
