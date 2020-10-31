#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a,b,n,c,s=0;
  cin>>n;
  for (int i=1; i<n ; i++)
  {
      if (n%i==0) s=s+i;
  }

 if (s==n) 
  {
  for (int i=1; i<s ; i++)
  {
      if (s%i==0) cout << i << " ";
  }
  }

  else cout <<0;
}