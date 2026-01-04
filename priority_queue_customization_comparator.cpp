#include <iostream>
#include <queue>
#define PII pair<int, int>
using namespace std;

// Based on first part in ascending and 
// second part in descending first basis
class Compare {
public:
    bool operator()(PII a, PII b)
    {
        if (a.first > b.first) {
            return true;
        }
        else if (a.first == b.first
                 && a.second < b.second) {
            return true;
        }

        return false;
    }
};

int main() {
    priority_queue<PII, vector<PII>, Compare> ds;
    ds.push({ 100, 11 });
    ds.push({ 100, 41 });
    ds.push({ 100, 21 });
    ds.push({ 300, 1 });
    ds.push({ 300, 2 });
    ds.push({ 1, 1 });
    ds.push({ 1, 2 });
    ds.push({ 1, 20 });

    cout << "The priority queue is : \n";
    while (!ds.empty()) {
        cout << ds.top().first << " " 
             << ds.top().second << "\n";
             
        // heapify happens
        ds.pop(); 
    }

    return 0;
}
