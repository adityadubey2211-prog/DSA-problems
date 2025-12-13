#include <bits/stdc++.h>
using namespace std;
int maxprofit(vector<int> &price)
{
    int maxprofit = 0, bestbuy = price[0];
    for (int i = 0; i < price.size(); i++)
    {
        if (price[i] > bestbuy)
        {
            maxprofit = max(maxprofit, price[i] - bestbuy);
        }
        bestbuy = min(bestbuy, price[i]);
    }
    return maxprofit;
}
int main(){
    vector<int>price{7,3,5,2,5};
    int maxproffit=maxprofit(price);
    cout<<maxproffit<<endl;

}