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

float getAverage (vector<int>& v) {
    float sum = 0;
    for (auto num : v) {
        sum += num;
    }
    return sum / (float)v.size();
}

int main () {


    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "sum = " << getSum (v) << "\n";
    
    cout << "average = " << getAverage (v) << "\n";

    return 0;
}
