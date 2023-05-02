# Small and Large triangles

## What the challenge is about

You are given *n* triangles, specifically, their sides *a*, *b* and *c*. Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.

The best way to calculate a area of a triangle with sides *a*, *b* and *c* is Heron's formula:
$S=\sqrt{p(p-a)(p-b)(p-c)}$ where $p=\frac{a+b+c}{2}$

## Input Format

The first line of each test file contains a single integer .  Lines follow with three space-separated integers, *a*, *b* and *c*.

## Constraints

$(1 \leq n \leq 100)$  
$(1 \leq a,b,c \leq 70)$  
$(a+b) > (ca+c+b) \ \text{and} \ b+c > a$  

## Output Format
Print exactly *n* lines. On each line print *3* space-separated integers, the *a*, *b* and *c* of the corresponding triangle.

## Sample Input 0
```
3
7 24 25
5 12 13
3 4 5
```
## Sample Output 0
```
3 4 5
5 12 13
7 24 25
```
## Explanation 0

The square of the first triangle is **84**. The square of the second triangle is **30**. The square of the third triangle is **6**. So the sorted order is the reverse one.