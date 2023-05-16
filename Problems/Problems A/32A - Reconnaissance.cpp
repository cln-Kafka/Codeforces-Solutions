#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    int n, d {0};
    std::cin >> n >> d;
    int cnt {0};
    int* heights = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> heights[i]; // initializing the array with values
    }

    std::sort(heights, heights + n);

    for(int c{0}; c<n; c++){
        // if(c >= n - 1){break;}
        for(int k{c+1}; k<n; k++){
            if(abs(heights[c] - heights[k]) <= d){cnt +=2;}
        }
    }

    std::cout << cnt << std::endl;
    return 0;
}