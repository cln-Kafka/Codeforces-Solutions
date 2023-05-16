#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>

long long count(std::string str){
    long long sum = 0;
    std::map<char, int> charcounter;
    for(int i{0}; i < str.size(); i++){
        charcounter[str[i]]++;
    }
    for (std::map<char, int>::iterator itr = charcounter.begin(); itr != charcounter.end(); ++itr){
        sum += pow((*itr).second,2);
    }
    return sum;
}

int main(){
    long long cnt{0};
    std::string word;
    std::cin >> word;
    cnt = count(word);
    std::cout << cnt << std::endl;
    return 0;
}