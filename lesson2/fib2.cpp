#include <iostream>
long Fib(long x){
    if (x > 2){
        return Fib(x-1) + Fib(x-2);
        }
    if (x <= 2){
        return 1;
        }
    }
int main(){
    long N;
    std::cin >> N;
    std::cout << Fib(N) << std::endl;
    return 0;
}
