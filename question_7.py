# QUESTION 7
# Write a Python program that utilizes keyword arguments to interact with a value-returning
# function. Define a function named build email that takes three parameters: first name,
# last name, and domain. The function should return a single concatenated string formatted
# as a standard email address (e.g., firstname.lastname@domain). Call this function from
# your main script using keyword arguments arranged in a completely different order than
# they appear in the function signature, and print the returned string.

def build_email(first_name, last_name, domain):
    email = f"{first_name.lower()}.{last_name.lower()}@{domain.lower()}"
    return email

#main code
email_address = build_email(domain="gmail.com", last_name="Chepchieng", first_name="LINDA")
print(f"The generated email address is: {email_address}")