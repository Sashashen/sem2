#include <iostream>


int main(){
    long N;
    long M;
    long** matrix;
    long o;
    long p;

    std::cin >> N;
    std::cin >> M;
    matrix = new long * [N + 2];
    for (long i = 0; i < N + 2; i++){
        matrix[i] = new long [M + 2];
    }
    for (long i = 0; i < N + 2; i++){
        for (long y = 0; y < M + 2; y++){
            matrix[i][y] = 0;
        }
    }
    long K;
    std::cin >> K;

    for (long i = 0; i < K; i++){
        std::cin >> o;
        std::cin >> p;
        matrix[o][p] = -1;
    }
    long mins;
    for (long i = 1; i < N + 1; i++){
        for (long y = 1; y < M + 1; y++){
            if (matrix[i][y] == 0){
                        mins = matrix[i - 1][y - 1] + matrix[i - 1][y] + matrix[i - 1][y + 1] + matrix[i][y - 1] +
                        + matrix[i][y + 1] + matrix[i + 1][y - 1] + matrix[i + 1][y] + matrix[i + 1][y + 1];
                        mins = -mins;
            }
            if (matrix[i][y] == -1){
                mins = -1;
            }
            if (y < M){
                std::cout << mins;
                std::cout << ' ';
            }
            if (y == M ){
                std::cout << mins << std::endl;
            }
            mins = 0;
        }
    }
    delete [] matrix;
    return 0;
}
