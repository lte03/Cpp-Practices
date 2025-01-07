#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    const int MAX_TRIES = 5;
    const int MAX_VALUE = 100;
    const int MIN_VALUE = 1;

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        srand(time(NULL));
        int secretNumber = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
        cout << "Sayi oyununa hosgeldiniz" << endl;
        cout << "Bir sayi tuttum," << MIN_VALUE << "ve " << MAX_VALUE << "arasinda" << endl;

        int guess;
        bool found = false;

        for (int i = 1;i < MAX_TRIES;i++) {
            cout << i << ". tahmininizi girin:";
            cin >> guess;
            if (guess == secretNumber) {
                cout << "Dogru tahmin ettiniz" << endl;
                found = true;
                break;
            }

            else if (guess > secretNumber) {
                cout << "Tuttugum sayi girdiginiz sayidan kucuk!" << endl;
            }

            else {
                cout << "Tuttugum sayi girdiginiz sayidan buyuk!" << endl;
            }
        }

        if (!found) {
            cout << "Uzgunum tahmin hakkýnýz bitti. Tuttugum sayi:" << secretNumber << endl;
        }

        cout << "Tekrar oynamak istermisiniz:";
        cin >> playAgain;
    }
    cout << "Oyunu oynadiginiz icin tesekkur ederiz" << endl;
}
