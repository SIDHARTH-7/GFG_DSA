class Solution{
  public:
  long long int wineSelling(vector<int>& Arr, int N){
      long long ans=Arr[0]; 
      long long ans1=abs(Arr[0]); 
      for(int i=1;i<N;i++)
      {
          ans+=Arr[i];
          ans1+=abs(ans);
      }
      return ans1;
  }
};