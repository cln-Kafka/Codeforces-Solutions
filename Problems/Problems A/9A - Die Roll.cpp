#include <iostream>
#include <algorithm>

int main(){
    int y, w = 0;
    std::cin >> y >> w;
    int d = 6 - (std::max(y,w)) +1;

    if(d == 6){
        std::cout << "1/1" << std::endl;
    }
    else if(d == 1){
        std::cout << "1/6" << std::endl;
    }
    else if(d == 2){
        std::cout << "1/3" << std::endl;
    }
    else if(d == 3){
        std::cout << "1/2" << std::endl;
    }
    else if(d == 4){
        std::cout << "2/3" << std::endl;
    }
    else if(d == 5){
        std::cout << "5/6" << std::endl;
    }

    return 0;
}