#include <iostream>
#include <map>
#include <string>

int countdigits(std::string num){
    std::map<char, int> counting;
    for(int i{0}; i<num.size(); i++){
        counting[num[i]]++;
    }

    return counting.size();
}

int main(){
    int t{0};
    std::cin >> t;
    while(t--){
        std::string number;
        std::cin >> number;
        std::string spare = number;
        
        int flag = countdigits(number);

        // e.g. if number = 567, spare = 555
        for(int i{0}; i<spare.size(); i++){
            spare[i] = spare[0];
        }

        while(flag > 1){

            // condition if the largest digit is one
            // because that means the largest
            // ordinary number may consists of the same number of digits-1
            // 110 -> 99, 112 -> 111
            if(number[0] == '1'){

                // checking if that number is larger than or less than the
                // nearest ordinary number(that consists of same number of digits) -> spare
                // if less than, then number will be converted to smaller-digits number:
                // 110 < 111 -> 99,,,,, then number will be sent to change the flag to exit the loop
                // if larger than, so number must be equal to spare, so we sent spare to change the flag
                if(number < spare){
                    for(int i{1}; i<number.size(); i++){
                        number[i] = '9';
                    }
                    number.erase(0, 1);
                }

                else{
                    flag = countdigits(spare);
                    continue;
                }

            flag = countdigits(number);
            }

            // same idea, but if the number's largest digit is not one
            // 954 < 999 ---> make it (888) send number to change the flag
            // 889 > 888 ---> send spare to change the flag
            else{
                if(number < spare){
                    number[0] -= 1;
                    for(int i{1}; i<number.size(); i++){
                        number[i] = number[0];
                    }
                }

                else{
                    flag = countdigits(spare);
                    continue;
                }
                flag = countdigits(number);
            }
        }
        std::cout << ((number.size()-1)*9) + number[0]-48 << std::endl;
    }
    return 0;
}

// 111 -> (1)+18, 222 -> (2)+18, 999 -> (9)+18
// 3 digits: the first digit + 2*9
// 5466<5555:::: 1+3*9