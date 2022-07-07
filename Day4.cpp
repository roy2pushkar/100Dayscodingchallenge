class Solution {
    // Function to find equilibrium point in the array.
    equilibriumPoint(a, n)
    {
        //your code here
        if(n===1) {
            return 1
        }
        var i=1,left=0,right=0,sum=0;
        for(var j=0;j<n;j++) {
            sum += a[j]
        }

        while(i < n) {
            left += a[i-1];
            right = sum-(a[i]+left);
            if(left === right) {
                return i+1;
            }else{
                ++i;
            }
        }
        return -1;
