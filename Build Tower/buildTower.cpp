#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> towerBuilder(unsigned nFloors)
{
    std::vector<std::string> ans;

    unsigned int baseLevel = 1 + (2 * (nFloors - 1));
    for (unsigned int i = nFloors; i > 0; --i)
    {
        unsigned int numberOfStars = baseLevel - ((i - 1) * 2);
        unsigned int numberOfSpaces = i - 1;

        ans.push_back(std::string(numberOfSpaces, ' ') + std::string(numberOfStars, '*') + std::string(numberOfSpaces, ' '));
    }
    return ans;
}

int main()
{

    auto tower = towerBuilder(5);
    for (auto i : tower)
    {
        std::cout << i << std::endl;
    }
}