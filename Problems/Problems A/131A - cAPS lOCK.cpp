/*
It is required to check whether the given word
is a result of accidently pressing the caps lock
key. so we do that.
and if the key is on, change the first letter's case
and change the others into lower case.

the two cases if it is on:
- one or zero capital letter and
it is a must to be the first letter
- all other letters are capital
*/

#include <iostream>

int main(){
    std::string word;
    std::cin >> word;
    int cntupper{0};

    for(int i{1}; i<word.size(); i++){
        if(isupper(word[i])){
            cntupper++;
        }
    }
    int cntlower = word.size()-cntupper;

    // caps lock is on
    if(isupper(word[0]) && cntupper == word.size()-1){
        for(int i{0}; i<word.size(); i++){
                word[i] += 32;
        }
        std::cout << word << std::endl;
    }
    else if(cntupper == word.size()-1){
        if(islower(word[0])){
            word[0] -= 32;
        }
        for(int i{1}; i<word.size(); i++){
            if(isupper(word[i])){
                word[i] += 32;
            }
        }
        std::cout << word << std::endl;
    }

    else if(cntlower > 0){
        std::cout << word << std::endl;
    }
    return 0;
}