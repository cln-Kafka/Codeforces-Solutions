#include <iostream>
#include <algorithm>
#include <string>
int main(){
    std::string original;
    std::string translated;
    std::cin >> original;
    std::cin >> translated;
    int len = original.size();
    int counter = 0;
    // reverse(original.begin(), original.end()); 
    // for (int i = 0; i < len; i++){
    //     if (original[i] == translated[i]){
    //         counter++;
    //     }
    // }
    for (int i = 0; i < len; i++){
        if (original[i] == translated[len - 1 - i]){
            counter++;
        }
    }

    if (counter == len){
        std::cout << "YES" << std::endl;
    }
    else {std::cout << "NO" << std::endl;}
    return 0;
}