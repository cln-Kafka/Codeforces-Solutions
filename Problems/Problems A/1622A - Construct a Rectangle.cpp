#include<iostream>
#include <algorithm>
 
int main() {
    int t {0};
    std::cin >> t;
    while(t--){
        int sticks[3];
        std::cin >> sticks[0];
        std::cin >> sticks[1];
        std::cin >> sticks[2];
        std::sort(sticks, sticks+3);
        if(sticks[2] == sticks[0] + sticks[1]){
            std::cout << "YES" << std::endl;
        }
        else if(sticks[2] == sticks[1]){
            if(sticks[0] % 2 == 0){
                std::cout << "YES" << std::endl;
            }
            else{std::cout << "NO" << std::endl;}
        }
        else if(sticks[0] == sticks[1]){
            if(sticks[2] % 2 == 0){
                std::cout << "YES" << std::endl;
            }
            else{std::cout << "NO" << std::endl;}
        }        
        else{std::cout << "NO" << std::endl;}
    }
	return 0;
}