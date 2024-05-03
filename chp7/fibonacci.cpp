// fibonacci.cpp

#include <iostream>

using namespace std;

int fibonacci(int n) {
	if (n == 0 || n == 1) // ±âº» »ç·Ê 
		return 1;
	else
		return n * fibonacci(n - 1);

}

int main() {
	int num;
	cout << "Enter n for a Fibonacci seres: ";
	cin >> num;
	cout << "Fibonacci at " << num << " is"
		<< fibonacci(num) << endl;
	return 0;
}