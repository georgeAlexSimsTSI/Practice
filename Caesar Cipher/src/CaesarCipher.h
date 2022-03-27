
#include <string>
#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
 * @file CaesarCipher.h
 * @author George Sims
 * @brief Encryption and decryption of texts using a alphabetical caesar cipher
 * @version 0.1
 * @date 2022-03-25
 *
 * @copyright Copyright (c) 2022
 *
 *  Enter the encrypted or decrypted text.
 *  Enter the shift value (Range: -25 to 25).
 *  Enter the E or D key to encrypt or decrypt the text respectively.
 *  The encrypted or decrypted text is displayed.
 *  Enter the S key to use the cipher again and repeat steps 1 to 5 or enter the Q key to quit the program.
 *
 */

class CaesarCipher
{
    string message; // message to be encrypted or decrypted
    short shift;
    char mode;

public:
    CaesarCipher();
    CaesarCipher(string message, short shift);
    void enterString();
    void enterShift();
    void enterMode();
    string run();
    string encryptMessage();
    string decryptMessage();
};