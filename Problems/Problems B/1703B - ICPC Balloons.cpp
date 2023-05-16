#include <iostream>
#include <map>

int cntDistinct(std::string str){
    std::map<char, int> count;
    for(int i = 0; i < str.size(); i++){
        count[str[i]]++;
    }
    return count.size();
}

int main(){
    int t = 0;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        int n = 0;
        std::cin >> n;
        std::string problems;
        std::cin >> problems;
        int distinct = cntDistinct(problems);

        std::cout << distinct*2 + (problems.size() - distinct) << std::endl;

    }
    return 0;
}
