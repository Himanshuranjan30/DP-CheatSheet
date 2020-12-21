
vector<vector<int>> dp;
int result;
int knapsack(vector<int> wt,vector<int> profit,int W, int N)
{
	
    if(dp[W][N])
		return dp[W][N];
	if(W==0||N==0)
		result= 0;
	
	else if(wt[N]>W)
		result=knapsack(wt,profit,W,N-1);
	else
		result=max(knapsack(wt,profit,W,N-1),profit[N]+knapsack(wt,profit,W-wt[N],N-1));
	return result;

}
