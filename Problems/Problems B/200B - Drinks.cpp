#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    int x = 0;
    float summing = 0;
    for(int i = 0; i < n; i++){
        std::cin >> x;
        summing = summing + x;
    }

    
    std::cout << summing / n << std::endl;
    return 0;
}