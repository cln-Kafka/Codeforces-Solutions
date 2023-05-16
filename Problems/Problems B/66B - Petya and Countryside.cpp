#include <iostream>

int main(){
    int n{0};
    std::cin >> n;
    int* heights = new int[n];
    int* counter = new int[n];
    // int* counterreverse = new int[n];

    for(int i{0}; i<n; i++){
        std::cin >> heights[i];
        counter[i] = 1;
        // counterreverse[i] = 0;
    }

    for(int r{0}; r<n; r++){
        for(int c{r}; c<n-1; c++){
            if(heights[c+1] <= heights[c]){
                counter[r]++;
            }
            else{break;}
        }
    }

    for(int r{n-1}; r>=0; r--){
        for(int c{r}; c>0; c--){
            if(heights[c-1] <= heights[c]){
                counter[r]++;
            }
            else{break;}
        }
    }

    int max = counter[0];
    for(int i{1}; i<n; i++){
        if(counter[i] > max){
            max = counter[i];
        }
    }

    std::cout << max << std::endl;
    return 0;
}