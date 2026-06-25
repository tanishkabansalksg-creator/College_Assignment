#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<int> v = {10,50,25,76,83};
int min = v[0];
for(int x : v)
{
if(x < min)
min=x;
}
cout<<"Minimum = "<<min;
return 0;
}