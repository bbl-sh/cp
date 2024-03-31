
#include <iostream>

using namespace std;

int knapsack(int weight, const int wt[], const int val[], int n) {
  if (weight <= 0 || n < 0)
    return 0;
  if (weight >= wt[n - 1])
    return max(knapsack(weight, wt, val, n-1), knapsack(weight - wt[n-1], wt, val, n-1) + val[n - 1]);
  else
    return knapsack(weight, wt, val, n-1);
}

int main() {
  int val[] = {60, 100, 120};
  int wt[] = {10, 20, 30};
  int W = 50;
  int n = sizeof(val) / sizeof(val[0]);

  cout << "Maximum value in knapsack = " << knapsack(W, wt, val, n) << endl;

  return 0;
}

