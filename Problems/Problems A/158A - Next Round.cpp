#include <iostream>

int main(){
    int k, n;
    std::cin >> n >> k;
    // int *scores = new int(n);
    int scores[100];
    int counter = 0;

    for(int i = 0; i < n; i++){
        std::cin >> scores[i];
    }

    for(int i = 0; i < n; i++){
        if(scores[i] >= scores[k-1] && scores[i] > 0){
            counter++;
        }
    }


    std::cout << counter << std::endl;
    return 0;
}