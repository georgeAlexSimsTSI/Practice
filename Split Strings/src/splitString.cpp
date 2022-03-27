#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> ans;
    unsigned int i = 1;
    while (i < s.size())
    {
        ans.push_back(s.substr(i - 1, 2));
        i += 2;
    }
    if (s.size() % 2 == 1)
    {
        std::string last = s.substr(i - 1, 1) + "_";
        ans.push_back(last);
    }
    return ans;
}

/*
Complete the solution so that it splits the string into pairs of two characters.
if the string contains an odd number of characters then it should replace the missing second character of the final pair.
e.g.
* 'abc' =>  ['ab', 'c_']
* 'abcdef' => ['ab', 'cd', 'ef']
*/