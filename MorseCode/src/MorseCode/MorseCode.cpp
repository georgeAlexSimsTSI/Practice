#include "MorseCode.h"

string MorseCode::encode(string message)
{
    // first step is to break the message up into words

    string word, codedMessage = "";
    stringstream stream(message);
    while (getline(stream, word, ' '))
    {
        for (char &c : word)
        {
            c = toupper(c);
            if (this->codes.find(c) != this->codes.end())
            {
                codedMessage += this->codes.at(c) + " ";
            }
        }
        codedMessage += "/ ";
    }
    return codedMessage;
}