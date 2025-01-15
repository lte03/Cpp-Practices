#include <iostream>

using namespace std;

int ebobHesap(int*, int*);

int main() {
    int num1;
    int num2;
    
    cout << "1. sayiyi gir:";
    cin >> num1;
    cout << "2. sayiyi gir:";
    cin >> num2;
    
    int ebob = ebobHesap(&num1, &num2);
    
    if (ebob == 1) {
        cout << num1 << " sayisi ile " << num2
            << " sayisi aralarinda asaldir.";
    }

    else {
        cout << num1 << " sayisi ile " << num2
            << " sayisi aralarinda asal degildir.";
    }
}

int ebobHesap(int *num1, int *num2) {
    int min = (*num1 < *num2) ? *num1 : *num2;
    int ebob = 1;
    
    for (int i = 2;i <= min;i++) {
        if (*num1 % i == 0 && *num2 % i == 0) {
            ebob = i;
        }
    }
    return ebob;
}
