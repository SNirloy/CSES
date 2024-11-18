#include <iostream>
#include <string>

int main(){
    std::string line1;
    std::getline(std::cin, line1);

    long long num = stoi(line1);

    int sq_less;
    int sq_more;

    for (int i = 0; i < num; i++){
        if ((i * i) >= num){
            sq_more = i;
            sq_less = i-1;
        }
    }
    
}