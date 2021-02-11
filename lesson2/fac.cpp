#include <iostream>


int main(){
    long N;
    long fact = 1;
    std::cin >> N;
    for (long i = 1; i < N + 1;i++){
        fact = fact*i;
    }
    std::cout << fact << std::endl;
    return 0;
}
