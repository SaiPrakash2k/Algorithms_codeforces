#include<iostream>
#include <bits/stdc++.h>

    using namespace std;

int main()
{
    string str1;
    int test;
    int sz;
    long long counter;
    int i;
    cin>>test;
    while(test--)
    {
        counter=0;
        int sum = 0;
        map<int, int> mp;
        mp[0]=1;
        cin>>sz;
        cin>>str1;
        for(i=0;i<sz;i++)
        {
            int x=str1[i]-'0';
            x--;
            sum+=x;
            counter+=mp[sum];
            mp[sum]++;
        }
        cout<<counter<<endl;
    }
    
}