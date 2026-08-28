// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits>
using namespace std;

struct Point {
    int x, y;
    Point(int X = 0, int Y = 0) : x(X), y(Y) {}
};

double euclidianFormula(const Point &p, const Point &q) {
    return sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
}

void closestPair(const vector<Point> &arr) {
    int n = (int)arr.size();
    if (n < 2) {
        cout << "Not enough points" << endl;
        return;
    }

    Point p1, p2;
    double distance = numeric_limits<double>::infinity();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double d = euclidianFormula(arr[i], arr[j]);
            if (d < distance) {
                distance = d;
                p1 = arr[i];
                p2 = arr[j];
            }
        }
    }

    cout << "Closest Pair are (" << p1.x << "," << p1.y << ") (" << p2.x << "," << p2.y << ")" << endl;
    cout << "distance = " << distance << endl;
}

int main() {
    vector<Point> p = {{1,2}, {3,4}, {6,8}, {5,2}};
    closestPair(p);
    return 0;
}