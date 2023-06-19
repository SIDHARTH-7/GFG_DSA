int max(int arr[],int l,int r)
{
    int max=arr[l];
    for(int i=l+1;i<=r;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
int kthSmallest(int arr[], int l, int r, int k)
    {
        
        int a=max(arr,l,r);
        int hash[a];
        for(int i=0;i<a;i++)
        {
            hash[i]=-1;
        }
        for(int i=l;i<=r;i++)
        {
            hash[arr[i]-1]++;
        }
        for(int i=0;i<a;i++)
        {
            if(hash[i]!=-1)
                k--;
            if(k==0)
                return i+1;
        }
    }