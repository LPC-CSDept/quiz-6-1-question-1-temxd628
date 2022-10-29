#include <iostream>
#include <iomanip>
using namespace std;

void swapTwoValues(int &, int &);
void swapTwoValues(float &, float &);
void getinput(int &, int &);
void getinput(float &, float &);

int main()
{
	int num1, num2;
	float fnum1, fnum2;

	getinput(num1, num2);
	cout << " Before Swap " << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;
	swapTwoValues(num1, num2);
	cout << " After Swap " << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;

	getinput(fnum1, fnum2);
	cout << " Before Swap " << setw(5) << fnum1 << ' ' << fnum2 << setw(5) << endl;

	swapTwoValues(fnum1, fnum2);
	cout << " After Swap " << setw(5) << fnum1 << ' ' << fnum2 << setw(5) << endl;

}

void getinput(int &n1, int &n2) {
	// cout << "Enter 2 integers: ";
	cin >> n1 >> n2;
	cout << endl;
}

void getinput(float &n1, float &n2) {
	// cout << "Enter 2 floats: ";
	cin >> n1 >> n2;
	cout << endl;
}

void swapTwoValues(int &n1, int &n2) {
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

void swapTwoValues(float &n1, float &n2) {
	float temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}