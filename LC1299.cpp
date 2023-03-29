vector<int> replaceElements(vector<int>& arr) {
        int i=0,j=0,maxim=-1;

        for(i=arr.size()-1;i>=0;i--)
        {
            int temp = arr[i];
            arr[i] = maxim;
            maxim = max(maxim,temp);
           
        }
        return arr;    