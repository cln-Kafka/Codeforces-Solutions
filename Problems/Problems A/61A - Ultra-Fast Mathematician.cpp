#include <iostream>

int main(){
    std::string one;
    std::string two;
    std::cin >> one;
    std::cin >> two;
    std::string answer;

    for(int i{0}; i<one.size(); i++){
        if(one[i] == two[i]){
            answer += '0';
        }
        else{
            answer += '1';
        }
    }
    
    std::cout << answer << std::endl;
    return 0;
}