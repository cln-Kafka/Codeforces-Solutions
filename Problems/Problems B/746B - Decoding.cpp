#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int n{0};
    std::cin >> n;
    std::string encoded;
    std::cin >> encoded;
    std::string decoded = encoded;
    if(n%2 != 0){
        decoded[n/2] = encoded[0];
        encoded.erase(0, 1);
        int pos {0};
        for(int i{1}; i<=n/2; i++){
            decoded[n/2-i] = encoded[pos];
            pos++;
            decoded[n/2+i] = encoded[pos];
            pos++;
        }
    }
    else if(n%2 == 0){
        int pos {0};
        for(int i{0}; i<=n/2-1; i++){
            decoded[n/2-i-1] = encoded[pos];
            pos++;
            decoded[n/2+i] = encoded[pos];
            pos++;
        }
    }
    std::cout << decoded << std::endl;
    return 0;
}