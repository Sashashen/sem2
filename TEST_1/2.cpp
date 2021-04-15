#include <iostream>
#include <iomanip>


int main(){
    int N;
    std::cin >> N;
    double S;
    double A;
    for (int i = 0; i < N; i++){
        std::cin >> A;
        S = S + A;
    }
    S = S / N;
    std::cout << std::fixed << std::setprecision(10);
    std::cout << S << std::endl;
    return 0;
}
