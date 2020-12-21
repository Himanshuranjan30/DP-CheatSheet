
vector<vector<int>> dp;
int result;
int knapsack(vector<int> wt,vector<int> profit,int W,int N)
{
	
  for(int i=0;i<N;i++)
  {
  	for(int j=0;j<W;j++)
  	{
  		if(i==0||j==0)
  			dp[i][j]=0;
  		else if(wt[i-1]>j)
  			dp[i][j]=dp[i-1][j];
  		else
  			dp[i][j]=max(dp[i-1][j],profit[i-1]+dp[i-1][W-wt[i-1]]);
  	}
  }
  return dp[N][W];

}
