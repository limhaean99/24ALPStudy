#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int num = a*b*c;

    string s = to_string(num);   

    int arr[10] = {};
    for(int i = 0; i < s.length(); i++){
        arr[s[i] - '0']++;
    }

    for(int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }
    
    return 0;
}