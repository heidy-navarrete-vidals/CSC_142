#pragma once

class Book {
    private:
    std::string codeNum;
    std::string author;
    std::string title;
    int edition;
    std::string pubCode;
    double price;

    public:
    Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr);

    std::string getTitle();
    std::string getAuthor();
    double getPrice();
    int getEdition();
    std::string getISBN();
    std::string getPubCode();
    void changePrice(double newPrice);



};