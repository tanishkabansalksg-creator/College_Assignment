#include <iostream>
#include <set>
using namespace std;

int main()
{
int arr[] = {10,20,20,30,40,40,50};
set<int> s;
for(int x : arr)
{
s.insert(x);
}
cout<<"After removing duplicates:";
for(int x : s)
{
cout<<x<<" ";
}
return 0;
}