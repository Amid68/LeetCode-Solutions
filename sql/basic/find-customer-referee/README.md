# 584. Find Customer Referee

## Problem

You are given a table `Customer` that contains information about customers, including their `id`, `name`, and the `referee_id` of the customer who referred them. The task is to find the names of customers who were **not referred** by the customer with `id = 2`.

### Example 1:

- **Input**:

  Customer table:

  | id  | name | referee_id |
  |-----|------|------------|
  | 1   | Will | null       |
  | 2   | Jane | null       |
  | 3   | Alex | 2          |
  | 4   | Bill | null       |
  | 5   | Zack | 1          |
  | 6   | Mark | 2          |

- **Output**:

  | name  |
  |-------|
  | Will  |
  | Jane  |
  | Bill  |
  | Zack  |

### Explanation:

- Customers referred by the customer with `id = 2` are Alex and Mark. They are excluded from the result.
- The customers not referred by `id = 2` are Will, Jane, Bill, and Zack.

### Constraints:

- The `Customer` table has the following columns:
  - `id` (`int`) – primary key
  - `name` (`varchar`)
  - `referee_id` (`int`) – refers to the `id` of another customer or `null` if not referred.
  
The output should list the names of customers who were **not referred** by the customer with `id = 2`.
