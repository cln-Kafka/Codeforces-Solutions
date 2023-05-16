#include <iostream>

int main(){
    int m,n,z;
    std::cin >> m >> n;
    z = m * n;
    if(z % 2 == 0){
        std::cout << z / 2 << std::endl;
    }
    else{
        std::cout << (z-1) / 2 << std::endl;
    }
    return 0;
}