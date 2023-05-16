#include <iostream>
#include <algorithm>

int main(){
    int t{0};
    int n{0};
    std::cin >> t;
    while(t--){
        std::cin >> n;
        int* bnums = new int[n-1];
        int* anums = new int[n];
        int index{0};
        for(int i{0}; i<n-1; i++){
            std::cin >> bnums[i];
            anums[i] = bnums[i];
        }

        int minimum = bnums[0];
        for(int i{0}; i<n-1; i++){
            if(bnums[i] < minimum){
                minimum = bnums[i];
                index = i-1;
            }
        }

        for(int i{n-1}; i>=0; i--){
            if(i != index){
                anums[i-1] = anums[i]; 
            }
            else if(i == index){
                anums[i] == 0;
                break;
            }
        }

        for(int i{0}; i<n; i++){
            std::cout << anums[i] << ' ';
        }
    }
    return 0;
}