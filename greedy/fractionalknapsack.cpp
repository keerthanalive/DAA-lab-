#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int profit;
    double ratio;
};

int main() {
    int n, capacity;
    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    vector<Item> items(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter profit and weight of item " << i + 1 << ": ";
        cin >> items[i].profit >> items[i].weight;
        items[i].ratio = (double)items[i].profit / items[i].weight;
    }

    sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
        return a.ratio > b.ratio;
    });

    double totalProfit = 0.0;
    int remainingCapacity = capacity;

    cout << "\nSelected items:\n";
    for (const auto& item : items) {
        if (remainingCapacity <= 0) break;
        if (item.weight <= remainingCapacity) {
            remainingCapacity -= item.weight;
            totalProfit += item.profit;
            cout << "Take full item with profit " << item.profit << " and weight " << item.weight << "\n";
        } else {
            double fraction = (double)remainingCapacity / item.weight;
            totalProfit += item.profit * fraction;
            cout << "Take " << fraction * 100 << "% of item with profit " << item.profit << " and weight " << item.weight << "\n";
            remainingCapacity = 0;
        }
    }

    cout << "\nMaximum profit: " << totalProfit << "\n";
    return 0;
}
