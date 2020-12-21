int knapsack(vector<int> wt,vector<int> profit,int W, int N)
{
	if(W==0||N==0)
		return 0;
	else if(wt[N]>W)
		return knapsack(wt,profit,W,N-1);
	else
		return max(knapsack(wt,profit,W,N-1),profit[N]+knapsack(wt,profit,W-wt[N],N-1));S
}
