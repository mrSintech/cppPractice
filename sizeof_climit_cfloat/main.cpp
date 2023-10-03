#include <iostream>
#include <climits> // max size of integer numbers for this specific computer
#include <cfloat> // max size of floats for this specific cimputer

int main(){
    std::cout << INT_MAX << std::endl;
    std::cout << "char:" << sizeof(char) << std::endl;
    std::cout << "int:" << sizeof(int) << std::endl;
}
