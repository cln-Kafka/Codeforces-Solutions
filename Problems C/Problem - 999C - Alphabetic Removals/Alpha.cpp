#include <iostream>

int main(){
    // inputs
    int n,k{0};
    std::cin >> n >> k;
    std::string word;
    std::cin >> word;

    // for algorithm
    int cnt{0};
    for(char c='a'; c<='z'; ++c){
        while(k){
            int pos = word.find(c);
            if(pos == -1){break;}
            word[pos] = '0';
            cnt++;
            k--;
        }
        if(k == 0){break;}
    }
    word.erase(std::remove(word.begin(), word.end(), '0'), word.end());
    std::cout << word << std::endl;
    return 0;
}