#include <iostream>
#include "item.hpp"

int main(){
    Jotran::Item<int> item1{1, 2, 3, 4};
    Jotran::Item<int> item2{1, 2, 3, 4};

    Jotran::Item<int> item3 = item1 + item2;
    Jotran::Item<int> item4 = item1 - item2;

    Jotran::Item<int> item5 = -item1;

    std::cout << item3 << std::endl;
    std::cout << item4 << std::endl;
    std::cout << item5 << std::endl;

    return 0;
}