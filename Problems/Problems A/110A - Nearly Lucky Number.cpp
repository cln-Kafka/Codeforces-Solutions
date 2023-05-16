#include <iostream>

int main(){
    std::string n;
    std::cin >> n;
    int counter = 0;
    for(int i = 0; i < n.size(); i++){
        if(n[i] == '4' || n[i] == '7'){
            counter++;
        }
    }
    if(counter == 4 || counter == 7){
        std::cout << "YES" << std::endl;
    }
    else{
        std::cout << "NO" << std::endl;
    }
    return 0;
}