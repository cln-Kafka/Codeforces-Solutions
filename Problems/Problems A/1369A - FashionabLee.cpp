#include <iostream>

int main(){
    int t{0};
    std::cin >> t;
    int k{0};
    while(t--){
        std::cin >> k;
        if(k%4==0){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}