#include <iostream>

int main(){
    int t{0};
    std::cin >> t;
    while(t--){
        int n{0};
        std::cin >> n;

        std::string* books = new std::string[n];
        int* minutes = new int[n];

        int* twoBooksMinutes = new int[n];
        int* secondBookMinutes = new int[n];
        int* firstBookMinutes = new int[n];

        for(int i{0}; i<n; i++){
            twoBooksMinutes[i] = 1000000000;
        }
        for(int i{0}; i<n; i++){
            secondBookMinutes[i] = 1000000000;
        }
        for(int i{0}; i<n; i++){
            firstBookMinutes[i] = 1000000000;
        }

        int oneone{0};
        int onezero{0};
        int zeroone{0};

        for(int i{0}; i<n; i++){
            std::cin >> minutes[i] >> books[i];
        }

        for(int i{0}; i<n; i++){
            if(books[i] == "11"){
                twoBooksMinutes[i] = minutes[i];
                oneone++;
            }
        }
        for(int i{0}; i<n; i++){
            if(books[i] == "10"){
                secondBookMinutes[i] = minutes[i];
                onezero++;
            }
        }
        for(int i{0}; i<n; i++){
            if(books[i] == "01"){
                firstBookMinutes[i] = minutes[i];
                zeroone++;
            }
        }

        int twobooksminimum = twoBooksMinutes[0];
        int oneminimum = firstBookMinutes[0];
        int twominimum = secondBookMinutes[0];
        

        for(int i{0}; i<n; i++){
            if(twoBooksMinutes[i] < twobooksminimum){
                twobooksminimum = twoBooksMinutes[i];
            }
        }
        for(int i{0}; i<n; i++){
            if(secondBookMinutes[i] < twominimum){
                twominimum = secondBookMinutes[i];
            }
        }
        for(int i{0}; i<n; i++){
            if(firstBookMinutes[i] < oneminimum){
                oneminimum = firstBookMinutes[i];
            }
        }

        int total = oneminimum + twominimum;
        if(oneone == 0 && (onezero == 0 || zeroone == 0)){
            std::cout << -1 << std::endl;
        }
        else if(total < twobooksminimum){
            std::cout << total << std::endl;
        }
        else{
            std::cout << twobooksminimum << std::endl;
        }

    }
    return 0;
}