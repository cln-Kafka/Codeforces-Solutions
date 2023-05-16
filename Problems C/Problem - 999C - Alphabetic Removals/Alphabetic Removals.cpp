#include <iostream>
#include <map>

int characterscounter(std::string s, char l){
    std::map<char, int> counter;
    for(int i{0}; i<s.size(); i++){
        counter[s[i]]++;
    }
    return counter[l];
}

int main(){
    // inputs
    int n,k{0};
    std::cin >> n >> k;
    std::string word;
    std::cin >> word;

    // for algorithm
    char letter = 97;
    int freq{0};
    int cnt{0};

    for(char c='a'; c<='z'; ++c){
        freq = characterscounter(word, c);
        while(freq){
            int pos = word.find(letter);
            word[pos] = '0';
            cnt++;
            k--;
            freq--;
        }
        if(k == 0){
            break;
        }
    }
    for(int i{0}; i<n; i++){
        if(word[i] == '0'){
            word.erase(i, 1);
        }
    }
    std::cout << word << std::endl;
    return 0;
}