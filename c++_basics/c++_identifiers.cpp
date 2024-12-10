#include <iostream>
using namespace std;

// Naming conventions for identifiers
    //For Variables:
        // Use camelCase (for constants, you can use UPPER_SNAKE_CASE)
        // Start with lowercase alphabet.
        // Use descriptive, meaningful names.
        // For example, frequencyCount, personName
    //For Functions:
        // Use camelCase.
        // Use Verb or verb phrases for naming.
        // For example, getName(), countFrequency(), etc.
    //For Classes:
        // Use PascalCase
        // Use Nouns or noun phrases for naming.
        // For example, Car, Person, etc

class Car {
    string Brand;
    string model;
    int year;

public:
    Car(string brand, string mod, int y) : Brand(brand), model(mod), year(y) {} ;
    
    int getYear() { return year; }
};

void differenceInYears(int a, int b) {
    int diff = a - b;
    diff < 0 ? cout << "The difference is: " << (-1) * diff << endl : cout << "The difference is: " << diff << endl;
}

int main() {
    Car subaru("Subaru", "Legacy", 2004);
    Car crosstrek("Subaru", "Crosstrek", 2016);

    differenceInYears(subaru.getYear(), crosstrek.getYear());

    return 0;
}