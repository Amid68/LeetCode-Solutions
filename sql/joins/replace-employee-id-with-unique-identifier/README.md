# 1378.  Replace Employee ID With The Unique Identifier

## Problem

You are given two tables, `Employees` and `EmployeeUNI`. The task is to show the `unique_id` of each employee along with their `name`. If an employee does not have a corresponding `unique_id`, the result should show `null`.

### Example 1:

- **Input**:

  Employees table:

  | id  | name     |
  |-----|----------|
  | 1   | Alice    |
  | 7   | Bob      |
  | 11  | Meir     |
  | 90  | Winston  |
  | 3   | Jonathan |

  EmployeeUNI table:

  | id  | unique_id |
  |-----|-----------|
  | 3   | 1         |
  | 11  | 2         |
  | 90  | 3         |

- **Output**:

  | unique_id | name     |
  |-----------|----------|
  | null      | Alice    |
  | null      | Bob      |
  | 2         | Meir     |
  | 3         | Winston  |
  | 1         | Jonathan |

### Constraints:

- The `Employees` table has the following columns:
  - `id` (primary key, `int`)
  - `name` (`varchar`)

- The `EmployeeUNI` table has the following columns:
  - `id` (foreign key to the `Employees` table, `int`)
  - `unique_id` (`int`)
