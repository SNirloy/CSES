#include <iostream>
#include <string>

/*
Notes:
    - There are n! possibilities. 
        - 1,000,000! is definitely NOT acceptable
            - Even the act of checking all possibilities is too much n * n!
*/



int main(){
    int num;
    std::string line1;
    std::getline(std::cin, line1);
    num = std::stoi(line1);

    if (num == 1){
        std::cout << 1 << std::endl;
    }
    else if (num == 2 || num == 3){
        std::cout << "NO SOLUTION" << std::endl;
    }
    else if (num == 4){
        std::cout << "2 4 1 3" << std::endl;
    }
    else{
        for (int i = 1; i <= num; i+=2){
            std::cout << i << " ";
        }
        for (int i = 2; i <= num; i += 2 ){
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}