// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
	TMatrix<int> m1(5), m2(5), m3(5), m4(5);
	TVector<int> v1(5), v2(5), v3(5), v4(5);
	int i, j, o1;
	setlocale(LC_ALL, "Russian");
	cout << "������������ �������� ��������� ������������� ����������� ������" << endl;
	cout << "��� ������ ���������?" << endl;
	cout << "1.�������" << endl;
	cout << "2.�������" << endl;
	cin >> o1;
	if (o1 == 1)
	{
		for (i = 0; i < 5; i++)
			for (j = i; j < 5; j++)
			{
				m1[i][j] = (i * 10 + j) * 100;
				m2[i][j] = i * 10 + j;
			}
		m3 = m1 + m2;
		m4 = m1 - m2;
		cout << "Matrix a = " << endl << m1 << endl;
		cout << "Matrix b = " << endl << m2 << endl;
		cout << "Matrix c = a + b" << endl << m3 << endl;
		cout << "Matrix c = a - b" << endl << m4 << endl;
	}
	else if (o1 == 2)
	{
		for (i = 0; i < 5; i++)
		{
			v1[i] = (i * 10) * 100;
			v2[i] = i * 10;
		}
		v3 = v1 + v2;
		v4 = v1 - v2;
		cout << "Matrix a = " << endl << v1 << endl;
		cout << "Matrix b = " << endl << v2 << endl;
		cout << "Matrix c = a + b" << endl << v3 << endl;
		cout << "Matrix c = a - b" << endl << v4 << endl;
	}
    else
    {
	    throw 'Fail';
    }
}
//---------------------------------------------------------------------------
