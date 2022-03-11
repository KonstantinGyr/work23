#include <iostream>
#include <string>
#define MAX 20
#define COACH "Railway carriage #  "
#define ANSWER "How many people?"
#define COUNT(n) (n++)

bool filling(int i,int(&train)[10]) {
    if (train[i-1] < 20)return false;
    return true;
}
int main() {
    int train[10];
    int num=0;
    int quant;
    int sum=0;
    while (COUNT(num)<10) {
        std::cout <<ANSWER<< std::endl<< COACH << num ;
        std::cin >> quant;
        if(quant>MAX){
            std::cout<<"Too much!";
            num--;
            continue;
        }
        train[num-1] = quant;
        sum+=quant;
    }
    std::string full;
    std::string empty;
    num=0;
    while (COUNT(num)<10){
        if(filling(num,train)){
            full+=std::to_string(num);
            full+=" ,";
        }
        else{
            empty+=std::to_string(num);
            empty+=" ,";
        }
    }
    std::cout<<COACH<<full<<" is full."<< std::endl;
    std::cout<<COACH<<empty<<" there are places."<<std::endl;
    std::cout<<"Total passengers: "<<sum;
    return 0;
}
