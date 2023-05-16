#include <iostream>

int main(){
	std::string word;
	std::cin >> word;
	int cnt{0};
	
	if(word.size() <= 7){std::cout << "NO" << std::endl;}
	else{
		for(int i{0}; i < word.size(); i++){
			if(word[i] == word[i+1]){
				cnt++;
				if(cnt == 6){
					std::cout << "YES" << std::endl;
					return 0;
				}
			}
			else{
				cnt = 0;
			}
		}
		std::cout << "NO" << std::endl;
	}
	return 0;
}