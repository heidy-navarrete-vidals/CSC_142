#include <iostream>
#include "Book.h"


Book::Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr) {
    codeNum = cn;
    author = au;
    title = ti;
    edition = ed;
    pubCode = pc;
    price = pr;
}


std::string Book::getTitle() {
    return title;
}

std::string Book::getAuthor() {
    return author;
}

double Book::getPrice() {
    return price;
}

int Book::getEdition() {
    return edition;
}

std::string Book::getISBN() {
    return codeNum;
}

std::string Book::getPubCode() {
    return pubCode;
}

void Book::changePrice(double newPrice) {
    price = newPrice;
}