#include <iostream>
#define SPRING
#define SUMMER 1
#define AUTUMN
#define WINTER


int main() {
#if SUMMER
    std::cout << "Summer" << std::endl;
    return 0;
#endif
}
