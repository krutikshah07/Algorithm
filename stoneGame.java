class Solution {
   public boolean stoneGame(int[] piles) {
        int[] dp = Arrays.copyOf(piles,piles.length);
        for(int dist=1;dist<piles.length;dist++)
        {
            for(int i=0;i<piles.length - dist;i++)
            {
                dp[i]=Math.max(piles[i]-dp[i+1],piles[i+dist] - dp[i]);
            }
        }

       

        if(dp[0] > 0)
            {
                return true;
            }
        else
            {
                return false;
            }

    }
}
