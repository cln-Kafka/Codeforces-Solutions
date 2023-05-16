#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    int a, b = 0;
    int current = 0;
    int capacity = 0;
    for(int i = 0; i < n; i++){
        std::cin >> a >> b;
        current = current - a + b;
        if(current > capacity){
            capacity = current;
        }
    }

    std::cout << capacity << std::endl;
    return 0;
}