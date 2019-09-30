#include <iostream>
#include <stdio.h>
using namespace std;

int main()

{
	int p, q, r;
	// Data input
	cout << "Enter number p:" << endl;
	cin >> p;
	cout << "Enter number q:" << endl;
	cin >> q;
	cout << "Enter number r:" << endl;
	cin >> r;
	// Data checking
	if ((p != 1 && p != 0) || (q != 1 && q != 0) || (r != 1 && r != 0))
	{
		cout << " Sorry, but numbers can be only 1 or 0" << endl;
		cout << "You can try again :" << endl;
		cout << "Enter number p:" << endl;
		cin >> p;
		cout << "Enter number q:" << endl;
		cin >> q;
		cout << "Enter number r:" << endl;
		cin >> r;
		cout << " Results :" << endl;
	}
	else
	{
		cout << " Results:" << endl;
	}
	// Results output
	if (p == 1 && q == 1 && r == 1)
	{
		cout << "-(p ^ q)  = 0" << endl;
		cout << " q v r   = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r))  = 1" << endl;
		cout << "-p v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r)) ^ (-p v r)  = 1" << endl;
	}
	else if (p == 1 && q == 1 && r == 0) {
		cout << "-(p ^ q)   = 0" << endl;
		cout << "q v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r))  = 1" << endl;
		cout << "-p v r  = 0" << endl;
		cout << "-(-(p ^ q) ~ (q v r)) ^ (-p v r) = 0" << endl;
	}
	else if (p == 1 && q == 0 && r == 1) {
		cout << "-(p ^ q)   = 1" << endl;
		cout << "q v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r))  = 0" << endl;
		cout << "-p v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r)) ^ (-p v r) = 0" << endl;
	}
	else if (p == 1 && q == 0 && r == 0) {
		cout << "-(p ^ q)   = 1" << endl;
		cout << "q v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r))  = 0" << endl;
		cout << "-p v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r)) ^ (-p v r) = 1" << endl;
	}
	else if (p == 0 && q == 0 && r == 0) {
		cout << "-(p ^ q)   = 1" << endl;
		cout << "q v r  = 0" << endl;
		cout << "-(-(p ^ q) ~ (q v r))  = 0" << endl;
		cout << "-p v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r)) ^ (-p v r) = 0" << endl;
	}
	else if (p == 0 && q == 0 && r == 1) {
		cout << "-(p ^ q)   = 1" << endl;
		cout << "q v r  = 0" << endl;
		cout << "-(-(p ^ q) ~ (q v r))  = 0" << endl;
		cout << "-p v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r)) ^ (-p v r) = 0" << endl;
	}
	else if (p == 0 && q == 1 && r == 0) {
		cout << "-(p ^ q)   = 1" << endl;
		cout << "q v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r))  = 0" << endl;
		cout << "-p v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r)) ^ (-p v r) = 0" << endl;
	}
	else if (p == 0 && q == 1 && r == 1) {
		cout << "-(p ^ q)   = 1" << endl;
		cout << "q v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r))  = 0" << endl;
		cout << "-p v r  = 1" << endl;
		cout << "-(-(p ^ q) ~ (q v r)) ^ (-p v r) = 0" << endl;
	}
	system("pause");
	return 0;

}

