#include <iostream>
#include <string>

int main(){
    std::string line;
    std::getline(std::cin, line);
    long long num = std::stoi(line);
    long long total =num * (num + 1) / 2;
    if (total %2 == 1){
        std::cout << "NO" << std::endl;
    }
    else{
        long long half = total / 2;
        bool arr [num];
        for (int i = 0; i < num; i++){
            arr[i] = false;
        }
        long long sum = 0;
        int count = 0;
        for (int i = num; i > 0; i--){
            if (sum + i <= half){
                arr[i-1] = true;
                sum += i;
                count += 1;
            }
        }
        if (sum == half){
            std::cout << "YES" << std::endl;
            std::cout << count << std::endl;
            for (int i = 0; i < num; i++){
                if (arr[i]){
                    std::cout << i+1 << " ";
                }
            }
            std::cout << std::endl;
            std::cout << (num - count) << std::endl;
            for (int i = 0; i < num; i++){
                if ( ! arr[i]){
                    std::cout << i+1 << " ";
                }
            }
            std::cout << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
    }
}