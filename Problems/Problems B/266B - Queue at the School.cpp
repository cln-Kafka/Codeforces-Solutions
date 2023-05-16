#include <iostream>

int main(){
    int n, t = 0;
    std::cin >> n >> t;
    std::string queue;
    std::cin >> queue;

    for(int i=0; i<t; i++){
        for(int j=0; j<n; j++){
            if(queue[j] == 'B' && queue[j+1] == 'G'){
                queue[j] = 'G';
                queue[j+1] = 'B';
                j++;
            }
        }
    }

    std::cout << queue << std::endl;
    return 0;
}