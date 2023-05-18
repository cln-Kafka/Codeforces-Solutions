#include <iostream>

int main(){
    int t, n {0};
    std::cin >> t;

    while(t--){
        std::cin >> n;
        int first = 0;
        int last = n-1;
        int* sequence = new int[n];
        
        for(int i{0}; i<n; i++){
            std::cin >> sequence[i];
        }
        for(int j{0}; j<n; j++){
            if(j%2==0){
                std::cout << sequence[first] << " ";
                first++;
            }
            else{
                std::cout << sequence[last] << " ";
                last--;
            }
        }
    }
    return 0;
}