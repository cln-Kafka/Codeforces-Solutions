#include <iostream>

int main(){
    int t{0};
    std::cin >> t;
    while(t--){
        char board[8][8];
        for(int i{0}; i<8; i++){
            for(int j{0}; j<8; j++){
                std::cin >> board[i][j];
            }
        }

        int RedCount{0};
        for(int i{0}; i<8; i++){
            for(int j{0}; j<8; j++){
                if(board[i][j] == 'R'){
                    RedCount++;
                }
            }

            if(RedCount == 8){
                break;
            }
            else{
                RedCount = 0;
            }
        }

        if(RedCount == 8){
            std::cout << 'R' << std::endl;
        }
        else{
            std::cout << 'B' << std::endl;
        }
    }
    return 0;
}