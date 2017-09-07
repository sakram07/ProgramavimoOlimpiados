#include <iostream>

using namespace std;

int factorial(int n) {
	if (n == 0) {
		// 0! = 1
		return 1;
	} else {
		// n! = n * (n - 1)! 
		return n * factorial(n - 1);
	}
}

// Testai
int main() {
	cout << "0 faktorialas yra: " << factorial(0) << endl;
	cout << "2 faktorialas yra: " << factorial(2) << endl;
	cout << "5 faktorialas yra: " << factorial(5) << endl;
	cout << "6 faktorialas yra: " << factorial(6) << endl;
	cout << "10 faktorialas yra: " << factorial(10) << endl;
}

