#include <iostream>
int main(){
    int N;
    std::cin >> N;
    int *M = new int[N]();
    float K = 0;
    for (int i = 0; i < N;i++){
        std::cin >> M[i];
        K = K + M[i];
    }
    K = K/N;
    int Z = 0;
    for (int i = 1; i < N + 1;i++){
        if (M[i] > K){
            Z = Z + M[i];
        }
    }
    std::cout << Z << std::endl;
    delete[] M;
    return 0;
}
