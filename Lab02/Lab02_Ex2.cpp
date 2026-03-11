void printPairs(const vector<int>& arr) {
int stepCount = 0;
stepCount++;//迴圈初始化 
for (int i = 0; i < arr.size(); i++) {
stepCount++;//比較 
stepCount++;//遞增 
for (int j = i + 1; j < arr.size(); j++) {
stepCount++;//加 1 
stepCount++;//結果存入j
stepCount++;//比較 
stepCount++;//遞增 
cout << arr[i] << "," << arr[j] << endl;
}
stepCount++; //迴圈結束 
}
stepCount++; //迴圈結束 
cout << "Step count: " << stepCount << endl;
}
