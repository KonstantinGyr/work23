#include <iostream>
#include <string>
#define MAX 20
#define COACH "Railway carriage #  "
#define ANSWER "How many people?"
#define SIT_DOWN(downLoad) for (int i = 0; i < 10; ++i) { downLoad(i,train[i]);}
#define FILLING (count)    for (int i = 0; i < 10; ++i) { count(i,train[i]);}

void count(int &num,int(&train)[]){
    int sum=0;
    std::string full;
    std::string empty;
    if(train[num ] < 20){
        full+=std::to_string(num+1);
        full+=" ,";
    }
    else{
        empty+=std::to_string(num+1);
        empty+=" ,";
    }
    sum+=num;
    if(num==9) {
        std::cout << COACH << full << " is full." << std::endl;
        std::cout << COACH << empty << " there are places." << std::endl;
        std::cout << "Total passengers: " << sum;
    }
}
void downLoad(int &num,int (&train)[]){
    int quant=0;
    while (quant>MAX){
        std::cout <<ANSWER<< std::endl<< COACH << num++ ;
        std::cin >> quant;
        if(quant>MAX)std::cout<<"Too much!";
    }
    train[num] = quant;
}
int main() {
    int train[10];
    SIT_DOWN();
    FILLING();
    return 0;
}
