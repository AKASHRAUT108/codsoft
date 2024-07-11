#include <iostream>
#inculde<ctime>
using namespace std;

int main()
{
    std::cout<<"Enter Guess Limit:";
    int l;std::cin>>l;
    srand(time(0)^clock());
    const int num=rand()%l;
    while (true){
        std::cout<<"Enter Your Guess:";
        int g;std::cin>>g;
        if(g<num){
            std::cout<<"your gess is less,please put values again";
            continue;
        }
        else if(g>num){
            std::cout<<"your gess is more,please put values again";
            continue;
        }
        else{
            std::cout<<"you gess is right!/n";
            break;
        }
    }
    return 0;
}
