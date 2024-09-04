# 1672. Richest Customer Wealth

## Problem

You are given an `m x n` integer grid `accounts` where `accounts[i][j]` represents the amount of money the i-th customer has in the j-th bank. The task is to return the maximum wealth any customer has.

A customer's wealth is the sum of all their bank accounts (`accounts[i][j]` for all `j`). The richest customer is the one with the maximum wealth.

### Example 1:

- **Input**: `accounts = [[1,2,3], [3,2,1]]`
- **Output**: `6`
  
### Example 2:

- **Input**: `accounts = [[1,5], [7,3], [3,5]]`
- **Output**: `10`

### Constraints:

- `1 <= m, n <= 50`
- `1 <= accounts[i][j] <= 100`
