// there is another method, the better method, in the same repository

#include <iostream>

int main(){
    std::string word;
    std::cin >> word;
    for(int i{0}; i<word.size(); i++){
        if(word[i] != 'h'){
            word.erase(i, 1);
            i--;
        }
        else{break;}
    }
    if(word.size() == 0){std::cout << "NO" << std::endl;}
    else{
        int cnt{1};
        int index{0};
        for(int i{1}; i<word.size(); i++){
            if(word[i] == 'e'){
                cnt++;
                index = i;
                break;
            }
        }
        for(int i{index+1}; i<word.size(); i++){
            if(word[i] == 'l'){
                cnt++;
                index = i;
                break;
            }
        }
        for(int i{index+1}; i<word.size(); i++){
            if(word[i] == 'l'){
                cnt++;
                index = i;
                break;
            }
        }
        for(int i{index+1}; i<word.size(); i++){
            if(word[i] == 'o'){
                cnt++;
                break;
            }
        }
        if(cnt == 5){std::cout << "YES" << std::endl;}
        else{std::cout << "NO" << std::endl;}
    }
    return 0;
}
