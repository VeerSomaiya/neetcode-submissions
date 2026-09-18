class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int minh=INT_MIN;
        int ans=0;

       

    while(i<j)
    {
      if(min(height[i],height[j])==height[i])
      {
        minh=max(minh,height[i]);
        i++;
        if(minh-height[i]>=0)
        ans+=minh-height[i];
      }
else{
     
        minh=max(minh,height[j]);
        j--;
        if(minh-height[j]>=0)
        ans+=minh-height[j];
      
}



    }

    return ans;
    }
};
