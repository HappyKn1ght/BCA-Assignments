'''
Program 1.  Using for loop, print a table of Celsius/Fahrenheit equivalences. Let c be the 
Celsius temperatures ranging from 0 to 100, for each value of c, print the corresponding 
Fahrenheit temperature.
'''

for c in range(0,101):
    #formula °F = (°C × 1.8) + 32
    F = (c * 1.8) + 32
    print(f"{c}°C = {F:.2f}°F")
