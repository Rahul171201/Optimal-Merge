# Assignment-5

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019192  |   Pritik Shrivastava | pritik24 |
|    IIT2019193  |   Chetan Patidar | chetann26 | 
|    IIT2019194  |   Rahul Roy | Rahul171201  |

**Group No-**"3"

**Mentor Name-** "Md. Meraz"

---

# Optimal Merge Pattern
The project aims at :Solving the  Optimal Merge Pattern problem ,implementing the approach by maximum time and space utillisation and analysing it practically.

# Question
Given n number of sorted files, the task is to find the minimum computations done to reach Optimal Merge Pattern. When two or more sorted files are to be merged all together to form a single file, the minimum computations done to reach this file are known as Optimal Merge Pattern.



# How to use project
```
Download project: git clone https://github.com/Rahul171201/Optimal-Merge.git
Project initialize: cd Optimal-Merge

Run Code:
g++ solution.cpp


Follow the previous steps by entering: ./a.out

```

Input
```
First line of input contains one integer N.
Next N integers are randomly generated
```

Output
```
Min Computation Time for Merging
```
---


**Test case**

Test Case-1
```
Input(Randomly Generated in code):
8
34 71 37 56 12 50 59 37

Output:
1043
```


---


# Algorithmic Analysis
* Time Complexity :
    The time complexity of the algorithm using greedy programming is O(n*log(n)) which depends on the number of the sorted files
* Space Complexity :
 The space complexity of the program is O(n) as we store the size of n files.
 
 # References
  
 * Introduction to Algorithms by Thomas H.cormen
 * https://www.geeksforgeeks.org
