// marcusg1k
// hey future me this is for testing my push 

#include <iostream> 


int main() {
    int a, z, size = 10; // letters in the heart and the size of the heart
// you can change the letters in the int and the size for a bigger heart print
    for(a = size/2; a <= size; a = a+2) 
    {
        for (z = 1; z < size-a; z = z+2)
            std::cout << " "; // 
        for (z = 1; z <= a; z++)
            std::cout << "a"; 
        for (z = 1; z <= size-a; z++)
            std::cout << " "; 
        for (z = 1; z <= a-1; z++)
            std::cout << "a"; 
        std::cout << std::endl;  
    }
        for (a = size; a>= 0; a--){
            for (z = a; z < size; z++)
                std::cout << " "; 
            for(z = 1; z <= ((a*2) - 1); z++)
            std::cout << "z";
          std::cout << std::endl; 
        }
    }