
// include guards test
#ifndef PASCALTRIANGLE_H
#define PASCALTRIANGLE_H

#include <iostream>
#include <vector>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;
using std::vector;

class pascalTriangle
{
    vector<vector<unsigned>> triangle;

public:
    void run();
    void generate(unsigned numRows);
    void printTriangle();
    unsigned getValAt(unsigned row, unsigned col);
    vector<vector<unsigned>> getTriangle();
};

#endif