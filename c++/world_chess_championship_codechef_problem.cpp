#include <iostream>
#include <string>
using namespace std;

int calculatePoints(const string& results, char player) {
    int points = 0;
    for (char result : results) {
        if (result == player) {
            points += 2; // Win
        } else if (result == 'D') {
            points += 1; // Draw
        }
    }
    return points;
}

int calculatePrizeMoney(int carlsenPoints, int chefPoints, int X) {
    int totalPrizeMoney = 100 * X;
    if (carlsenPoints > chefPoints) { // Carlsen 
        return 60 * totalPrizeMoney / 100;
    } else if (carlsenPoints < chefPoints) { // Chef 
        return 40 * totalPrizeMoney / 100;
    } else { // Draw
        return 55 * totalPrizeMoney / 100;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;
        
        string results;
        cin >> results;

        int carlsenPoints = calculatePoints(results, 'C');
        int chefPoints = calculatePoints(results, 'N');
        int carlsenMoney = calculatePrizeMoney(carlsenPoints, chefPoints, X);

        cout << "Carlsen: " << carlsenMoney << endl;
    }

    return 0;
}
