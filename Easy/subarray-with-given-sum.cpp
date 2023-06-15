class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int arr[n+1]={0};
        for(int i=0;i<array.size();i++)
        {
            arr[array[i]]++;
        }
        for(int i=1;i<n+1;i++)
        {
            if(arr[i]==0)
                return i;
        }
        return -1;
    }
};