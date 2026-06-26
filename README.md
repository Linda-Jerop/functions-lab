# Strathmore
# UNIVERSITY
## School of Computing and Engineering Sciences
### ICS 1102 Lab Activity: Value-Returning User-Defined Functions

#### Instructions
##### Answer all 8 questions below. The focus of this lab is strictly on the mechanics of User-Defined

Functions that return values.
• Questions 1 through 4 require complete, working C++ programs.
• Questions 5 through 8 require complete, working Python programs.
• Do not use any void functions. Every function you create must contain a return
statement and send data back to the caller.

##### Questions
1. Write a complete interactive C++ program that contains a user-defined function named
calculateCube. This function must accept a double parameter and return its mathematical
cube as a double. In your main() function, prompt the user to input a number, pass it to
your function, and print the returned result to the console.

2. Write a C++ program that calculates simple interest using a value-returning function. Create a function named getSimpleInterest that takes three double parameters: principal,
rate, and time. The function must calculate and return the final interest amount. Call
this function from main() using interactively captured user inputs and output the returned
value.

3. Write an interactive C++ program featuring a user-defined function named isLeapYear.
The function should accept an integer representing a year and return a boolean data type
(true if it is a leap year, and false otherwise). In main(), use the boolean value returned
by the function within an if...else statement to output whether the user’s year is a leap
year or not.

4. Write a C++ program that demonstrates function overloading using only value-returning
functions. Create two distinct versions of a function named getArea. The first version
should take a single double parameter (representing the radius of a circle) and return its
area. The second version should take two double parameters (representing the length and
width of a rectangle) and return its area. Call both functions from main() and display their
returned values.

5. Write a Python program containing a user-defined function named compute discount. The
function should take two parameters: price and discount rate. Assign a default value of
0.10 (10%) to the discount rate parameter. The function must calculate and return the
final discounted price. Call the function twice in your main script: once using only the price
to trigger the default discount, and once explicitly passing a custom discount rate.

6. Write a Python script defining a user-defined function named analyze numbers that accepts
a list of integers as its only parameter. The function must compute and simultaneously return
two distinct values: the highest number and the lowest number in the list. In your main
code, call the function and use tuple unpacking to capture these returned values into two
separate variables, then print them.

7. Write a Python program that utilizes keyword arguments to interact with a value-returning
function. Define a function named build email that takes three parameters: first name,
last name, and domain. The function should return a single concatenated string formatted
as a standard email address (e.g., firstname.lastname@domain). Call this function from
your main script using keyword arguments arranged in a completely different order than
they appear in the function signature, and print the returned string.

8. Write a Python program that utilizes a lambda (anonymous) value-returning function. Create a lambda function assigned to a variable named celsius to fahrenheit that takes
exactly one argument (Celsius) and returns the mathematical equivalent in Fahrenheit using
the formula (C × 9/5) + 32. Interactively prompt the user for a temperature in Celsius, pass
it into the lambda function, and print the returned Fahrenheit value.
