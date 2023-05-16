#include <iostream>
#include <cmath>
#include <string>
#include <vector>

// implementation to stoi function :)
int RCcolnumber(std::string letters){
    int number{0};
    int pos{0};
    int size = letters.size();
    for(int i{size-1}; i>=0; i--){
        number += (letters[i]-48)*std::pow(10, pos);
        pos++;
    }
    return number;
}


int main(){
    int t{0};
    std::cin >> t;
    while(t--){
        std::string format;
        std::cin >> format;

        // differ between R1 and R1C(num)
        int cntC{0};
        for(int i{1}; i<format.size(); i++){
            if(format[i] == 'C'){
                cntC = i;
                break;
            }
        }

        if(format[0] == 'R' && cntC > 1 && format[1]>=48 && format[1]<=57){
            int size = format.size();
            int Cpos = format.find('C');

            std::string RCcolumn = format.substr(Cpos+1, size);
            int RCcolumnNum = RCcolnumber(RCcolumn);

            std::string RCrow = format.substr(1, Cpos-1);

            std::vector<int> numbers;
            while(RCcolumnNum > 0){
                // to handle z as the last letter of the column
                if(RCcolumnNum % 26 == 0){
                    numbers.push_back(26);
                    RCcolumnNum = (RCcolumnNum/26) - 1;
                }
                else{
                    numbers.push_back(RCcolumnNum % 26);
                    RCcolumnNum /= 26;
                }
            }
            for(int i = numbers.size() - 1; i >= 0; i--){
                char letter = numbers[i]+64;
                std::cout << letter;
            }
            std::cout << RCrow << std::endl;
            numbers.clear();
        }

        else{
            int index{0};
            int size = format.size();
            for(int i{0}; i<size; i++){
                if(format[i]>=48 && format[i]<=57){
                    index = i;
                    break;
                }
            }
            std::string BCcolumn = format.substr(0, index);
            std::string BCrow = format.substr(index, size-1);

            std::cout << 'R' << BCrow << 'C';
            int BCcolumnsize = BCcolumn.size();
            int BCcolnumber{0};
            int pos{0};
            for(int i{BCcolumnsize-1}; i>=0; i--){
                BCcolnumber += (BCcolumn[i]-64) * std::pow(26, pos);
                pos++;
            }
            std::cout << BCcolnumber << std::endl;
        }
    }
    return 0;
}