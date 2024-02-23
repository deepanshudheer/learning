#include <iostream>
#include <vector>

int countWays(int n, std::vector<int>& steps) {
    if (n == 0) {
        for (int step : steps) {
            std::cout << step << " ";
        }
        std::cout << std::endl;
        return 1;
    }
    
    int ways = 0;
    for (int i = 1; i <= 3 && i <= n; ++i) { // We can take 1, 2, or 3 steps at a time
        steps.push_back(i);
        ways += countWays(n - i, steps);
        steps.pop_back();
    }
    
    return ways;
}

int main() {
    int n;
    std::cout << "Enter the number of steps in the staircase: ";
    std::cin >> n;
    
    std::vector<int> steps;
    int ways = countWays(n, steps);
    std::cout << "Number of ways to reach the top of the staircase with " << n << " steps: " << ways << std::endl;
    
    return 0;
}
