/**< Winter is Coming - Game Of Thrones */

#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int>v;
 v.push_back(0);
 v.push_back(6);
v.push_back(0);
v.push_back(6);
v.push_back(4);
v.push_back(8);
v.push_back(8);
v.push_back(2);
//v.push_back(5);
 // v.push_back(0);A : [ 0, 3, 7, 6, 4, 0, 5, 5, 5 ]

  //v.push_back(1);
  vector<int>val;
  int carry = 1;
  for(int i=v.size()-1; i >= 0; i--)
  {
     int cal = carry + v[i];
     if(cal > 9)
     {
         carry = cal/10;
         val.push_back(cal % 10);
     }
     else
     {
         carry = 0;
         val.push_back(cal % 10);
     }
  }
  if(carry != 0)
    val.push_back(1);
  reverse(val.begin(),val.end());
  int index = 0;
for(index=0; index < val.size();)
{
    if(val[index] == 0)
    {
     index++;
    }
    else break;

}
vector<int>vec;
for(int i = index; i < val.size(); i++)
    vec.push_back(val[i]);

  for(int i=0; i < vec.size(); i++) cout << vec[i] << " ";


  return 0;
}
