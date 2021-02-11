#include <iostream>


int main(){
    long N;
    std::cin >> N;
    long X = 1;
    if (N > 2){
        long oneX = 1;
        long twoX = 1;
        for (long i = 2; i < N;i++){
            X = oneX + twoX;
            oneX = twoX;
            twoX = X;
            }
        }
    std::cout << X << std::endl;
    return 0;
    }
