int countElement(const vector<int>& arr, int target) {
int stepCount = 0;
int count = 0;
stepCount++;//count初始化 
stepCount++;//迴圈初始化 
for (int i = 0; i < arr.size(); i++) {
stepCount++;//比較 
stepCount++;//遞增 
if (arr[i] == target) {
stepCount++;//讀取arr[i]
stepCount++;//結果存入arr[i]
count++;
stepCount++;//count+1 
}
}
stepCount++; //迴圈結束 
stepCount++; //程式結束 
return count;
}
