#include <iostream>
#include <map>

int main(){
    // input
    int n,k{0};
    std::string word;
    std::cin >> n >> k;
    std::cin >> word;
    
    // for solution idk -> count the frequency of each character of the alphabet
    int alpha[26];
    for(int i{0}; i<26; i++){
        alpha[i] = 0;
    }
    for(char &it:word){
        alpha[it-97]++;
    }
    
    // count the deleted letters completely
    int cnt{0};
    // the index of the character stopped at
    int index{0};
    // the difference that will be deleted of this letter
    int diff{0};

    for(int i{0}; i<26; i++){
        if(k - alpha[i] >= 0){
            k -= alpha[i];
            cnt++;
        }
        else if(k - alpha[i] < 0){
            index = i;
            diff = k;
            break;
        }
    }

    for(int i{0}; i<cnt; i++){
        while(alpha[i]--){
            int pos = word.find(i+97);
            word.erase(pos, 1);
        }
    }
    if(diff != 0){
        while(diff--){
            int pos = word.find(index+97);
            word.erase(pos, 1);
        }
    }
    std::cout << word << std::endl;
    return 0;
}