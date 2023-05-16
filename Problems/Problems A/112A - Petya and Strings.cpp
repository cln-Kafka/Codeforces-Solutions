#include <iostream>

int main(){
    std::string one;
    std::string two;
    std::cin >> one;
    std::cin >> two;

    int length = one.size();

    for(int i = 0; i < length; i++){
        if(one[i] >= 97 && one[i] <= 122)
        {one[i] -= 32;}
        if(two[i] >= 97 && two[i] <= 122)
        {two[i] -= 32;}
    }

    if(one < two){std::cout << -1 << std::endl;}
    else if(one > two){std::cout << 1 << std::endl;}
    else if(one == two){std::cout << 0 << std::endl;}

    return 0;
}