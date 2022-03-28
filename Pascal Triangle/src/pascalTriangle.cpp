#include "pascalTriangle.h"

// C to find out a value
// E to print x many rows
// after enter q to quit
void pascalTriangle::run()
{
    char userChoice;
    bool valid;
    int userNumX, userNumY;
    do
    {
        do
        {
            system("cls");
            cout << "To print out x many rows enter \'e\'" << endl
                 << "To print out a specifc value enter \'c\'" << endl;
            cin >> userChoice;
        } while (userChoice != 'c' && userChoice != 'C' && userChoice != 'e' && userChoice != 'E');
        if (userChoice == 'c' || userChoice == 'C')
        {
            do
            {
                valid = false;
                system("cls");
                cout << "You have decided to get the value of at a specific point: "
                     << endl
                     << "Enter the row: ";
                cin >> userNumX;
                cout << "Enter the column: ";
                cin >> userNumY;
                cout << endl;

                if (userNumX > 0 && userNumY > 0)
                    valid = true;

            } while (!valid);
            getValAt(userNumX, userNumY);
        }
        else
        {
            do
            {
                valid = false;
                system("cls");
                cout << "You have decided to get print out x number of rows: "
                     << endl
                     << "Enter the number of rows: ";
                cin >> userNumX;

                if (userNumX >= 0)
                    valid = true;

            } while (!valid);
            generate(userNumX);
            printTriangle();
        }
        cout << endl
             << "Enter q to stop:" << endl;
        cin >> userChoice;
    } while (userChoice != 'q' && userChoice != 'Q');
    cout << "Good bye" << endl;
}

void pascalTriangle::generate(unsigned numRows)
{
    triangle = vector<vector<unsigned>>(numRows);
    for (unsigned i = 0; i < numRows; ++i)
    {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;
        for (unsigned j = 1; j < i; ++j)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
}

void pascalTriangle::printTriangle()
{
    vector<string> lines(triangle.size());
    for (int i = 0; i < lines.size(); ++i)
    {
        string str = "";
        for (int j = 0; j < triangle[i].size(); ++j)
        {
            str += to_string(triangle[i][j]) + " ";
        }
        lines[i] = str;
    }

    // pad each line to get them centered
    unsigned rowSize = lines[triangle.size() - 1].size(); // trailing " " so -1
    for (int i = 0; i < lines.size(); ++i)
    {
        string &str = lines[i];
        unsigned padding = (rowSize - str.size()) / 2;
        str = string(padding, ' ') + str + string(padding, ' ');
        cout << str << endl;
    }
}

unsigned pascalTriangle::getValAt(unsigned row, unsigned col)
{
    generate(row);
    if (triangle.at(row - 1).size() < col)
        cout << "Column is out of range" << endl;
    else
        cout << triangle[row - 1][col - 1] << endl;
}

vector<vector<unsigned>> pascalTriangle::getTriangle()
{
    return triangle;
}
