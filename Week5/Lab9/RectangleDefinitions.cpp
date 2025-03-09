#include <iostream>
#include "Rectangle.h"

void Rectangle::setLength(double l) {
    Rectangle::length = l;
}

double Rectangle::getLength() {
    return Rectangle::length;
}


void Rectangle::setWidth(double w) {
    Rectangle::width = w;
}

double Rectangle::getWidth() {
    return Rectangle::width;
}

double Rectangle::getArea() {
    return length * width;
}

void Rectangle::displayInfo() {
    std::cout<<"Length: "<<length<<", multiplied by Width: "<<width<<", gives you an Area of: "<<getArea()<<"sq ft.";
}