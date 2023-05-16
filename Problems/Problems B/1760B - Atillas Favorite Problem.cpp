#include <iostream>
#include <algorithm>

int main(){
    int t, n {0};
    std::string word;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        std::cin >> word;
        std::sort(word.begin(), word.end());
        std::cout << word[n-1] - 96 << std::endl;
    }
    return 0;
}

/*

if you don't want to use the sort function,
consider this solution:

#include <iostream>

int main(){
    int t, n {0};
    std::string word;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        std::cin >> word;
        int max = 0;
        for(int i{0}; i < n; i++){
            if(word[i] > max){
                max = word[i];
            }
        }
        std::cout << max - 96 << std::endl;
    }
    return 0;
}

*/