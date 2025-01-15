#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    
    int** matrix1 = new int* [m];
    int** matrix2 = new int* [m];
    int** result = new int* [m];
    
    for (int i = 0;i < m;i++) {
        matrix1[i] = new int[n];
        matrix2[i] = new int[n];
        result[i] = new int[n];
    }
    
    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            cin >> matrix1[i][j];
        }
    }
    
    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            cout << result[i][j];
        }
    }

    for (int i = 0;i < m;i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }

    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;

}
