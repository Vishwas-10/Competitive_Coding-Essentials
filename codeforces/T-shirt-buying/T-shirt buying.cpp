/*                                                                         T-shirt buying

A new pack of n t-shirts came to a shop. Each of the t-shirts is characterized by three integers pi, ai and bi, where pi is the price of the i-th t-shirt, ai is front color of the i-th t-shirt and bi is back color of the i-th t-shirt. All values pi are distinct, and values ai and bi are integers from 1 to 3.

m buyers will come to the shop. Each of them wants to buy exactly one t-shirt. For the j-th buyer we know his favorite color cj.

A buyer agrees to buy a t-shirt, if at least one side (front or back) is painted in his favorite color. Among all t-shirts that have colors acceptable to this buyer he will choose the cheapest one. If there are no such t-shirts, the buyer won't buy anything. Assume that the buyers come one by one, and each buyer is served only after the previous one is served.

You are to compute the prices each buyer will pay for t-shirts.

Input
The first line contains single integer n (1 ≤ n ≤ 200 000) — the number of t-shirts.

The following line contains sequence of integers p1, p2, ..., pn (1 ≤ pi ≤ 1 000 000 000), where pi equals to the price of the i-th t-shirt.

The following line contains sequence of integers a1, a2, ..., an (1 ≤ ai ≤ 3), where ai equals to the front color of the i-th t-shirt.

The following line contains sequence of integers b1, b2, ..., bn (1 ≤ bi ≤ 3), where bi equals to the back color of the i-th t-shirt.

The next line contains single integer m (1 ≤ m ≤ 200 000) — the number of buyers.

The following line contains sequence c1, c2, ..., cm (1 ≤ cj ≤ 3), where cj equals to the favorite color of the j-th buyer. The buyers will come to the shop in the order they are given in the input. Each buyer is served only after the previous one is served.

Output
Print to the first line m integers — the j-th integer should be equal to the price of the t-shirt which the j-th buyer will buy. If the j-th buyer won't buy anything, print -1.

*/





#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++)
   {
       cin>>a[i];
   }
 
   set<int>st[4];
 
   for(int i=0; i<n; i++)
   {
      int b;
      cin>>b;
      st[b].insert(a[i]);
 
   }
 
   for(int i=0; i<n; i++)
   {
      int b;
      cin>>b;
      st[b].insert(a[i]);
 
   }
  /* for(int i=0;i<4;i++)
   {
     for (auto it = s[i].begin(); it !=
                             s[i].end(); ++it)
                             {
        cout << ' ' << *it;
                             }
   }
   cout<<endl;  */
   int m;
   cin>>m;
   for(int i=0; i<m; i++)
   {
       
       int b;
       cin>>b;
 
       int it=*st[b].begin();
      // cout<<it;
 
     for(int k=1; k<4; k++)
       {
            
            st[k].erase(it);
 
       }
 
     if(it>0)
       {
         cout<<it<<" ";
       }
       else
       {
         cout<<"-1 ";
       }
 
 
 
 
   }
 
 
 
 
   return 0;
 
}
