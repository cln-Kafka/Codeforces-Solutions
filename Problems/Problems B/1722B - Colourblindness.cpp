#include <iostream>

int main(){
    int t,n {0};
    std::string color1;
    std::string color2;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        std::cin >> color1;
        std::cin >> color2;
        
        for(int i {0}; i < n; i++){
            if(color1[i] == 66){color1[i] = 71;}
            if(color2[i] == 66){color2[i] = 71;}
        }
        
        if(color1 == color2){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}