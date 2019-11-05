#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr" );
	double arr[11], arr2[11];
	double a, w; 
	int size;
	double uni[11] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0 };
	cout << "Введiть розмiр масиву (можливий дiапазон вiд 1 до 11)" << endl;
	cin >> size;
	while (size < 1 || size > 11)
	{
		cout << "Ваш розмiр не вiдповiдає дiапазону, спробуйте ще раз!" << endl;
		cin >> size;
	}
	cout << "Введiть елементи масиву (це може бути десятковий дрiб в дiапазонi вiд 0 до 1" << endl;
	bool d;
	for (int i = 0; i < size; )
	{
		cout << "Введiть" << i + 1 << "-ий елемент" << endl;
		cin >> a;
		d = false;
		for (int j = 0; j < 11; j++)
		{
			if (uni[j] == a)
			{
				d = true;
				arr[i] = a;
				i++;
				break;
			}
		}
		
	}
	cout << "A[" << size << "]={";
	for (int i = 0; i < size-1; i++)
	{
		cout << arr[i] << ",";
	}
	cout << arr[size - 1];
	cout << "}"<<endl;

	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size-1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				w = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = w;
			}
			
		}
	}

	for (int i = 0; i < size; i++)
	{
		int b;
		b = arr[i];
		for (int k = size - 1; k > i; k--)
		{
			if (a == arr[k])
			{
				break;
			}
		}
		arr2[i] = b;
	}


	int m = sizeof(arr2)/sizeof(double);

	cout << "A[" << m << "]={";
	for (int i = 0; i < m - 1; i++)
	{
		cout << arr2[i] << ",";
	}
	cout << arr2[m- 1];
	cout << "}" << endl;

	return 0;
}
