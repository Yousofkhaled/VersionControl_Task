#include <iostream>
#include <vector>

using namespace std;

int getSum (vector<int> &v) {
    
    int sum = 0;
    for (auto num : v) {
    	sum += num;
    }
    return sum;
}

int getMin (vector<int> &v) {
    
    int mn = v[0];
    for (auto num : v) {
        mn = min (mn, num);
    }
    
    return mn;
}

int main () {


    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "sum = " << getSum (v) << "\n";
    
    cout << "min = " << getMin (v) << "\n";

    return 0;
}
