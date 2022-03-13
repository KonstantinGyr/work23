#include <iostream>
#define SPRING 1
#define SUMMER 1
//#define AUTUMN 1
//#define WINTER 1


int main() {
#if SPRING
    std::cout << "SPRING" << std::endl;
#endif
#if SUMMER
    std::cout << "SUMMER" << std::endl;
#endif
#if AUTUMN
    std::cout << "AUTUMN" << std::endl;
#endif
#if WINTER
    std::cout << "WINTER" << std::endl;
#endif
    return 0;
}
