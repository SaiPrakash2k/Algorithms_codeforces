#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int number_of_times;
  cin>>number_of_times;
  while(number_of_times--)
  {
    string s(200,'a');

    int n_inputs;
    cin>>n_inputs;
    cout<<s<<endl;
    while(n_inputs--)
    {
      int cs_size;
      cin>>cs_size;
      int i;

      for(i=0;i<cs_size;i++)
        continue;
      if(s[i]=='a')
        s[i]='x';
      else
        s[i]='a';
      cout<<s<<endl;
    }
  }
}
