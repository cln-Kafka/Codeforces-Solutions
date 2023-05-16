#include <iostream>
#include <cmath>

int main(){
    int n{0};
    std::cin >> n;
    int val{0};
    int ones{0};
    int twos{0};
    int threes{0};
    int cars{0};
    for(int i{0}; i<n; i++){
        std::cin >> val;
        if(val == 1){ones++;}
        else if(val == 2){twos += 2;}
        else if(val == 3){threes++;}
        else if(val == 4){cars++;}
    }

    cars += std::min(threes, ones);
    if(threes == ones){
        threes = 0;
        ones = 0;
    }
    else if(threes > ones){
        threes = threes - ones;
        ones = 0;
    }
    else{
        ones = ones - threes;
        threes = 0;
    }
    if(threes > 0){cars += threes;}

    cars += twos/4;
    twos %= 4;

    if(ones == 1 || ones == 2){cars++;}
    else{
        twos += ones;
        cars += twos/4;
        twos %= 4;
        if(twos != 0){cars++;}
    }
    

    std::cout << cars << std::endl;
    return 0;
}