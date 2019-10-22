#include <iostream>
#include <math.h>
using namespace std;
void Output(int arr[], int size);
int main() {
	int size;
	int A[100];
	int B[100];
	//створення масиву
	cout << "Enter a size of sets (n*n) : ";
	cin >> size;
	//перевірка
	do {
		if (size > 100 || size < 0) {
			cout << " Error, try again :\t";
			cin >> size;
		}
	} while (size > 100 || size < 0);
	cout << "Fill A: " << endl;
	for (int i = 0; i < size; i++) {
		cout << "\t";
		cin >> A[i];
	}
	cout << "Fill B : " << endl;
	for (int i = 0; i < size; i++) {
		cout << "\t";
		cin >> B[i];
	}
	//виведення
	cout << "\t\t YOUR_SETS_ARE : " << endl << endl;
	cout << "\t\tA = ";
	Output(A, size);
	cout << "\t\tB = ";
	Output(B, size);
	//створення відношень
	cout << endl << "\tCartesian product of A and B ( A * B ) is :" << endl << endl;
	for (int i = 0; i < size; i++) { 
		for (int j = 0; j < size; j++)
		{
			cout << "\t";
			cout << "(" << A[i] << ", " << B[j] << ")";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Couples which satisfy the condition :" << endl; 
		int counter = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
		{
			if ((A[i]*2-B[j] ) < 3 ) {
				cout << "(" << A[i] << ", " << B[j] << ")" << " ";
			}
			else 
			{
				counter++;
			}
		}
	}
	if (counter == size * size) {
		cout << " Couples are not found...";
	}
	cout << endl << endl;
	//відношення
	int prod[100][100];
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size; j++)
		{
			if ((A[i] + 2) > 3 * B[j]) {
				prod[i][j] = 1;
			}
			else {
				prod[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < size; i++) 
	{
		cout << "\t";
		for (int j = 0; j < size; j++)
		{
			cout << prod[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;
	//типи відношень
	cout << "This relation is :" << endl;
	if (counter == size * size) {
		cout << "\tEmpty";
	}
	else {
		//рефлексивне
		int ref = 0;
		for (int i = 0; i < size; i++)
		{
			if (prod[i][i] == 1) {
				ref++;
			}
		}
		if (ref == size) {
			cout << "Reflexive " << endl;
		}
		//антирефлексивне
		int aref = 0;
		for (int i = 0; i < size; i++)
		{
			if (prod[i][i] == 0) {
				aref++;
			}
		}
		if (aref == size) {
			cout << "Antireflexive " << endl;
		}
		//симетричне
		int sym = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (prod[i][j] == prod[j][i] && i!=j) {
					sym++;
				}
			}
		}
		if (sym == (pow(size, 2)) - size) {
			cout << "Symmetrical" << endl;
		}
		//антисиметричне
		int asym = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (prod[i][j] == 1 && prod[j][i] == 1) {
					asym++;
				}
			}
		}
		if (asym == 0) {
			cout << "Antisymmetrical" << endl;
		}
		//транзитивна
		int trans = 0;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++)
			{
				for (int k = 0; k < size; k++)
				{
					if ((prod[i][j] == 1) && (prod[j][k] == 1)) {
						if (prod[i][k] != 1) {
							trans = 0;
							break;
						}
					}
				}
			}
		}
		if (trans == 1) {
			cout << "Transitive" << endl;
		}
		if (trans == 0) {
			cout << "Not transitive" << endl;
		}
	}
	cout << endl << endl;
	system("pause");
	return 0;
}
void Output(int arr[], int size) {
	cout << " { ";
	for (int i = 0; i < size; i++) {
		if (i == (size - 1)) {
			cout << arr[i] << " ";
		}
		else {
			cout << arr[i] << ", ";
		}
	}
	cout << "} " << endl;
}