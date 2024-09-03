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
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
   
     int s=0;
     for(int i=1;i<n;i++)
     {  if(arr[i]<arr[i-1]){
         s+=(arr[i-1]-arr[i]);
         arr[i]=arr[i-1];
        }
     }
     
     cout<<s<<endl;
   

 
 
      return 0;
  }
