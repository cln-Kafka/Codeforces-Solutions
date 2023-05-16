#include <iostream>

int main(){
    std::string code;
    std::cin >> code;
    for(int i = 0; i < code.size();){
        if(code[i] == '-' && code[i+1] == '-'){
            std::cout << '2';
            i = i+2;
        }
        else if(code[i] == '-' && code[i+1] == '.'){
            std::cout << '1';
            i= i+2;
        }
        else if(code[i] == '.'){
            std::cout << '0';
            i++;
        }
    }
    return 0;
}