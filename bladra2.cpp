#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float result;
    int v, a, t;
    std::cin >> v >> a >> t;
    result = v*t + 0.5*(a)*(t*t);
    std::cout << std::setprecision(9) << result << std::endl;
    return 0;
}