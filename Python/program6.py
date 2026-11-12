# Program 6. Write a function that takes an integer input and calculates the factorial of that number.

def factorial(n):
    fact = 1

    if n < 0:
        return "Not defined for negative numbers"
    elif n==0 or n==1:
        return 1
    else:
        for i in range(1,n+1):
            fact *= i
        return fact

n = int(input("Enter N: "))
print(f"factorial of {n} is {factorial(n)}") 