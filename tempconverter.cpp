// marcusg1k
// lets convert some temperatures (farhenheit to celsisus and vice versa :) ) 

#include <iostream> 

int main() 
{
    int f; 
    int c;
    // so to convert f to c we use the formula c = (f - 32) * 5/9
    // and to convert c to f we use the formula f = (c * 9/5) + 32
    std::cout << "Enter a temp in fahrenheit: "; 
    std::cin >> f;  
    std::cout << f << " degrees fahrenheit is " << (c = f - 32) * 5/9 << " degrees celsius." << std::endl; 
    std::cout << "Enter a temp in celsius: "; 
    std::cin >> c; 
    std::cout << c << " degrees celsius is " << (c * 9/5) + 32 << " degrees fahrenheit." << std::endl; 

    return 0; 
}