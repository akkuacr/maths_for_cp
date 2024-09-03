
https://atcoder.jp/contests/agc010/tasks/agc010_a

#include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;


   
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif

   int n;
   cin>>n;
   vector<int>arr;
   int c=0;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       if(x&1)
       {
           c++;
       }

   }
   
   
   if(c&1)
   {
       cout<<"NO"<<endl;
   }else
   {
       cout<<"YES"<<endl;
   }
   
   
   
   
   
   

   

 
 
      return 0;
  }
