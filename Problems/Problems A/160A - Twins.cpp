#include <numeric>
#include <iostream>
#include <algorithm>

int main(){
    int n{0};
    std::cin >> n;
    int* coins = new int[n];
    int sum{0};
    for(int i{0}; i<n; i++){
        std::cin >> coins[i];
        sum += coins[i];
    }

    std::sort(coins, coins+n);
    int index{0};
    int sum1{0};
    int sum2{0};
    for(int i{n-1}; i>=0; i--){
        sum1 += coins[i];
        sum2 = sum - sum1;
        index++;
        if(sum1>sum2){break;}
    }
    std::cout << index << std::endl;
    return 0;
}