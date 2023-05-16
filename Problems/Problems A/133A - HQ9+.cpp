#include <iostream>
#include <map>

int cntDistinctplus(std::string str){
    std::map<char, int> count;
    for(int i = 0; i < str.size(); i++){
        count[str[i]]++;
    }
    return count['+'];
}
int cntDistinctnine(std::string str){
    std::map<char, int> count;
    for(int i = 0; i < str.size(); i++){
        count[str[i]]++;
    }
    return count['9'];
}
int cntDistinctH(std::string str){
    std::map<char, int> count;
    for(int i = 0; i < str.size(); i++){
        count[str[i]]++;
    }
    return count['H'];
}
int cntDistinctQ(std::string str){
    std::map<char, int> count;
    for(int i = 0; i < str.size(); i++){
        count[str[i]]++;
    }
    return count['Q'];
}

int main(){
    std::string instruction;
    std::cin >> instruction;

    int cntplus = cntDistinctplus(instruction);
    int cntH = cntDistinctH(instruction);
    int cntQ = cntDistinctQ(instruction);
    int cntnine = cntDistinctnine(instruction);
    int n = instruction.size();

    if(cntH > 0 || cntQ > 0 || cntnine > 0){
        std::cout << "YES" << std::endl;
        return 0;  
    }
    else if(cntplus == n){
        std::cout << "NO" << std::endl;
        return 0;
    }
    else if((cntplus < n) && (cntnine == 0) && (cntH == 0) && (cntQ == 0)){
        std::cout << "NO" << std::endl;
        return 0;
    }
    return 0;
}