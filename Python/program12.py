# Program  12. Write a program to print factors of a given number.

n = int(input("Enter Number: "))
print(f"factors of {n}:", end=" ")

for i in range(1, n+1):
    if n%i == 0:
        print(i, end=" ")