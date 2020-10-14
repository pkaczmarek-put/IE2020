#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int integer_number = 0, result = 10, coefficient;
    //    double a = 30, b = 300, alpha = 45, c;

    //    std::cout << "Enter the leg \'a\' and \'b\' lenght: ";
    //    std::cin >> a >> b;

    //    //    std::cout << "Enter the leg \'b\' lenght: ";
    //    //    std::cin >> b;

    //    c = sqrt(a * a + b * b);

    //    cout.width(15);
    //    std::cout << "C++ output: for the rectangle legs " << a << " and " << fixed << setprecision(5)
    //              << b << " the hypotenuse is " << c << std::endl;
    //    printf("C output: for the rectangle legs %.2f and %.2f the hypotenuse is %.3f \n", a, b, c);

    //    char character;
    //    cout << "Enter any key";
    //    cin >> character;

    //    cout << "You entered: " << character;

    char last_name[10], first_name[10], full_name[20];
    cout << "Enter your name";
    cin >> last_name;
    cin >> first_name;

    sprintf(full_name, "%s %s", last_name, first_name);

    cout << full_name;
    //    strcpy(full_name, last_name);
    //    strcat(full_name, " ");
    //    strcat(full_name, first_name);
    //    cout << full_name;
    //    cout << "You entered: " << first_name << " " << last_name;
    return 0;
}
