#include <stack>
#include <string>

using std::stack;

bool valid_braces(std::string input)
{
    stack<char> braces;
    char prev;
    for (char c : input)
    {
        if (c == '{' || c == '[' || c == '(')
            braces.push(c);
        else
        {
            if (braces.size() == 0)
                return false;
            prev = braces.top();
            braces.pop();
            if ((c == '}' && prev == '{') || (c == ']' && prev == '[') || (c == ')' && prev == '('))
                continue;
            else
                return false;
        }
    }
    return true;
}

/*
Write a function that takes a string of braces and determines if the order of the braces is valid. If so return true otherwise false.
E.G.
    "(){}[]"   =>  True
    "([{}])"   =>  True
    "(}"       =>  False
    "[(])"     =>  False
    "[({})](]" =>  False
*/