# HackerRank Algorithms & GitHub Coding Portfolio

## Student Details

- **Name:** M Dasharath
- **SRN:** R25EF127
- **Semester:** 3rd Semester
- **Programming Language:** C++20
- **HackerRank Profile:** https://www.hackerrank.com/profile/methredasharath1
- **GitHub Repository:** https://github.com/Dasharath949/HackerRank-3rdSem-Algorithm-Portfolio

---

## Introduction

This repository contains my solutions for the HackerRank Algorithms and GitHub Coding Portfolio activity. The solutions are implemented using C++20 with a focus on efficient algorithms, time complexity, space complexity, and clean coding practices.

The portfolio includes five required algorithmic problems:

1. Mini-Max Sum
2. Birthday Cake Candles
3. Insertion Sort – Part 1
4. Binary Search
5. Mark and Toys

---

## 1. Mini-Max Sum

**Problem:** Find the minimum and maximum sums that can be obtained by summing exactly four of the five integers.

**Approach:**
- Calculate the total sum of all elements.
- Find the minimum element.
- Find the maximum element.
- Minimum sum = total sum − maximum element.
- Maximum sum = total sum − minimum element.

**Time Complexity:** O(N)

**Auxiliary Space:** O(1)

**Solution:** `01-Mini-Max-Sum/solution.cpp`

**HackerRank:**  
https://www.hackerrank.com/challenges/mini-max-sum

---

## 2. Birthday Cake Candles

**Problem:** Find how many candles have the maximum height.

**Approach:**
- Traverse the array once.
- Keep track of the maximum candle height.
- Count how many times the maximum height occurs.

**Time Complexity:** O(N)

**Auxiliary Space:** O(1)

**Solution:** `02-Birthday-Cake-Candles/solution.cpp`

**HackerRank:**  
https://www.hackerrank.com/challenges/birthday-cake-candles

---

## 3. Insertion Sort – Part 1

**Problem:** Insert the last element into its correct position in an already sorted portion of the array.

**Approach:**
- Store the last element as the value to insert.
- Compare it with elements from right to left.
- Shift larger elements one position to the right.
- Insert the value into its correct position.
- Print the array after every shift as required.

**Time Complexity:** O(N)

**Auxiliary Space:** O(1)

**Solution:** `03-Insertion-Sort-Part-1/solution.cpp`

**HackerRank:**  
https://www.hackerrank.com/challenges/insertionsort1

---

## 4. Binary Search

**Problem:** Search for a target element in a sorted array using binary search.

**Approach:**
- Maintain left and right boundaries.
- Find the middle element.
- If the middle element is the target, return its index.
- If the target is greater, search the right half.
- Otherwise, search the left half.
- Continue until the element is found or the search range becomes empty.

**Time Complexity:** O(log N)

**Auxiliary Space:** O(1)

**Solution:** `04-Binary-Search/solution.cpp`

**Note:** This is a self-implemented sorted-array binary search used as the suitable Binary Search problem for this activity.

---

## 5. Mark and Toys

**Problem:** Find the maximum number of toys that can be purchased within a given budget.

**Approach:**
- Sort the toy prices in ascending order.
- Start purchasing from the cheapest toy.
- Continue while the total cost does not exceed the budget.
- Stop when the next toy cannot be purchased.

**Time Complexity:** O(N log N)

**Auxiliary Space:** O(log N) typical auxiliary stack usage for `std::sort`.

**Solution:** `05-Mark-and-Toys/solution.cpp`

**HackerRank:**  
https://www.hackerrank.com/challenges/mark-and-toys

---

## Complexity Summary

| Problem | Time Complexity | Auxiliary Space |
|---|---|---|
| Mini-Max Sum | O(N) | O(1) |
| Birthday Cake Candles | O(N) | O(1) |
| Insertion Sort – Part 1 | O(N) | O(1) |
| Binary Search | O(log N) | O(1) |
| Mark and Toys | O(N log N) | O(log N) |

---

## HackerRank Progress

The five required problems have been completed and accepted where applicable on HackerRank.

### Current Achievement

- **Problem Solving:** 1 Star
- **Current Score:** 85/100
- **Portfolio Goal:** Progress toward 3 Stars

The HackerRank profile provides the public evidence of my completed challenges and current progress.

**HackerRank Profile:**  
https://www.hackerrank.com/profile/methredasharath1

---

## Learning Reflection

Through this activity, I improved my understanding of algorithm design and computational complexity. The Mini-Max Sum and Birthday Cake Candles problems helped me understand how a single traversal can solve a problem efficiently without sorting. Insertion Sort – Part 1 helped me understand how elements are shifted during insertion and how the algorithm works step by step. I also implemented Binary Search on a sorted array and learned why dividing the search space in half gives O(log N) time complexity. Mark and Toys helped me understand the use of sorting and a greedy approach to maximize the number of toys purchased within a fixed budget.

Working with GitHub also improved my understanding of maintaining a coding portfolio. I organized each solution into separate folders and used meaningful commit messages. Overall, this activity strengthened my problem-solving skills, algorithm analysis, C++ programming, and GitHub workflow knowledge.

---

## Repository Structure

```text
HackerRank-3rdSem-Algorithm-Portfolio/
│
├── README.md
│
├── 01-Mini-Max-Sum/
│   └── solution.cpp
│
├── 02-Birthday-Cake-Candles/
│   └── solution.cpp
│
├── 03-Insertion-Sort-Part-1/
│   └── solution.cpp
│
├── 04-Binary-Search/
│   └── solution.cpp
│
└── 05-Mark-and-Toys/
    └── solution.cpp
