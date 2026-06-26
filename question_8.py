# QUESTION 8
# Write a Python program that utilizes a lambda (anonymous) value-returning function. Create a lambda function assigned to a variable named celsius to fahrenheit that takes
# exactly one argument (Celsius) and returns the mathematical equivalent in Fahrenheit using
# the formula (C × 9/5) + 32. Interactively prompt the user for a temperature in Celsius, pass
# it into the lambda function, and print the returned Fahrenheit value.

celsius_to_fahrenheit = lambda celsius: (celsius * 9/5) + 32    
temperature_celsius = float(input("Enter temperature in celsius: "))
temperature_fahrenheit = celsius_to_fahrenheit(temperature_celsius)

print(f"The temperature in Fahrenheit is: {temperature_fahrenheit:.2f}°F")