#include <iostream>
#include <string>
#include <sstream>

int main(){
    std::string line1;
    std::getline(std::cin, line1);

    int num = stoi(line1);

    for (int i = 0; i < num; i++){
        std::string line;
        std::getline(std::cin, line);

        long long row;
        long long col;

        std::string sub_num;
        std::stringstream s(line);
        std::getline(s, sub_num, ' ');
        row = std::stoi(sub_num);
        std::getline(s, sub_num);
        col = std::stoi(sub_num);

        if (row > col){
            // row is the square layer we want to observe
            if (row %2 == 0){
                long long square = row * row;
                square -= (col - 1);
                std::cout << square << std::endl;
            }
            else{
                std::cout << ((row - 1) * (row - 1) + col) << std::endl;
            }
        }
        else{
            if (col % 2 == 1){
                long long square = col * col;
                square -= (row - 1);
                std::cout << square << std::endl;
            }
            else{
                std::cout << ((col - 1) * (col-1) + row) << std::endl;
            }
        }
    }
    
}