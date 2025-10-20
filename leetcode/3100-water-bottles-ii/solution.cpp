/**
 * Author: 1chooo<hugo@1chooo.com>
 * Problem: https://leetcode.com/problems/water-bottles
 * Runtime: 0ms (100.00%)
 */

class Solution {
  public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int total_bottle = numBottles;

        while (numBottles >= numExchange) {
            numBottles -= numExchange;
            total_bottle++;
            numBottles++;
            numExchange++;
        }

        return total_bottle;
    }
};
