// bitmask dp problem

bool visited(int mask,int pos)
{
    if((mask & (1<<pos))== 0)
        return false;
    else
        return true;
}

int set_at(int mask, int pos)
{
    int ret = ( mask | (1<<pos) );
    return ret;
}


int min_cost(int mask)
{
    if( mask == ((1<<n)-1) ) return 0;

    if( dp[mask] != MAX ) return dp[mask];

    int mini = MAX;

    for(int i=0;i<n;i++) {
      if(visited(mask,i) == false){
        int cost = graph[i][i];

        for(int j=0;j<n;j++)
            if( (i!=j) && visited(mask,j))
                cost += graph[i][j];

        mini = min(mini,cost+min_cost( set_at(mask,i) ));

      }
    }

    dp[mask] = mini;
    return dp[mask];
}
