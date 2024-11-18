#include <iostream>
#include <string>
#include <sstream>

int main(){
//Reading in the number
    std::string line1;
    std::string line2;
    std::getline(std::cin, line1);
    std::getline(std::cin, line2);

    int count = std::stoi(line1);
    bool found[count + 1];
    for (int i = 0; i <= count; i++){
        found[i] = false;
    }
    std::stringstream s (line2);
    std::string num;
    int index;
    while(getline(s, num, ' ')){
        index = std::stoi(num);
        found[index] =true;
    }
    for (int i = 1; i <= count; i++){
        if (found[i] == false){
            std::cout << i << std::endl;
        }
    }

}