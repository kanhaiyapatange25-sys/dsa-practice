 #include <bits/stdc++.h>
using namespace std;

void pattern13(int n)
{ int c = 1;
   for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {
       cout << c++ <<" " ;
    }



    cout <<"\n";
    }

}
int main()
{
    int n;
    cout << "enter the number"<<"\n";
    cin >> n;
    pattern13(n);
    return 0;
}