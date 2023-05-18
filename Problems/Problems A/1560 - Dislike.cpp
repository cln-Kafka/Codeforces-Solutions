#include <iostream>
int main(){
    int t, k{0};
    std::cin >> t;
    int sequence [1001];
    while(t--){
        int pos{0};
        std::cin >> k;
        for(int i{1}; pos <= 1001; i++){
            if(i%3 != 0 && i%10 != 3){
                sequence[pos] = i;
                pos++;
            }
        }
        std::cout << sequence[k-1] << std::endl;
    }
    return 0;
}