// marcusg1k

#include <iostream> 

// create a basic calculator in cpp 

int main() {
    int num1, num2; 
    char op; 
    std::cout << "Hello, please enter a number: "; 
    std::cin >> num1;
    std::cout << "enter an operator: ";
    std::cin >> op;
    std::cout << "Please enter a second number: "; 
    std::cin >> num2; 

    if (op == '+')
    std::cout << "The result is: " << num1 + num2 << std::endl; 
    if (op == '-')
    std::cout << "The result is: " << num1 - num2 << std::endl; 
    if (op == '/')
    std::cout << "The result is: " << num1 / num2 << std::endl; 
    if (op == '*')
    std::cout << "The result is: " << num1 * num2 << std::endl; 

    return 0;
}
