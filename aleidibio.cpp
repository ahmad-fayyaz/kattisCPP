#include <iostream>


int main(int a, int b, int c) {
    int t1, t2, m;
    std::cin >> t1 >> t2 >> m;
    int total_driving_time = t1 + t2;
    int latest_start_time = m - total_driving_time;
    std::cout << latest_start_time << std::endl;
}