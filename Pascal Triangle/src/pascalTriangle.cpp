#include "pascalTriangle.h"

void pascalTriangle::run()
{
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
    if (triangle.at(row).size() < col)
        cout << "Column is out of range" << endl;
    else
        cout << triangle[row][col] << endl;
}

vector<vector<unsigned>> pascalTriangle::getTriangle()
{
    return triangle;
}
