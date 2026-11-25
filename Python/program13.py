# Program  13. Write a method to calculate GCD of two numbers. 

def gcd(a,b):
    smaller = min(a,b)

    for i in range(1, smaller+1):
        if a%i == 0 and b%i == 0:
            result = i
    return result #should i use return or remove it

a = int(input("Enter Number 1: "))
b = int(input("Enter Number 2: "))
print(f"GCD is : {gcd(a,b)}")