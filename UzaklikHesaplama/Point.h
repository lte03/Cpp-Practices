#pragma once

class Point {
private:
    float x;
    float y;
public:
    Point(float xVal, float yVal);
    float getX() const;
    float getY() const;
    void setX(float xVal);
    void setY(float yVal);
};