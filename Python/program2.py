'''
Program  2. Using while loop, produce a table of sins, cosines and tangents. Make a variable x in 
range from 0 to 10 in steps of 0.2. For each value of x, print the value of sin(x), cos(x) and tan(x). 
'''
import math

x = 0
print("x \tsin(x) \t\t\tcos(x) \t\t\ttan(x) ")
while x<=10:
    print(f"{x} |\tsin({x}) = {math.sin(x):.4f} |\tcos({x}) = {math.cos(x):.4f} |\ttan({x}) = {math.tan(x):.4f} |")
    x = round(x+0.2,1)