# 1757. Recyclable and Low Fat Products

## Problem

You are given a table `Products` that contains information about different products, including their `product_id`, whether they are low fat (`low_fats`), and whether they are recyclable (`recyclable`). The task is to find the `product_id` of all products that are both **low fat** and **recyclable**.

### Example 1:

- **Input**:

  Products table:

  | product_id | low_fats | recyclable |
  |------------|----------|------------|
  | 0          | Y        | N          |
  | 1          | Y        | Y          |
  | 2          | N        | Y          |
  | 3          | Y        | Y          |
  | 4          | N        | N          |

- **Output**:

  | product_id |
  |------------|
  | 1          |
  | 3          |

### Explanation:

- Only products with `product_id = 1` and `product_id = 3` are both low fat (`low_fats = 'Y'`) and recyclable (`recyclable = 'Y'`).

### Constraints:

- The `Products` table has the following columns:
  - `product_id` (`int`) – primary key.
  - `low_fats` (`enum('Y', 'N')`) – 'Y' means low fat, 'N' means not low fat.
  - `recyclable` (`enum('Y', 'N')`) – 'Y' means recyclable, 'N' means not recyclable.
  
The output should list the `product_id` of products that are both low fat and recyclable.
