#include <iostream>
#include<windows.h>
using namespace std;
#define length 20


int selectsort( int *a )
{
	int j, k, m,t;
	for (j = 0; j < length; j++)
	{
		m = j;
		for (k = j + 1; k < length; k++)
			if (a[k] < a[m])
				m = k;
		if (m != j)
		{
			t = a[j];
			a[j] = a[m];
			a[m] = t;
		}	

	}

	cout << "���� ";
	for (j = 0; j < length; j++)
	{
		cout << a[j] << ' ';


	}
	cout << endl;

	return 0;
}
int main()
{
	int *p;
	int i, a = 0, b = 0;
	int m, n, sum1 = 0, sum2 = 0;
	p = new int[length];
	cout << "������ " << endl;
	for ( i = 0; i < length; i++)
	{
		cin >> p[i];
		if (p[i] > 0)
			a++;
		if (p[i] < 0)
			b++;
	}

	
	for (i = 0; i<length; i++)
	{
		sum1 = sum1 + p[i];
	}

	m = sum1 / 5;

	for (i = 0; i < length; i++)
	{
		sum2 = (p[i] - m)*(p[i] - m) + sum2;
	}
	n = sum2 / 5;

	cout << "�������� " << a << endl;
	cout << "�������� " << b << endl;
	cout << "ƽ���� " << n << endl;
	cout << "���� " << m << endl;

	selectsort(p);
	delete [20]p;
	system("pause");
	return 0;
}