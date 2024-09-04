# 595. Big Countries

## Problem

You are given a table `World` that contains information about countries, including their name, continent, area, population, and GDP. A country is considered "big" if it satisfies either of the following conditions:

- It has an area of at least 3 million km².
- It has a population of at least 25 million people.

The task is to find the name, population, and area of all the big countries.

### Example 1:

- **Input**:

  World table:

  | name        | continent | area    | population | gdp          |
  |-------------|-----------|---------|------------|--------------|
  | Afghanistan | Asia      | 652230  | 25500100   | 20343000000  |
  | Albania     | Europe    | 28748   | 2831741    | 12960000000  |
  | Algeria     | Africa    | 2381741 | 37100000   | 188681000000 |
  | Andorra     | Europe    | 468     | 78115      | 3712000000   |
  | Angola      | Africa    | 1246700 | 20609294   | 100990000000 |

- **Output**:

  | name        | population | area    |
  |-------------|------------|---------|
  | Afghanistan | 25500100   | 652230  |
  | Algeria     | 37100000   | 2381741 |

### Constraints:

- The `World` table has the following columns:
  - `name` (`varchar`) – primary key
  - `continent` (`varchar`)
  - `area` (`int`)
  - `population` (`int`)
  - `gdp` (`bigint`)

The output should include the `name`, `population`, and `area` of all big countries, with results returned in any order.
