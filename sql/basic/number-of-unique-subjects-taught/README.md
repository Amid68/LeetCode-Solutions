# 2356. Number of Unique Subjects Taught by Each Teacher

## Problem

You are given a table `Teacher` that contains information about the subjects taught by different teachers in different departments. The task is to calculate the number of unique subjects each teacher teaches in the university.

### Example 1:

- **Input**:

  Teacher table:

  | teacher_id | subject_id | dept_id |
  |------------|------------|---------|
  | 1          | 2          | 3       |
  | 1          | 2          | 4       |
  | 1          | 3          | 3       |
  | 2          | 1          | 1       |
  | 2          | 2          | 1       |
  | 2          | 3          | 1       |
  | 2          | 4          | 1       |

- **Output**:

  | teacher_id | cnt |
  |------------|-----|
  | 1          | 2   |
  | 2          | 4   |

### Explanation:

- Teacher 1:
  - Teaches subject 2 in two departments (3 and 4) but the subject is counted only once.
  - Teaches subject 3 in department 3.
  - So, teacher 1 teaches 2 unique subjects.
- Teacher 2:
  - Teaches subjects 1, 2, 3, and 4 in department 1.
  - So, teacher 2 teaches 4 unique subjects.

### Constraints:

- The `Teacher` table has the following columns:
  - `teacher_id` (`int`) – the ID of the teacher.
  - `subject_id` (`int`) – the ID of the subject.
  - `dept_id` (`int`) – the ID of the department.
- The combination of `subject_id` and `dept_id` is the primary key, meaning each subject-department pair is unique.

The output should include the `teacher_id` and the number of unique subjects (`cnt`) they teach, returned in any order.
