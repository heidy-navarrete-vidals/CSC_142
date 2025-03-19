#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    // Prompts
    std::cout<<"Enter your name: ";
    std::cin>>name;
    std::cout<<"Enter your age: ";
    std::cin>>age;

    // Calculation
    int age_calculation = age * 365;

    // Output
    std::cout<<"Hello, "<<name<<"! You are approximately "<<age_calculation<<" days old!"<<std::endl;


    return 0;
}