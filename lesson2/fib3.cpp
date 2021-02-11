#include <iostream>
long fibs[100000];
long Fib(long x){
    if (x <= 2){
        return 1;
        }
    if (fibs[x] == 0){
        fibs[x] = Fib(x-1) + Fib(x-2);
        }
    return fibs[x];
    }
int main(){
    long N;
    std::cin >> N;
    std::cout << Fib(N) << std::endl;
    return 0;
}
