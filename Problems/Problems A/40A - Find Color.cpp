#include <iostream>
#include <cmath>

int main(){
    int x,y = 0;
    std::cin >> x >> y;
    float r_squared = (x*x) + (y*y);
    float r = sqrt(r_squared);

    // if(x == 0 || y == 0){std::cout << "black" << std::endl;}

    if(r - int(r) == 0){std::cout << "black" << std::endl;}

    else if((x > 0 && y > 0) || (x < 0 && y < 0))
    {
        int z = ceil(r);
        if(z % 2 != 0){std::cout << "black" << std::endl;}
        else{std::cout << "white" << std::endl;}
    }

    else if((x < 0 && y > 0) || (x > 0 && y < 0))
    {
        int z = ceil(r);
        if(z % 2 != 0){std::cout << "white" << std::endl;}
        else{std::cout << "black" << std::endl;}
    }

    return 0;
}