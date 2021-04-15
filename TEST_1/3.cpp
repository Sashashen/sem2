#include <iostream>


int main(){
    int N;
    int x;
    std::cin >> N;
    int* a = new int[N];
    for (int i = 0; i < N ;i ++){
        std ::cin >> x;
        a[i] = x;
    }
    int k = 1;
    int b = 0;
    int Min = 0;
    int Max = N;
    int S = 0;
    while(k != 0){
        if (b % 2 == 0){
            for (int i = Min; i < Max - 1; i++){
                if (a[i+1] < a[i]){
                    x = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = x;
                    S = S + 1;
                }
            }
            Max = Max - 1;
        }
        if (b % 2 == 1){
            for (int i = Max - 1; i > Min; i--){
                if (a[i - 1] > a[i]){
                    x = a[i];
                    a[i] = a[i - 1];
                    a[i - 1] = x;
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
    }
    std::cout << a[N/2];
    return 0;
}
