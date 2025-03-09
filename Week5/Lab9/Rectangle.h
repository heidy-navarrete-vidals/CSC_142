#pragma once

class Rectangle {
    private:
    double length, width;

    public:
    void setLength(double l);
    double getLength();

    void setWidth(double w);
    double getWidth();
    
    double getArea();
    void displayInfo();
};