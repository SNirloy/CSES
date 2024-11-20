#include <iostream>
#include <string>


int main(){
    std::string line;
    std::getline(std::cin, line);
    long long  num = std::stoi(line);
    std::cout << "0" << std::endl;
    for (long long i = 2; i <= num; i++){
        long long choose = (i*i) * (i * i - 1)/ 2;
        long long removal = 2 * 2 * (i-1) * (i-2);
        std::cout << (choose - removal) << std::endl;
    }
}