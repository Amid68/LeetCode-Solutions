# 1729. Find Followers Count

## Problem

You are given a table `Followers` that contains information about users and their followers in a social media app. Each row contains a `user_id` and a `follower_id`, indicating that `follower_id` follows `user_id`. The task is to return, for each user, the number of followers they have.

The result should be returned in ascending order of `user_id`.

### Example 1:

- **Input**: 

  Followers table:

  | user_id | follower_id |
  |---------|-------------|
  | 0       | 1           |
  | 1       | 0           |
  | 2       | 0           |
  | 2       | 1           |

- **Output**: 

  | user_id | followers_count |
  |---------|-----------------|
  | 0       | 1               |
  | 1       | 1               |
  | 2       | 2               |

### Explanation:

- User 0 has 1 follower (user 1).
- User 1 has 1 follower (user 0).
- User 2 has 2 followers (users 0 and 1).

### Constraints:

- The `Followers` table has the following columns:
  - `user_id` (`int`) – the ID of the user being followed.
  - `follower_id` (`int`) – the ID of the follower.
- The combination of `user_id` and `follower_id` is the primary key, meaning each follower follows a user only once.

The output should include the `user_id` and the number of followers (`followers_count`) for each user, sorted by `user_id` in ascending order.
