#include <iostream>
#include <string>

int main(){
    std::string line;
    std::getline(std::cin, line);

    int max = 1;
    int count = 1;
    char letter = ' ';
    for (int i = 0; i < line.length(); i++){
        //std::cout << "\t" << letter << " to " << line[i] << std::endl;
        if (letter == line[i]){
            count += 1;
        }
        else{
            count = 1;
        }
        if (count > max){
            max = count;
        }
        letter = line[i];
    }
    std::cout << max << std::endl;
}