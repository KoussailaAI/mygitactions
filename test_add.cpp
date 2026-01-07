#include <cassert>
#include <iostream>
#include "add.h"

int main()
{
    // Basic tests
    assert(add(1, 2) == 3);
    assert(add(0, 0) == 0);
    assert(add(-1, 1) == 0);
    assert(add(-10, -20) == -30);

    std::cout << "All add() unit tests passed.\n";
    return 0;
}
