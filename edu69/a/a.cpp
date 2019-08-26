        #include <iostream>
        #include <algorithm>
        #include <vector>
        #include <string>

        using namespace std;
        int main()
        {
            freopen("input.inp","r",stdin);
            freopen("output.out","w",stdout);
            long long T;
            cin>>T;
            while(T>0)
            {
                long long n,x,ans=0,max,max1;
                vector<long long>a;
                T--;
                cin>>n;
                for(long long i=0;i<n;i++)
                {
                    cin>>x;
                    a.push_back(x);
                }
                sort(a.begin(),a.end());
                max=a[n-1],max1=a[n-2];
                for(long long i=0;i<n-2;i++)
                {
                    if(ans<max1-1)
                    {
                        if(a[i]>=1)
                        {
                            ans++;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
                cout<<ans<<endl;
            }
        }