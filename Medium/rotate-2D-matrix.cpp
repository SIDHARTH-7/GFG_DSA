class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
                swap(arr[i][j], arr[j][i]);
        }
        for(int i = 0; i < n/2; i++)
            swap(arr[i], arr[n - i - 1]);
    }

};