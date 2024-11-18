#include <iostream>
#include <string>

long double choose(int n, int k){
    long double value = 1.0;
    for (int i = 0; i < k; i++){
        value *= (n - i);
    }
    for (int i = 1; i <= k; i++){
        value /= i;
    }
    return value;
}

int main(){
    for (int i = 1; i <= 8; i++){
        std::string line;
        std::getline(std::cin, line);
        long long num = stoi(line);
        long double total = choose(i * i, 2);
        long long diff = total - num;
        std::cout << "Size: " << i << "\tTotal: " << total << "\tGood: " << num << "\tBad: " << diff << std::endl;
    }
}