#include <iostream>
#include <map>

int main(){
    // inputs
    int n,k{0};
    std::cin >> n >> k;
    std::string word;
    std::cin >> word;

    // for algorithm
    int occur{0};
    int pos{0};
    char letter = 97;
    int freq{0};

    for(int i{0}; i<n; i++){
        occur = word.find(letter);
        if(occur == -1){
            letter++;
            continue;
        }
        else{
            pos = word.find(letter);
            word.erase(pos, 1);
            k--;
        }
    }
    return 0;
}