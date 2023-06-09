Andy wants to play a game with his little brother, Bob. The game starts with an array of distinct integers and the rules are as follows:

Bob always plays first.
In a single move, a player chooses the maximum element in the array. He removes it and all elements to its right. For example, if the starting array , then it becomes  after removing .
The two players alternate turns.
The last player who can make a move wins.
Andy and Bob play  games. Given the initial array for each game, find and print the name of the winner on a new line. If Andy wins, print ANDY; if Bob wins, print BOB.

To continue the example above, in the next move Andy will remove . Bob will then remove  and win because there are no more integers to remove.

Function Description

Complete the gamingArray function in the editor below.

gamingArray has the following parameter(s):

int arr[n]: an array of integers
Returns
- string: either ANDY or BOB

Input Format

The first line contains a single integer , the number of games.

Each of the next  pairs of lines is as follows:

The first line contains a single integer, , the number of elements in .
The second line contains  distinct space-separated integers  where .
Constraints

Array  contains  distinct integers.
For  of the maximum score:

The sum of  over all games does not exceed .
For  of the maximum score:

The sum of  over all games does not exceed .
Sample Input 0

2
5
5 2 6 3 4
2
3 1
Sample Output 0

ANDY
BOB
Explanation 0

Andy and Bob play the following two games:

Initially, the array looks like this:
image

In the first move, Bob removes  and all the elements to its right, resulting in :
image
In the second move, Andy removes  and all the elements to its right, resulting in :
image

At this point, the array is empty and Bob cannot make any more moves. This means Andy wins, so we print ANDY on a new line.

In the first move, Bob removes  and all the elements to its right, resulting in . As there are no elements left in the array for Andy to make a move, Bob wins and we print BOB on a new line.

Sample Input 1

2
5
1 3 5 7 9
5
7 4 6 5 9
Sample Output 1

BOB
ANDY
Explanation 1

In the first test, they alternate choosing the rightmost element until the end. Bob, Andy, Bob, Andy, Bob.

In the second case, Bob takes , Andy takes .