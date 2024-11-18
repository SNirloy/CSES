#include <iostream>
#include <string>

int main(){
    long long num;
    std::string help;
    std::getline(std::cin, help);
    num = std::stoi(help);
    while (num != 1){
        std::cout << num << " ";
        if (num % 2 == 0){
            num /= 2;
        }
        else{
            num = 3 * num + 1;
        }
    }
    std::cout << num << std::endl;
}