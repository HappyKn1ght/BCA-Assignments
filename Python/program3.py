'''
Program 3. Write a program that reads an integer value and prints ―leap year‖ or ―not a leap year. 
'''

year = int(input("Enter Year: "))

if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    print(f"{year} leap year")
else:
    print(f"{year} not a leap year")