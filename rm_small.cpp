#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main()
{
  int n_inputs;
  cin >>n_inputs;
  while(n_inputs--)
  {
    int n;

		cin >> n;
		set <int> s1;
    set <int>:: iterator itr1;
    set <int>:: iterator itr2;
    for (int i=0;i<n;i++)
    {
      int k;
      cin>>k;
      s1.insert(k);
    }
    int f=1;
    for(itr1=s1.begin();itr2!=s1.end();itr1++)
    {
      itr2 = next(itr1,1);
      if(*itr2 - *itr1<=1)
      {
        continue;
      }
      else
      {
        f=0;
        cout<<"NO"<<endl;
        break;
      }
    }
    if(f==1)
      cout<<"YES"<<endl;
  }
}
