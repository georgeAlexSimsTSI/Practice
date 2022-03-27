#include "CaesarCipher.h"

CaesarCipher::CaesarCipher()
{
    this->message = "";
    this->shift = 0;
}

// CaesarCipher::CaesarCipher(string message, short shift)
//{
//     this->message = "";
//     this->shift = 0;
// }

CaesarCipher::CaesarCipher(string message, short shift) : message(message), shift(shift) {}

void CaesarCipher::enterString()
{
    bool valid = false;
    system("cls");
    cin.ignore(INT_MAX, '\n');
    do
    {
        cout << "Enter the message: " << endl;
        cin >> this->message;
        if (this->message.size() == 0)
        {
            cout << "Invalid Message: " << endl;
        }
        else
        {
            cout << "The message you enterted is: " << endl
                 << this->message << endl;
            valid = true;
        }
    } while (!valid);
}

void CaesarCipher::enterShift() // Will add error handling later
{
    bool valid = false;
    cin.ignore(INT_MAX, '\n');
    system("cls");
    do
    {
        cout << "Enter the shift, Must be in the range of -25 to 25 : " << endl;
        cin >> this->shift;
        if (this->shift < -25 || this->shift > 25)
        {
            cout << "Invalid Shift: " << endl;
        }
        else
        {
            cout << "The shift you enterted is: " << endl
                 << this->shift << endl;
            valid = true;
        }
    } while (!valid);
}

void CaesarCipher::enterMode()
{
    bool valid;
    cin.ignore(INT_MAX, '\n');
    system("cls");
    do
    {
        valid = true;
        cout << "If you wish to Encode a message enter: E " << endl
             << "If you wish to Decode a message enter: D" << endl;
        cin >> this->mode;
        switch (this->mode)
        {
        case 'e':
            this->mode = 'E';
        case 'E':
            cout << "You have chosen to Encrypt a message." << endl;
            break;
        case 'd':
            this->mode = 'D';
        case 'D':
            cout << "You have chosen to Decrypt a message." << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
            valid = false;
        }
    } while (!valid);
}

string CaesarCipher::run()
{
    bool valid = false;
    char again;
    do
    {
        enterMode();
        enterString();
        enterShift();

        if (this->mode == 'E')
            cout << encryptMessage();
        if (this->mode == 'D')
            cout << decryptMessage();
        cout << endl;

        // take input to go again?
        cout << "Enter S to go again: " << endl;
        cin >> again;
        if (again == 'S' || again == 's')
            valid = true;
        else
            valid = false;

    } while (valid);
}

// A = 65 Z = 90
// a = 141 z  = 172
string CaesarCipher::encryptMessage()
{
    string newMessage = this->message;
    for (auto &c : newMessage)
    {
        if (isupper(c))
        {
            c = char(int(c + shift - 65) % 26 + 65);
            if (c < 65)
                c += 26;
        }
        if (islower(c))
        {
            c = char(int(c + shift - 97) % 26 + 97);
            if (c < 97)
                c += 26;
        }
    }
    return newMessage;
}

string CaesarCipher::decryptMessage()
{
    shift *= -1;
    string newMessage = encryptMessage();
    shift *= -1;
    return newMessage;
}