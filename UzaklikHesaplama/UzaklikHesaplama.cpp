#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

float calcDistance(const Point&, const Point&);

int main()
{
    float x1, y1, x2, y2;
    cout << "Birinci noktanin x ve y koordinatlarini girin:";
    cin >> x1 >> y1;
    cout << "Ikinci noktanin x ve y koordinatlarini girin:";
    cin >> x2 >> y2;
    Point p1(x1, y1);
    Point p2(x2, y2);
    float uzaklik = calcDistance(p1, p2);
    cout << "Iki nokta arasi uzaklik:" << uzaklik << endl;
    return 0;
}

float calcDistance(const Point& p1, const Point& p2) {
    return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(),2));
}
