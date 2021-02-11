#include <iostream>

long Fact(long x){
    long fact;
    if (x == 1){
        fact = 1;

    }
    if (x > 1){
        fact = Fact(x - 1) * x;
    }
    return fact;
}
int main(){
    long N;
    std::cin >> N;
    std::cout << Fact(N) << std::endl;
    return 0;
}
