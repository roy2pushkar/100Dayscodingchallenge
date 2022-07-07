class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int max=arr[0];
       int index=0;
       int i=0;
       while( i<n){
           if(arr[i]>max) {
               max = arr[i];
               index = i;
           }
           i++;
       }
       return index;
    }
};
