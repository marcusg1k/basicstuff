// marcusg1k

// lets create a basic number guessing game
#include <iostream> 

int main() 
{
    int correctnum, guess, guesscount, guesslimit;
    correctnum = 8;
    guesscount = 0; 
    guesslimit = 3; 

    while (guess != correctnum && guesscount < guesslimit)
    {
        std::cout << "Enter your guess: "; 
        std::cin >> guess;
        guesscount++; 
        std::cout << "Wrong guess, try again" << std::endl; 
        if(guess == correctnum) {
            std::cout << "Correct guess, you win!" << std::endl; 
            } else if (guesscount == guesslimit) {
            std::cout << "Max attempts, you lose!" << std::endl; 
            }
    }
    return 0;
}