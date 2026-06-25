#include <iostream>
#include <set>
using namespace std;

int main()
{
set<int> s = {10,20,20,30,30,40};
for(int x : s)
cout<<x<<" ";
return 0;
}