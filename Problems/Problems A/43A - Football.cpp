#include <iostream>
#include <map>
#include <algorithm>

void count(std::string* T, int size){
    std::map<std::string, int> counter;
    for(int i{0}; i<size; i++){
        counter[T[i]]++;
    }

    auto maxIt = std::max_element(counter.begin(), counter.end(),
        [](const auto& a, const auto& b) {
            return a.second < b.second;
        });
 
    std::cout << maxIt->first << std::endl;
}

int main(){
    int n {0};
    std::cin >> n;
    std::string* Teams = new std::string[n];

    for(int i{0}; i<n; i++){
        std::cin >> Teams[i];
    }
    count(Teams, n);
    return 0;
}