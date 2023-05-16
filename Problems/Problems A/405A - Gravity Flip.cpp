#include <iostream>
#include <algorithm>

int main(){
    int n{0};
    std::cin >> n;
    int* puzzles = new int[n];
    for(int i{0}; i<n; i++){
        std::cin >> puzzles[i];
    }
    std::sort(puzzles, puzzles+n);
    for(int i{0}; i<n; i++){
        std::cout << puzzles[i] << ' ';
    }

    return 0;
}