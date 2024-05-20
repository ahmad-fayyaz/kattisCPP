#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string *array = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int j = 0; j < n; j++) {
        cout << "Takk " << array[j] << endl;
    }
}