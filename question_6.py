# QUESTION 6
#  Write a Python script defining a user-defined function named analyze numbers that accepts
#  a list of integers as its only parameter. The function must compute and simultaneously return
#  two distinct values: the highest number and the lowest number in the list. In your main
#  code, call the function and use tuple unpacking to capture these returned values into two
#  separate variables, then print them.

def analyze_numbers(numbers):
    if not numbers:
        return None, None
    highest = max(numbers)
    lowest = min(numbers)
    return highest, lowest

# Main code
numbers_list = [3, 5, 1, 8, 2, 7]
highest_number, lowest_number = analyze_numbers(numbers_list)
print(f"The highest number is: {highest_number}")
print(f"The lowest number is: {lowest_number}")