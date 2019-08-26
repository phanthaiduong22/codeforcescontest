    #include <iostream>
    #include <algorithm>
    #include <vector>
    #include <string>

    using namespace std;
    int main()
    {
        int n,alice,x,sum=0,sum1=0;
        vector<int>ans;
        cin>>n;
        cin>>alice;
        sum=alice;
        sum1=alice;
        for(int i=1;i<n;i++)
        {
            cin>>x;
            if(x<=alice/2)
            {
                ans.push_back(i);
                sum+=x;
            }
            sum1+=x;
        }
        if(sum<=sum1/2)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1+ans.size()<<endl;
            cout<<1<<" ";
            for(int i=0;i<ans.size();i++)
                cout<<ans[i]+1<<" ";
        }
        
    }