#include <string>

#include "Example.hpp"

using std::string;
using std::size_t;
using std::stoll;

struct NumberPair{
    long long a;
    long long b;
};

long long parseStringToLongLong(const string input) {
    size_t processedDataLength;
    return stoll(input, &processedDataLength, 10);
}

NumberPair GetNumberPair(const string input){
    NumberPair retVal = {0,0};
    if(input.length() != 0) {            
        size_t seperatorPosition = input.find(',');
        if(seperatorPosition == std::string::npos) { // no ',' found    
           retVal.a = parseStringToLongLong(input);
        } else {    
            string firstValueString = input.substr(0,seperatorPosition);        
            retVal.a = parseStringToLongLong(firstValueString);
            
            string secondValueString = input.substr(seperatorPosition+1, input.length());    
            retVal.b = Add(secondValueString);            
        }
    }
    return retVal;
}

/**
 * Add up to 2 numbers from a string, an empty string is 0
 * */
int Add(string input)
{
    NumberPair numbers = GetNumberPair(input);   
    return numbers.a + numbers.b;
}
