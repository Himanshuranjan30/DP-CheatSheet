int countsubsetsum(vector<int> &nums)
{
	
	int sum;
	int dp[n+1][sum+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
		{
			
			if(nums[i-1]>j)
				dp[i][j]=dp[i-1][j];
			
			else if(nums[i-1]<=j)
				dp[i][j]=dp[i-1][j]||dp[i-1][j-nums[i-1]];
		}
		return dp[n][sum];
	}
}
