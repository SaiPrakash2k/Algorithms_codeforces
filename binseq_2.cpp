#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int tot_n;
  cin>>tot_n;
  while(tot_n--)
    {
    int n_inputs;
    cin>> n_inputs;
    string s;
    cin>>s;
    vector <int> ans(n_inputs);
    vector <int > pos1,pos0;
    for (int i=0;i<n_inputs;i++)
    {
      int newpos= pos1.size() + pos0.size();
      if (s[i]=='0')
      {
        if(pos1.empty())
        {
          pos0.push_back(newpos);
        }
        else
        {
          newpos=pos1.back();
          pos1.pop_back();
          pos0.push_back(newpos);
        }
      }
      else
      {
        if(pos0.empty())
        {
          pos1.push_back(newpos);
        }
        else
        {
          newpos=pos0.back();
          pos0.pop_back();
          pos1.push_back(newpos);
        }
      }
      ans[i]=newpos;
    }
    cout<<pos1.size() + pos0.size()<<endl;
    for(auto it : ans)
      cout<<it+1<<" ";
    cout<<endl;
}

}
