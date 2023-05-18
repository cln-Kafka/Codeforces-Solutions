#include <iostream>
#include <vector>

int main(){
    int t{0};
    std::cin >> t;
    while(t--){
        int n{0};
        std::cin >> n;
        std::vector<int> perm;
        for(int i{2}; i<=n; i++){
            perm.push_back(i);
        }

        perm.push_back(1);
        for (int i: perm) {
            std::cout << i << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}