#include <iostream>
int main(){
    std::string word;
    std::cin >> word;
    for(int i{0}; i < word.size(); i++){
        if(word[i] >= 65 && word[i] <= 90){
            word[i] += 32;
        }
    }

    for(int i{0}; i < word.size(); i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y'){
            word.erase(i, 1);
            i--;
        }
    }

    for(int i{0}; i < word.size(); i++){
        std::cout << '.' << word[i];
    }

    return 0;
}