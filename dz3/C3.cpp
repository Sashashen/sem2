#include <iostream>
int print_array(int* p){
    for (int i = 0; i < 5; i++){
        std::cout << p[i];
        std::cout << ' ';
    }
    std::cout << p[5] << std::endl;
}
int main() {
    int a[6];
    for (int i = 0; i < 6; i++){
        std::cin >> a[i];
    }
    print_array(a);
    return 0;
}
