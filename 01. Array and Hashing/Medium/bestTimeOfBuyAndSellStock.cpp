#include<iostream>
#include<vector>
using namespace std;

int buyAndSellStock(vector<int> prices){
    int sum = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i] > prices[i-1]){
                sum += prices[i]-prices[i-1];
            }
        }
        return sum;
}

int main ()
{
    vector<int> prices = {7,1,5,3,6,4};
    int ans = buyAndSellStock(prices);
    cout << ans << "\n";
    return 0;
}