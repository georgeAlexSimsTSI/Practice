#include "MorseCode.h"

// return ' ' if not found
char MorseCode::getKeyFromValue(string value)
{
    for (auto &it : this->codes)
    {
        if (it.second == value)
        {
            return it.first;
        }
    }
    return ' ';
}

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

string MorseCode::decode(string message)
{
    string word, decodedMessage = "";
    stringstream stream(message);
    while (getline(stream, word, ' '))
    {
        if (word == "/")
        {
            decodedMessage += " ";
            continue;
        }
        char key = getKeyFromValue(word);
        if (key != ' ')
        {
            decodedMessage += key;
        }
    }
    return decodedMessage;
}