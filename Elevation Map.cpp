#include <iostream>
#include <vector>
using namespace std;

int trapWater(vector<int>& A) {
    int left = 0, right = A.size() - 1;
    int leftMax = 0, rightMax = 0;
    int trappedWater = 0;
    
    while (left <= right) {
        if (A[left] <= A[right]) {
            if (A[left] >= leftMax) {
                leftMax = A[left];
            } else {
                trappedWater += leftMax - A[left];
            }
            left++;
        } else {
            if (A[right] >= rightMax) {
                rightMax = A[right];
            } else {
                trappedWater += rightMax - A[right];
            }
            right--;
        }
    }
    
    return trappedWater;
}

int main() {
    
    vector<int> A;
    A.push_back(0);
    A.push_back(1);
    A.push_back(0);
    A.push_back(2);
    A.push_back(1);
    A.push_back(0);
    A.push_back(1);
    A.push_back(3);
    A.push_back(2);
    A.push_back(1);
    A.push_back(2);
    A.push_back(1);

    int result = trapWater(A);
    cout << "Total trapped water: " << result << endl;
    
    return 0;
}

