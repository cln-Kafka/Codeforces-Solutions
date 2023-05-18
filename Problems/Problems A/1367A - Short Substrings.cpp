#include <iostream>

int main(){
    int t {0};
    std::cin >> t;
    std::string b;
    std::string a;
    
    while(t--){
        std::cin >> b;
        a = b[0];
        a += b[1];
        for(int i{3}; i<b.size(); i=i+2){
            a += b[i];
        }
        std::cout << a << std::endl;
    }
    return 0;
}