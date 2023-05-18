#include <iostream>

int main(){
    int t = 0;
    std::cin >> t;
    for(int k = 0; k < t; k++){
        int x = 0;
        std::cin >> x;
        if(x >= 1900){std::cout << "Division 1" << std::endl;}
        else if(x >= 1600 && x <= 1899){std::cout << "Division 2" << std::endl;}
        else if(x >= 1400 && x <= 1599){std::cout << "Division 3" << std::endl;}
        else if(x <= 1399){std::cout << "Division 4" << std::endl;}
    }
    return 0;
}