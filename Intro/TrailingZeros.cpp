#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>

int main(){
    long long num;
    std::string line;
    std::getline(std::cin, line);
    num = stoi(line);

    long long zeros = 0;
    for (int i = 5; i <= num; i+= 5){
        int num = 2 * i;
        // each trailing zero for i is a trailing number for the product
        while ((num / 10) != 0 && num % 10 == 0){
            num /= 10;
            zeros += 1;
        }
    }

    std::cout << zeros << std::endl;
}