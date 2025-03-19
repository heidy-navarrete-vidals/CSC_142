#include <iostream>
#include "Inventory.h"
#include "Book.h"

Inventory::Inventory(int size){
    books = new Book[size];
    nextEntry = 0;
    length = size;

};

