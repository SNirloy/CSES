#include <iostream>
#include <string>

int main(){
    long long exp;
    std::string line;
    std::getline(std::cin, line);
    exp = std::stoi(line);

    long long modder = 1;
    for (int i = 0; i < 9; i++){
        modder *= 10;
    }
    modder += 7;

    long long num = 1;
    for (long long i =  0; i < exp; i++){
        num = (num * 2) % modder;
    }
    std::cout << num << std::endl;
}