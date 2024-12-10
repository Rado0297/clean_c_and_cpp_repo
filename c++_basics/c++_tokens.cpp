#include <iostream>

using namespace std;

int main() {
    // C++ Tokens

    //Identifiers - name of variables, functions, structures and etc.
        // They start with letters and/or underscore "_"
        // Cannot contain special characters, keywords - int, class, string and etc.
        // They must be unique in its namespace
        // We have a case-sensitive - there is difference between first_name and First_name
        // Cannot start with special character unless it is underscore

    //Keywords
        // These are reserved words that have their specific meaning and functionalities
        // Cannot be used as indentifier
        // 95 reserved keywords
        // Some of the main words:
            // break        try             catch       char        class       const   continue
            // default      delete          auto        else        friend      for     float
            // long         new             operator    private     protected   public  return
            // short        sizeof          static      this        typedef     enum    throw
            // mutable      struct          case        register    switch      and     or
            // namespace    static_cast     goto        not         xor         bool    do
            // double       int             unsigned    void        virtual     union   while

    //Constants
        // Tokens that are used to define variables at the time of the initialization and assgined value cannot be changed after that.
        // We can use const or #define to define a variable like this
        // #define constant_Name value
        // const data_type variable_name = value;

    //Strings
        // They ar not build in like int, char, float and etc.
        // It's a class available in STL
        // Has a lot of property functions like length(), push_back(), pop_back()
        // Definition examples:
            // string variable_name;
            // string variable_name = "This is string";

    //Special Symbols
        // Used at ending statements, defining control statements, separating items and more.
        //Below are the most common special symbols used in C++ programming:
            //Semicolon (;): It is used to terminate the statement.
            //Square brackets []: They are used to store array elements.
            //Curly Braces {}: They are used to define blocks of code.
            //Scope resolution (::): Scope resolution operator is used to access members of namespaces, classes, etc.
            //Dot (.): Dot operator also called member access operator used to access class and struct members.
            //Assignment operator ‘=’: This operator is used to assign values to variables.
            //Double-quote (“): It is used to enclose string literals.
            //Single-quote (‘): It is used to enclose character literals.

    //Operators
        // Three types of operators
            // Unary
                // Used with single operands only. They perform operations on a single variable
                // Example:
                    // Increment operator ( ++ ): It is used to increment the value of an operand by 1.
                    // Decrement operator ( — ): It is used to decrement the value of an operand by 1.
            // Binary
                // Used on two operands, they perform operations between two variables
                // Examples:
                    // Arithmetic Operators: These operators perform basic arithmetic operations on operands. They include ‘+’, ‘-‘, ‘*’, ‘/’, and ‘%’
                    // Comparison Operators: These operators are used to compare two operands and they include ‘==’, ‘!=’, ‘<‘, ‘>’, ‘<=’, and ‘>=’.
                    // Logical Operators: These operators perform logical operations on boolean values. They include ‘&&’, ‘||’, and ‘!‘.
                    // Assignment Operators: These operators are used to assign values to variables and they include ‘variables‘, ‘-=‘, ‘*=‘, ‘/=‘, and ‘%=’.
                    // Bitwise Operators: These operators perform bitwise operations on integers. They include‘&’, ‘|’, ‘^’, ‘~’, ‘<<‘, and ‘>>‘.
            // Ternary
                // Takes three operands
                // Also known as a conditional operator
                // Syntax:
                    // Expression 1 ? Expression 2 : Expression 3
                    // If Expression 1 is true, then will be executed Expression 2,
                    // in other case will be executed Expresssion 3

    return 0;
}