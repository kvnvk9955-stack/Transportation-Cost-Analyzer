#include <iostream>
#include <vector>
using namespace std;

const int INF = 1000000000;

void floydWarshall(vector<vector<int>> &dist) {
    int n = dist.size();
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dist[i][k] < INF && dist[k][j] < INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}

int main() {
    int n;
    cout << "Enter number of locations: ";
    cin >> n;

    vector<vector<int>> cost(n, vector<int>(n));

    cout << "\nEnter cost matrix (Only positive values allowed).\n";
    cout << "Enter " << INF << " for NO direct route.\n";

    // INPUT MATRIX
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x < 0) {
                cout << "Invalid input! Cost cannot be negative.\n";
                return 0;
            }
            cost[i][j] = x;
        }
    }

    // Run Floyd–Warshall
    floydWarshall(cost);

    int choice;
    cout << "\nHow do you want to display output?\n";
    cout << "1. As cost matrix\n";
    cout << "2. As readable Location -> Location\n";
    cout << "Enter choice: ";
    cin >> choice;

    /*------------------------------------
            CHOICE 1 → MATRIX FORM
    -------------------------------------*/
    if (choice == 1) {
        cout << "\n===== CHEAPEST COST MATRIX =====\n\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (cost[i][j] >= INF) cout << "INF ";
                else cout << cost[i][j] << " ";
            }
            cout << endl;
        }
    }

    /*------------------------------------
       CHOICE 2 → Location 1 → Location 2
    -------------------------------------*/
    else if (choice == 2) {
        cout << "\n===== SHORTEST TRAVEL COSTS =====\n\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                int from = i + 1;
                int to   = j + 1;

                if (cost[i][j] >= INF)
                    cout << "Location " << from << " -> Location " << to << " : No route available\n";
                else
                    cout << "Location " << from << " -> Location " << to << " : cost = " << cost[i][j] << "\n";
            }
        }
    }

    else {
        cout << "Invalid choice!";
    }

    return 0;
}