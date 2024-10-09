#include <iostream>

int main()
{
    int a, b, c, d = 0;
    int arr[101];
    std::cin >> a;

    for (int i = 0; i < a; i++){
        std::cin >> b;
        arr[i] = b;
    }

    std::cin >> c;

    for (int i = 0; i < a; i++){
        if(arr[i] == c){
            d++;
        }
    }

    std::cout << d << std::endl;

    return 0;
}
