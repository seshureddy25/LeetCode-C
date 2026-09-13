int minCostClimbingStairs(int* cost, int costSize)
{
    int dp[costSize];
    int min = 0;
    dp[0] = cost[0];
    dp[1] = cost[1];
    for(int i = 2; i < costSize; i++)
    {
        if(dp[i-1] > dp[i-2])
            min = dp[i-2];
        else
            min = dp[i-1];
        dp[i] = min + cost[i];
    }

    if(dp[costSize-1] > dp[costSize-2])
        return dp[costSize-2];
    else
        return dp[costSize-1];
}