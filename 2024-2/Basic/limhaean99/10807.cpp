#include <iostream>

int main()
{
    int a, c, d = 0;
    int arr[100];
    std::cin >> a;

    for (int i = 0; i < a; i++){
        std::cin >> arr[i];
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
