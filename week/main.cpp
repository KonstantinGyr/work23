#include <iostream>

#define DAY1 "Monday"
#define DAY2 "Tuesday"
#define DAY3 "Wednesday"
#define DAY4 "Thursday"
#define DAY5 "Friday"
#define DAY6 "Saturday"
#define DAY7 "Sunday"

int main() {
    std::cout << "Enter number day of week: " << std::endl;
    int num;
    std::cin>>num;
    switch (num)
    {
        case 1:std::cout<<DAY1<<std::endl;break;
        case 2:std::cout<<DAY2<<std::endl;break;
        case 3:std::cout<<DAY3<<std::endl;break;
        case 4:std::cout<<DAY4<<std::endl;break;
        case 5:std::cout<<DAY5<<std::endl;break;
        case 6:std::cout<<DAY6<<std::endl;break;
        case 7:std::cout<<DAY7<<std::endl;break;
    }
    return 0;
}
