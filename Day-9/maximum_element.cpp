#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<int> v = {10,50,25,76,83};
int mx = v[0];
for(int x : v)
{
if(x > mx)
mx=x;
}
cout<<"Maximum = "<<mx;
return 0;
}