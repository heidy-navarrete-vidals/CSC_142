#include <iostream>
#include "Book.h"
#pragma once



class Inventory {
    public:
    Inventory(int size) {

    }
    ~Inventory();

     bool addBook(Book theBook);
     void changePrice(std::string isbn, double newPrice);
     void printInventory();



    private:
    Book* books;
    int nextEntry = 0;
    int length = 0;


};