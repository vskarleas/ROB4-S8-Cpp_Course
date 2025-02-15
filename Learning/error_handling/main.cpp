#include <iostream>
#include <string>
#include <cassert>

// Synatx: assert(<expression> && <message>)

void create_player(std::string name, int level)
{
    assert(level > 0 && "Level should be greater than 0");
    std::cout << "Creating player: " << name << ", Level: " << level << std::endl;
}

int main()
{
    create_player("John Doe", 1);
    return 0;
}
