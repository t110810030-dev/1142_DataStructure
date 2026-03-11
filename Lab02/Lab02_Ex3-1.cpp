void copyArray(const vector<int>& source, vector<int>& dest) {
int stepCount = 0;
stepCount++;//迴圈初始化 
for (int i = 0; i < source.size(); i++) {
stepCount++;//比較 
stepCount++;//遞增 
dest[i] = source[i];
stepCount++;//讀取source[i]
stepCount++;//結果存入dest[i]
}
stepCount++; //迴圈結束 
cout << "Step count: " << stepCount << endl;
}
