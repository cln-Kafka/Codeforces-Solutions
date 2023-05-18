#include <iostream>
#include <algorithm>
#include <string>

int main(){
    int t{0};
    std::cin >> t;
    std::string n;
    while(t--){
        std::cin >> n;
        int length = n.size();
        int total = (length)*(length+1)/2;
        int firstelement = n[0]- 48;
        total += (firstelement-1)*10;
        std::cout << total << std::endl;
    }
    return 0;
}