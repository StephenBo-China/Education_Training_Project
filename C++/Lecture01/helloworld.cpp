#include <iostream>
#include <stdio.h>
using namespace std;
int sqrt(int a, int b);

int main()
{
	int a;
	int b;
	int sum;
	cout << "Input a:" << endl;
	cin >> a;
	cout << "Input :b" << endl;
	cin >> b;
	sum = sqrt(a, b);
	cout << "sum=" << sum << endl;
	return 0;
}

int sqrt(int a, int b)
{
	return a + b;
}