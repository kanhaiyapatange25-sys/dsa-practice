#include <bits/stdc++.h>
using namespace std;
void pattern5(int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i;j>=0;j--)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}
    int main()
    {
        int n;
  cout <<"enter the number"<<endl;
  cin >>n;
  pattern5(n);
  return 0;
}

