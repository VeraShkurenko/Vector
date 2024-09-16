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
	/*cout << "Destructor" << arr << endl;
	Sleep(3000);*/

	delete[]arr;
	size = 0;
	
}
void Vector::InputRand()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()%41 - 20; // [-20 +20]
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
	int* temp = new int[size + 1];  // содаем новый массив (тек размер +1)

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i]; // копируем текущие значени€ старого массива в новый массив
	}
	temp[size] = a; // инициализаци€ последнего элемента параметром метода

	delete[] arr; // удаление старого массива!

	arr = temp; // перенаправл€ем указатель в объекте на новый дин. массив
	size++;

}

int Vector::PopBack()
{
	int* temp = new int[size - 1];

	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	int el = arr[size - 1]; // достаем последний элемент старого массива ƒќ удалени€

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
	int* temp = new int[size - 1];

	for (int i = 0; i - size; i++)
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
	int* temp = new int[size - 1];

	for (int i = 0; i - index; i++)
	{
		temp[i] = arr[i];
	}

	int el = temp[index];

	for (int i = index; i - size; i++)
	{
		temp[i + 1] = arr[i];
	}

	delete[] arr;
	arr = temp;
	size--;

	return el;
}

int Vector::PushArr()
{
	return 0;
}
