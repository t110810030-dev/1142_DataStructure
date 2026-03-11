#include <iostream>
#include <vector>
using namespace std;

int findMax(const vector<int>& arr) {
int stepCount = 0;
int max = arr[0];
stepCount++;//讀取arr[0] 
stepCount++;//結果存入max 
stepCount++;//迴圈初始化 
for (int i = 1; i < arr.size(); i++) {
stepCount++;//比較 
stepCount++;//遞增 
if (arr[i] > max) {
stepCount++;//讀取arr[i] 
stepCount++;//比較 
max = arr[i];
stepCount++;//讀取arr[i] 
stepCount++;//結果存入max 
}
}
stepCount++; //迴圈結束 
stepCount++; //程式結束 
cout << "Step count: " << stepCount << endl;
return max;
}
// Total operations:
// 3 (initial) + 5 * n (loop operations) + 1 (loop exit) + 1 (return)
// = 4 + 5n operations
// Therefore, O(n) complexity
