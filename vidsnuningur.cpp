#include <iostream>
#include <string>
using namespace std;


int main() {
    string input;
    cin >> input;

    string reversed = "";
    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }

    cout << reversed << endl;
    return 0;
}