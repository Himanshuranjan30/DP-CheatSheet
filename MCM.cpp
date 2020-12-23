int MCM(int arr[],int l,int r,int n)
{
	if(l<0||l>=n||r<0||r>=n)
		return -1;
	int ans=INT_MAX;
	for(int i=l;i<r;i++)
	{
		int left=MCM(arr,l,i,n);
		int right=MCM(arr,i+1,r,n);
		ans=min(left,right);
	}
	return ans;
}
