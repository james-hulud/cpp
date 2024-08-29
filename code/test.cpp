#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <typeinfo>

int stringToInt(const char* stringInput) {
    char *endptr;
    int integerResult = strtol(stringInput, &endptr, 10);

    std::cout << stringInput << "\t" << typeid(stringInput).name() << std::endl;
    std::cout << integerResult << "\t" << typeid(integerResult).name() << std::endl;
    return 0;
}

int main() {
    stringToInt("3423523");
    return 0;
}