#include <bits/stdc++.h>
#include <iostream>

using namespace std;

set <int> vectortoset(vector<int> v)
{
  set<int> s(v.begin(), v.end());
  return s;
}


int main()
{
  int n;
  cin >> n;
  vector<int> v1;
  for(int i=0;i<n;i++)
  {
    int k;
    cin>>k;
    v1.push_back(k);
  }
  set<int> s=vectortoset(v1);
  int tot_pairs;
  int val;
  char ch;
  int n_events;
  cin>>n_events;
  while(n_events--)
  {
    tot_pairs=0;
    cin>>ch;
    cin>>val;
    if(ch=='+')
    {
      v1.push_back(val);
    }
    else
    {
      auto it = std::find(v1.begin(),v1.end(),val);
        v1.erase(it);
    }
      s.insert(val);
    for(auto it:s)
    {
      tot_pairs+=count(v1.begin(),v1.end(),it)/2;
    }
    if(tot_pairs>=4)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
}
