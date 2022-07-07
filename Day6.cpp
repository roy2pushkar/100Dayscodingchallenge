

int birthdayCakeCandles(vector<int> candles) {
    int i;
    int max=candles[i];
    int count=0;
    for ( i=0; i<candles.size(); i++)
    {
        if(candles[i]>max)
        {
            max=candles[i];
        }
    }
    for (i=0; i<candles.size(); i++)
    {
        if(candles[i]==max)
        {
            count++;
        }
    }
    return count;


}
