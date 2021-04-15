#include <iostream>


int main(){
    int N;
    int x;
    std::cin >> N;
    int** a = new int*[N];
    for (int i = 0; i < N ;i ++){
        std ::cin >> x;
        a[i] = new int[2];
        a[i][0] = i + 1;
        a[i][1] = x;
    }
    int k = 1;
    int b = 0;
    int Min = 0;
    int Max = N;
    int S = 0;
    while(k != 0){
        if (b % 2 == 0){
            for (int i = Min; i < Max - 1; i++){
                if (a[i+1][1] < a[i][1]){
                    x = a[i][1];
                    a[i][1] = a[i + 1][1];
                    a[i + 1][1] = x;
                    S = S + 1;
                }
            }
            Max = Max - 1;
        }
        if (b % 2 == 1){
            for (int i = Max - 1; i > Min; i--){
                if (a[i - 1][1] > a[i][1]){
                    x = a[i][1];
                    a[i][1] = a[i - 1][1];
                    a[i - 1][1] = x;
                    S = S + 1;
                }
            }
            Min = Min + 1;
        }
        b = b + 1;
        if (S == 0){
            k = 0;
        }
        else{
            S = 0;
        }
        int** b = new int*[N/2 + 1]
        for (int i = 0; i < N/2 + 1; i++){

        }
    }
