#include <iostream>

int main(){
	std::string word;
	std::cin >> word;
	
	int upper = 0;
	int lower = 0;
	
	for(int j = 0; j < word.size(); j++){
		if (isupper(word[j])){
			upper++;
		}
		else {
			lower++;
		}
	}

	if (upper > lower){
		for(int k = 0; k < word.size(); k++){
			if(word[k] >= 97 && word[k] <= 122){word[k] -= 32;}
		}
	}
	else {
		for(int p = 0; p < word.size(); p++){
			if(word[p] >= 65 && word[p] <= 90){word[p] += 32;}
		}
	}

	std::cout << word << std::endl;
	return 0;
}