#include <iostream>
#include <string>
#include <sstream>

int main(){
    std::string line1;
    std::string line2;
    std::getline(std::cin, line1);
    std::getline(std::cin, line2);

    int count = std::stoi(line1);
    int arr [count];
    
    std::stringstream s(line2);
    std::string str_num;
    long long num;
    long long changes = 0;

    for (int i = 0; i < count; i++){
        std::getline(s, str_num, ' ');
        num = std::stoi(str_num);
        if (i > 0){
            if (arr[i-1] <= num){
                arr[i] = num;
            }
            else{
                changes += (arr[i-1] - num);
                arr[i] = arr[i-1];
            }
        }
        else{
            arr[i] = num;
        }
    }
    std::cout << changes << std::endl;

}