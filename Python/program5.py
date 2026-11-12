'''
Program  5. Write a function that takes an integer n as input and calculates the value of 1 + 
1/1! + 1/2! + 1/3! + … + 1/n 
'''
# n = int(input("Enter n: "))
# sum = 0
# if n <= 0:
#     print("Enter positive integer only!")

# else:
#     for i in range(1, n+1):
#         sum += i 
#         print(i)

# print("sum:",sum)

def sum_n(n):
    fact = 1
    total = 1
    if n < 0:
        print("Enter positive integer only!")
        return
    else:
        for i in range(1, n+1):
            fact *= i 
            total += 1/fact
    print(f"Sum of series: {total:.2f}")

n = int(input("Enter n: "))
sum_n(n)