'''
Program  4. Write a program that takes a positive integer n and then produces n lines of output 
shown as follows. For example enter a size: 5 * ** *** **** ***** 
'''

n = int(input("Enter a size: "))

if n <= 0:
    print("Enter positive integer only!")

else:
    for i in range(1,n+1):
        print(i * "*")