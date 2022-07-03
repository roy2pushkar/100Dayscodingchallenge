vector<int> ans;
       sort(arr, arr+n);
       int x = -1;

       for(int i = 0; i<n; i++){
           if(arr[i] == arr[i+1] && x!=arr[i]){
               ans.push_back(arr[i]);
               x=arr[i];
           }
       }
       if(ans.size()>0)
       return ans;

       else {
           ans.push_back(-1);
           return ans;
       }
