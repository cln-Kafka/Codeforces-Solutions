#include <iostream>

int main(){
    int t, n{0};
    std::cin >> t;
    std::string directions;
    while(t--){
        int x {0};
        int y {0};
        std::cin >> n;
        std::cin >> directions;
        for(int i{0}; i<n; i++){
            if(directions[i] == 'U'){
                y++;
            }
            else if(directions[i] == 'D'){
                y--;
            }
            else if(directions[i] == 'L'){
                x--;
            }
            else if(directions[i] == 'R'){
                x++;
            }

            if(x == 1 && y == 1){
                std::cout << "YES" << std::endl;
                break;
            }
            else if(i == n-1 && (x != 1 || y != 1)){
                std::cout << "NO" << std::endl;
            }
        }
    }
    return 0;
}