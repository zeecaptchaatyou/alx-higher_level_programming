#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

abs_number = abs(number)
last_digit = abs_number % 10
print(f"Last digit of {number} is", end=" ")

if number < 0:
    last_digit *= -1
print(last_digit, end=" ")


if last_digit > 5:
    print("and is greater than 5")
elif last_digit == 0:
    print("and is 0")
elif last_digit < 6 and last_digit != 0:
    print("and is less than 6 and not zero")
