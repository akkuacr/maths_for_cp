
// https://cses.fi/problemset/task/1083/

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
   
   //brute for is using nested for loop
   
   
   //little optimal is using set
   
   unordered_set<int>st;
   
   for(int i=0;i<(n-1);i++)
   {
      int x;
      cin>>x;
      st.insert(x);
      arr.push_back(x);
   }
   
   
//   for(int i=1;i<=n;i++)
//   {
//       if(st.find(i)==st.end())
//       {
//           cout<<i;
//           break;
//       }
//   }
//   cout<<endl;
   
 
 
   //and most optimal is 
   int s=(n*(n+1))/2;
   
   for(int i=0;i<n;i++)
   {
       s-=arr[i];
   }
   
   cout<<s<<endl;

   

 
 
      return 0;
  }
