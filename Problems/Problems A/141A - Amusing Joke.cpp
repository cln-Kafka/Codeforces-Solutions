#include <iostream>
#include <algorithm>

int main(){
    // INPUT
    std::string guest, host, pile;
    std::cin >> guest >> host >> pile;

    // for SOLUTION
    std::string concatinated;
    concatinated = guest + host;
    int consize = concatinated.size();
    int pilesize = pile.size();
    std::sort(concatinated.begin(), concatinated.end());
    std::sort(pile.begin(), pile.end());

    if(concatinated == pile){std::cout << "YES" << std::endl;}
    else{std::cout << "NO" << std::endl;}
    return 0;
}