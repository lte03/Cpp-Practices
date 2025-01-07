/*
* Kullan�c�dan al�nan say�lar aras�ndan en b�y�k 4 tanesini bulan program� yaz�n�z.
* Say�lar� al�rken dinamik dizi i�i pointer kullan�n�z ve say�lar� s�ral� bir �ekilde
* ekrana yazd�r�n�z
*/

#include <iostream>

using namespace std;

void findLargestFour(int*, int);

int main(){
    int n;
    cout << "Kac sayi gireceksin:";
    cin >> n;

    int* numbers = new int[n];

    for (int i = 0;i < n;i++) {
        cout << i + 1 << ". sayiyi giriniz";
        cin >> *(numbers + i);
    }

    findLargestFour(numbers, n);
    delete[] numbers;
}

void findLargestFour(int* numbers, int n) {
    int largest[4] = { 0 };
    for (int i = 0;i < n;i++) {
        int current = numbers[i];
        if (current > largest[0]) {
            largest[3] = largest[2];
            largest[2] = largest[1];
            largest[1] = largest[0];
            largest[0] = current;
        }
        
        else if (current > largest[1]) {
            largest[3] = largest[2];
            largest[2] = largest[1];
            largest[1] = current;
        }
        
        else if (current > largest[2]) {
            largest[3] = largest[2];
            largest[2] = current;
        }
        
        else if (current > largest[3]) {
            largest[3] = current;
        }

    }
    cout << "En buyuk 4 sayi" << endl;
    for (int i = 0;i < 4;i++) {
        cout << *(largest + i) << endl;
    }
}
