# 1148. Article Views I

## Problem

You are given a table `Views` that contains information about articles viewed by different users. The table includes the `article_id`, `author_id`, `viewer_id`, and `view_date`. An equal `author_id` and `viewer_id` indicates that the author viewed their own article.

The task is to find all the authors that viewed at least one of their own articles and return the result sorted by `id` in ascending order.

### Example 1:

- **Input**: 

  Views table:

  | article_id | author_id | viewer_id | view_date  |
  |------------|-----------|-----------|------------|
  | 1          | 3         | 5         | 2019-08-01 |
  | 1          | 3         | 6         | 2019-08-02 |
  | 2          | 7         | 7         | 2019-08-01 |
  | 2          | 7         | 6         | 2019-08-02 |
  | 4          | 7         | 1         | 2019-07-22 |
  | 3          | 4         | 4         | 2019-07-21 |
  | 3          | 4         | 4         | 2019-07-21 |

- **Output**: 

  | id   |
  |------|
  | 4    |
  | 7    |

- **Explanation**: 
  - Author with `id = 7` viewed their own article on `2019-08-01`.
  - Author with `id = 4` viewed their own article on `2019-07-21`.

### Constraints:

- The `Views` table has the following columns:
  - `article_id` (`int`)
  - `author_id` (`int`)
  - `viewer_id` (`int`)
  - `view_date` (`date`)
- There are no unique constraints, meaning the table may have duplicate rows.
  
The output should list the author IDs who have viewed their own articles in ascending order.
