# Product Sales Analysis I

## Problem

You are given two tables, `Sales` and `Product`. The task is to report the product name, year, and price for each sale in the `Sales` table by joining it with the `Product` table based on the `product_id`.

### Example 1:

- **Input**: 

  Sales table:

  | sale_id | product_id | year | quantity | price |
  |---------|------------|------|----------|-------|
  | 1       | 100        | 2008 | 10       | 5000  |
  | 2       | 100        | 2009 | 12       | 5000  |
  | 7       | 200        | 2011 | 15       | 9000  |

  Product table:

  | product_id | product_name |
  |------------|--------------|
  | 100        | Nokia        |
  | 200        | Apple        |
  | 300        | Samsung      |

- **Output**: 

  | product_name | year  | price |
  |--------------|-------|-------|
  | Nokia        | 2008  | 5000  |
  | Nokia        | 2009  | 5000  |
  | Apple        | 2011  | 9000  |

### Constraints:

- The `Sales` table has the following columns:
  - `sale_id` (primary key, `int`)
  - `product_id` (foreign key to `Product` table, `int`)
  - `year` (`int`)
  - `quantity` (`int`)
  - `price` (`int`)

- The `Product` table has the following columns:
  - `product_id` (primary key, `int`)
  - `product_name` (`varchar`)

