#include<iostream>
 
int main() {
    int t = 0;
    std::string word;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        int yescounter = 0;
        std::cin >> word;
        int size = word.size();
        if(size % 2 != 0){
            std::cout << "NO" << std::endl;
            continue;
        }
        else{
            for(int j = 0; j < size/2; j++){
                if(word[j] == word[(size / 2) + j]){
                    yescounter++;
                }
            }

            if(yescounter == size/2){std::cout << "YES" << std::endl;}
            else{std::cout << "NO" << std::endl;}
        }
    }
	return 0;
}