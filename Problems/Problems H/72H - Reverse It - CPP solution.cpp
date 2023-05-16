#include <iostream>
#include <cmath>

int main(){
    int number = 0;
    std::cin >> number;
    int temp = abs(number);
    int number_new = 0;
    int count = 0;
    bool flag = true;
    if(number > 0){flag = false;}

    while(number != 0) {
      number = number / 10;
      count++;
    }

    // checking the leading zero
    for(int i = 0; i < count; i++){
        if(temp % 10 != 0){break;}
        else{temp /= 10;}
    }

    // reversing
    for(int i = 1; i <= count; i++){
        number_new += temp % 10 * pow(10, count-i);
        temp /= 10;
    }

    // checking the leading zero
    for(int i = 0; i < count; i++){
        if(number_new % 10 != 0){break;}
        else{number_new /= 10;}
    }

    if(flag){
        std::cout << "-" << number_new << std::endl;
    }
    else{std::cout << number_new << std::endl;}
    return 0;
}