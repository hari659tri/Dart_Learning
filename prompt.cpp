#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 vector<double> normalizeData(const std::v ector<double>& data) {
    if (data.empty()) {
        return {};
    }

    double minValue = *min_element(data.begin(), data.end());
    double maxValue = *max_element(data.begin(), data.end());
    std::vector<double> normalizedData;
    for (double x : data) {
        normalizedData.push_back((x - minValue) / (maxValue - minValue));
    }

    return normalizedData;
}

// Sample data that may cause an issue
int main() {
    vector<double> data = {5, 5, 5, 5};
    vector<double> normalized = normalizeData(data);
    
    for (double value : normalized) {
         cout << value << " ";
    }
    return 0;
}
