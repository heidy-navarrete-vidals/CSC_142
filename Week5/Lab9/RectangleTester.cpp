/*
    Name: Heidy Navarrete-Vidals
    Date: 2/17/2025
    FileName: RectangleTester.cpp
    Description: Use a class to determine the area of a rectangle.



Your task is to create the complete Rectangle class and test it in a .cpp file  as specified here:
    0. Rename this file to RectangleTester.cpp

    - Remember that only ONE .cpp file can have a main() method!

    -The Rectangle Class
        This class will either be declared and defined within a single header file or
        declared within a header file and defined in a separate .cpp file
        Your class should have two private fields, length and width of type double
        You will then need to declare/define several public methods that will complete the following:
            - A method to get the width
            - A method to get the length
            - A method to set the width
            - A method to set the length
            - A method to get the area
                ** If you're not sure how to calculate the area of a rectangle, look it up **

    - The RectangleTester file
        Your main() program is in the RectangleTester.cpp file. 
        This program will test the Rectangle class, confirming that it works correctly, by
        creating several Rectangle objects that represent rooms of an apartment. The purpose
        of the tester program is to ensure that all the methods work correctly.
        The main() method will perform the following steps:
            1. Create three Rectangle objects, one for each of three rooms in an apartment
            (the kitchen, a bedroom, and the living room).
            2. Ask the user for the length and width of each of the three rooms. Use the "setter"
            methods to set those values in each of the three Rectangle objects.
            3. Report to the user the size (length x width) and area of each of the three rooms,
            using the "getter" methods.
            4. Also report the total area of the apartment by adding the areas of the rooms.
        
Specifications
    For full credit, your program must meet the following specifications:
        - Complete file prolog comments are included.
        - The filenames correctly match.
        - The Rectangle class has the proper header and is in a file with the correct name.
        - The program includes appropriate comments for documentation, uses meaningful
        names, prompts, and messages, and follows the naming conventions.
        - Numbers are printed with reasonable formatting. This means limiting the number
        of decimal digits when appropriate.
        - The program uses the methods and pseudocode defined above and produces
        correct results. In particular, private fields may only be accessed by using the
        setter and getter methods.
        - The program runs without error and does not crash.
        - The program’s input and output are formatted appropriately with sufficient and
        clear explanatory messages.

Finishing Up
    When you have finished, there are up to three files to submit for this assignment:
        - if you chose to declare and define your class in one header file then you only
        need to submit two files with the following names...
            - Rectangle.h
            - RectangleTester.cpp

        - if you chose to declare your class in a header file and define it within a .cpp
        file, then you need to submit three files in total with the following names...
            - Rectangle.h
            - RectangleDefinitions.cpp
            - RectangleTester.cpp
*/

#include <iostream>
#include "Rectangle.h"


int main() {
    // Class Object Declaration + Variables
    Rectangle myRoom1, myRoom2, myRoom3;
    double length, width;

    // Room 1
    std::cout<<"The length of the Kitchen is: "<<std::endl;
    std::cin>>length;
    myRoom1.setLength(length);

    std::cout<<"The width of the Kitchen is: "<<std::endl;
    std::cin>>width;
    myRoom1.setWidth(width);

    // Room 2
    std::cout<<"The length of the Bedroom is: "<<std::endl;
    std::cin>>length;
    myRoom2.setLength(length);

    std::cout<<"The width of the Bedroom is: "<<std::endl;
    std::cin>>width;
    myRoom2.setWidth(width);


    // Room 3
    std::cout<<"The length of the Living Room is: "<<std::endl;
    std::cin>>length;
    myRoom3.setLength(length);

    std::cout<<"The width of the Living Room is: "<<std::endl;
    std::cin>>width;
    myRoom3.setWidth(width);


    // Room Details
   std::cout<<"---Here are the details for the Kitchen:---\n";
   myRoom1.displayInfo();

   std::cout<<"---Here are the details for the Bedroom:---\n";
   myRoom2.displayInfo();

   std::cout<<"---Here are the details for the Living Room:---\n";
   myRoom3.displayInfo();



    return 0;
}