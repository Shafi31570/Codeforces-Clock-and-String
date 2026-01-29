# Clock and Strings

There is a clock labeled with the numbers 1 through 12 in clockwise order.

example, (a,b,c,d)=(2,9,10,6), and the strings intersect.

Alice and Bob have four distinct integers a, b, c, d not more than 12. Alice ties a red string connecting a and b, and Bob ties a blue string connecting c and d. Do the strings intersect? (The strings are straight line segments.)

# Input  
The first line contains a single integer, the number of test cases.  
The only line of each test case contains four distinct integers a, b, c, d

# Output  
For each test case, output "YES" (without quotes) if the strings intersect, and "NO" (without quotes) otherwise.

# Example  
InputCopy  
15  
2 9 10 6  
3 8 9 1  
1 2 3 4  
5 3 4 12  
1 8 2 10  
3 12 11 8  
9 10 12 1  
12 1 10 2  
3 12 6 9  
1 9 8 4  
6 7 9 12  
7 12 9 6  
10 12 11 1  
3 9 6 12  
1 4 3 5

OutputCopy  
YES  
NO  
NO  
YES  
YES  
NO  
NO  
NO  
NO  
NO  
NO  
YES  
YES  
YES  
YES  

# Explanation:
Used clockwise checking and anticlockwise checking making the code simpler.  
I did if c is between the a and b as well as d.  
and also we need to check a or b is in between the c and d (for checking all posible condition worst case)  
Finaly in intersect variable I used XOR for only one condition is true and that finalize our solution.




