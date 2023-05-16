#include <iostream>

int main(){
    std::string word;
    std::cin >> word;
    std::string hello = "hello";
    int cnt{0};
    int pos{0};
    char c = hello[pos];
    for(int i{0}; i<word.size(); i++){
        if(word[i] == c){
            cnt++;
            pos++;
            c = hello[pos];
        }
        if(cnt == 5){
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}
