#include "MorseCode/MorseCode.h"
#include "InputValidation/userInput.h"

int main()
{
    MorseCode code;
    std::cout << code.encode("Hello World") << std::endl;
    std::cout << code.decode(".... . .-.. .-.. --- / .-- --- .-. .-.. -.. /") << std::endl;
    return 0;
}