# Program  9. Write a program to generate Fibonacci series.

n = int(input("Enter number of terms: "))
a = 0
b = 1

for i in range(n):
    print(a, end=" ")
    next_sum = a + b
    a = b
    b = next_sum
    
