
#include "pascalTriangle.h"

int main()
{
    cout << "Welcome to pascal triangle program test" << endl;
    pascalTriangle pt = pascalTriangle();
    cout << "Generating a triangle " << endl;
    pt.generate(10);
    cout << "Outputting it " << endl;
    pt.printTriangle();
}