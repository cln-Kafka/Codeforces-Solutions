#include <iostream>
#include <string>

int main(){
    int n;
    std::cin >> n;
    int nums[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};

    for(int i{0}; i<14; i++){
        if(n % nums[i] == 0){
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    
    std::cout << "NO" << std::endl;
    return 0;
}