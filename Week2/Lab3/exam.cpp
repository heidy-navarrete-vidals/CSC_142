/*  
    File Name: Exam.cpp
    Class Description: Use input strings to print the name and the average of three exam scores given by the user.
    Name: Heidy Navarrete-Vidals
    Date: 1/27/2025

    0. Rename this file to Exams.cpp

    1. In this file, and every file created for this class, add comments at the top of the file that include:
        - The name of the file
        - A brief description of the program (or class) that’s in the file
        - Your name
        - Today’s date
    
    2. In this file, create a single function called main() that performs the following steps 
    (if you are unsure how to do any of these things, consult with last weeks lab to find suggestions):

        - Prompt the user to input a String that is their name.

        - Prompt the user to input three integers, representing exam scores. Each
        integer should be stored in a separate variable of type int.

        - Calculate the average of the three exam scores and store the result in a
        variable of type double. Note: be careful about integer division! For full
        credit the average you calculate must be numerically correct.

        - Display the input data (the user’s name and three exam scores). Also
        display the calculated result (the exam average), formatted to two digits
        to the right of the decimal point.

        - For full credit, your program must print all the input data as well as the
        results, in a clearly understandable manner, with appropriate descriptive
        labels and formatting.

    4. A successful run should have output that looks something like the output that is provided in the Lab3 folder:

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Variable Declarations
    int x, y, z;
    double average;
    string fullName;

    // User input prompts
    cout<<"What is your full name: ";
    getline(cin, fullName);
    cout<<"Enter the first exam score: ";
    cin>>x;
    cout<<"Enter the second exam score: ";
    cin>>y;
    cout<<"Enter the third exam score: ";
    cin>>z;

    // Calculations
    average = (x + y + z) / 3.0;

    // User output
    std::cout<< std::fixed << std::setprecision(2);

    cout<<"\n";
    cout<<"Your full name is: " << fullName <<std::endl;
    cout<<"Your three exam scores are " << x << ", " << y << ", and " << z << "." <<std::endl;
    cout<<"Your average exame score is " << average << " points." <<std::endl;

    return 0;
}