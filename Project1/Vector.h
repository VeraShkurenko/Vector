#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();


	Vector(int s);
	void InputRand(); // ������������� ���� �������
	void Print();// ����� �� �������

	void PushBack(int a);
	int PopBack();


	void PushStart(int b);
	void PushAtIndex(int index, int c);


	int PopStart();
	int PopAtIndex(int index);

	void PushArr(int* newArr, int newS);



};

/*
��������� ��������� ������:
��������� 1 �������� �� ������ �������
���������� �� �������, ������ � �������� �������� ��� ��������
�������� �� �������
�������� ������� ��������

���������� ������� � ����� �������� �������!


*/