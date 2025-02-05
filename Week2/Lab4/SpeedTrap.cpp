/*
    File Name: SpeedTrap.cpp
    Class Description: Use an if-statement to print a message on whether the user's given speed is legal or not.
    Name: Heidy Navarrete-Vidals
    Date: 1/29/2025

    Your task:

        This program will make use of conditional statements by checking
        if someone is speeding or not

        In this file, create a main() method, that will perform the following
        algorithm:

            1. Rename this file to SpeedTrap.cpp
            2. Prompt the user to enter an int for the speed limit.
            3. Prompt the user to enter a double for the driver’s speed.
            4. If the speed is legal (i.e. less than or equal to the speed limit),
                Print a message indicating that the speed is legal
            Otherwise,
                Print a message indicating that the driver will receive a speeding ticket.

    Specifications:  
    
        For full credit, your program must meet the following specifications:

        1. Your program must use only a single if statement.
        2. Use meaningful variable names and follow all naming conventions.
        3. Use meaningful prompts to ask the user for the speed limit and the vehicle’s
        speed. (You may assume the user will only enter positive numbers.)
        4. You may choose creative output messages, but the program must print the
        correct message based on the user input.

        Don't forget to put your name and date somewhere at the top of the file!
*/

#include <iostream>
using namespace std;

int main() {
    // Variable Declarations
    int speedLimit;
    double driverSpeed;

    // User Input Prompts
    cout<<"Please enter a speed limit: "<<std::endl;
    cin>>speedLimit;
    cout<<"Please enter your driving speed: "<<std::endl;
    cin>>driverSpeed;

    // If-Statement + Output messages
    if (driverSpeed <= speedLimit) {
        cout<<"You are driving at the legal speed limit!";
    }   else {
        cout<<"You are not driving at the legal speed limit!";
    }
    
    

    return 0;

}
