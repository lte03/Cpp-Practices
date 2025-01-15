#include <iostream>

using namespace std;

int fibonacci(int);

int main() {
	int n;
	cout << "Fibonaccinin kac elemani ekrana yazdirilsin:";
	cin >> n;
	if (n < 0) {
		cout << "Lutfen pozitif sayi girin";
		return -1;
	}

	for (int i = 0;i < n;i++) {
		cout << fibonacci(i) << "-";
	}
	cout << endl;
	return 0;
}

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	
	else if (n == 1) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
