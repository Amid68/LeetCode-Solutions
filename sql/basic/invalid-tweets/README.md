# 1683. Invalid Tweets

## Problem

You are given a table `Tweets` that contains the `tweet_id` and `content` of each tweet. The task is to find the `tweet_id` of the invalid tweets, where a tweet is considered invalid if the content length exceeds 15 characters.

### Example 1:

- **Input**: 

  Tweets table:

  | tweet_id | content                          |
  |----------|----------------------------------|
  | 1        | Vote for Biden                   |
  | 2        | Let us make America great again! |

- **Output**:

  | tweet_id |
  |----------|
  | 2        |

- **Explanation**:

  - Tweet 1 has a length of 14 characters, making it valid.
  - Tweet 2 has a length of 32 characters, making it invalid.

### Constraints:

- The `Tweets` table has the following columns:
  - `tweet_id` (primary key, `int`)
  - `content` (`varchar`)
  
The output should be the list of tweet IDs that have content exceeding 15 characters.
