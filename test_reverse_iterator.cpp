
#include <iostream>
#include <vector>
#include "reverse_iterator.hpp"


int main()
{
    std::vector<int> line(5,5);
    std::vector<int>::iterator it = line.end();
    std::cout<< "sentence: \n";
    //std::getline (std::cin, line);

    std::cout<< "in reverse: \n";
    ft::reverse_iterator<std::vector<int>::iterator> reverse(it);
    for (reverse=line.rbegin(); reverse<line.rend(); reverse++)
    std::cout<< *reverse;

return 0;
}
