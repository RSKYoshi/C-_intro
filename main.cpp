
//iostream=input/output stream. Specifies name in standard library. Allows screen printing or getting something from the user.
#include  <iostream>
#include <cmath>
//below code = declare std a global...now one can access all objects in  the std namespace;
using namespace std;


int main() {

//        ---------------------C++ basics intro-------------------------

//    std=standard library. Akin to a bucket of features available to dev.
//cout=character output
//below line=statement
//'<<' = stream insertion operator

        int file_size = 100;
        int counter = 0;
        double sales = 9.99;
        std::cout << file_size;

//        '\n' = line break for cout

        std::cout <<  '\n';

//        ---------------------switching variable values-------------------------

    int a = 1;
    int b = 2;
    int temp = a;

       a = b;
       b = temp;
//   the '<<' here functions like a '+' to chain multiple values
        std::cout << a << ',' <<b;
        std::cout <<  '\n';
        std::cout << a / b;


//        ---------------------pemdas quotient-------------------------

        double x  = 10;
        double y  = 5;
        double z = (x+10) / (3*y);

        std::cout <<  '\n';
//endl = end of line, break
        std::cout << z << std::endl;

//        ---------------------sales tax calculator-------------------------


        double salesTotal = 95000;
        const double stateTaxPercentage = 0.04;
        const double countyTaxPercentage = 0.02;
        const double stateTax = salesTotal * stateTaxPercentage;
        const double countyTax = salesTotal * countyTaxPercentage;
        const double totalTax = stateTax + countyTax;

        cout << "Sales Total: $" << salesTotal << '\n' << "State Tax: $" << stateTax << '\n' << "County Tax: $" << countyTax << '\n' << "Total Tax: $" << totalTax <<endl;


//        ---------------------calculator-------------------------
        cout << "Enter value for num1: ";
        double num1;
        double num2;
//        "cin" means character input, it accepts user input;
        cin >> num1;

        cout << "Enter value for num2: ";
        cin >> num2;
//        cout = console output
        cout << "Your total is : " << num1 + num2 << endl;

//        ---------------------Fahrenheit to Celsius calculator-------------------------

        double fahrenheitInput;

        cout << "Enter value for °F: ";
        cin >> fahrenheitInput;

//        the variable "double" below must be placed after the "cin" above in order to receive the value of the user's input. It will not be hoisted.

        double convertedTemp = (fahrenheitInput -32) / 1.8;


        cout << fahrenheitInput << "°F  = " << convertedTemp << "°C" << endl;

//        -----------------------Area of a circle-----------------------


    double pi = 3.14;
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    double circleArea =  pi* ::pow(radius,2);
    cout << "The area of a circle with a radius of " << radius << " = " << circleArea << endl;

//        -----------------------Generate random nums-----------------------
//    return 0 below means that the function executed successfully. Any other int means it did not.
    #include <cstdlib>
    #include <ctime>

    long time(nullptr);
    int number = srand(5);
    cout << number;

    return 0;
}

