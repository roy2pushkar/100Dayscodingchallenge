class Solution {

    countOddEven(arr,n){
        //Your code here
        let odd=0;
        let even=0;
        for(let i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        console.log(odd,even)

    }
}
