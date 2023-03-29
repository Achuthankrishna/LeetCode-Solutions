#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> height {1,8,6,2,5,4,8,3,7};
    long int area=0;
    int h=height.size()-1;
    int l=0;
    long int high,low,dist=0;
    cout<<height[h]<<" "<<height[l]<<endl;

    while(h>l)
    {
        dist=int(h-l);
        low=min(height[h],height[l]);
        area=max(area,dist*low);
        if(height[l]<height[h])
            l++;
        else
            h--;
    }
    cout<<dist<<" "<<low<<" "<<area;
    return 0;
}