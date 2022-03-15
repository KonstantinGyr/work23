#include <iostream>
#define MAX 20
#define COACH "Railway carriage # "
#define ANSWER "How many people?"
#define SIT_DOWN(downLoad) for (int i = 0; i < 10; ++i) { downLoad(i,train[i]);}
#define FILLING(count) for (int i = 0; i < 10; ++i) {sum+=train[i]; count(i,train[i]);}

void count(int num,int quant){
    if(quant > MAX){
        std::cerr << COACH << num << " is full." << std::endl;
    }
    else{
        std::cout << COACH << num << " there are places." << std::endl;
    }
}
void downLoad(int num,int &quant){
    int a=0;
    std::cout <<ANSWER<< std::endl<< COACH << num+1<<" ";
    std::cin >> a;
     quant=a;
}
int main() {
    int sum=0;
    int train[10];
    SIT_DOWN(downLoad);
    FILLING(count);
    std::cout << "Total passengers: " << sum;
    return 0;
}
