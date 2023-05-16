#include <iostream>

int main(){
    int t{0};
    std::cin >> t;
    while(t--){
        int angle{0};
        std::cin >> angle;
        angle = 180 - angle;
        if(360%angle == 0){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}