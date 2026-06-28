#include <bits/stdc++.h>
using namespace std;
// Note: works for n < 10 only
void pattern12(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
         cout<<""<<j+1;
        } 
       for(int j=0;j<2*n-2*i-2;j++)
       {
        cout << " ";
       }
       for(int j=i+1;j>0;j--)
       {
        cout <<j;
       }



    cout <<"\n";
    }

}
int main()
{
    int n;
    cout << "enter the number"<<"\n";
    cin >> n;
    pattern12(n);
    return 0;
}