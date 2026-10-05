#Basic Input
name = input("Enter your name: ")
print(f"My name is {name}")

#Multiple Variables 

name = input("Enter your name: ")
age = input("Enter your age: ")
city = input("Enter your city: ")

print(f"My name is {name}, I am {age} years old, and I live in {city}.")

#Taking Numbers
age = int(input("Enter your age: "))
weight = float(input("Enter your weight: "))

print(f"Age: {age}")
print(f"Weight: {weight} kg")

#Calculation With Input
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

total = num1 + num2

print(f"The total is {total}")

a = int(input("Enter a number: "))
b = int(input("Enter another number: "))

print("Addition:", a + b)
print("Subtraction:", a - b)
print("Multiplication:", a * b)
print("Division:", a / b)

# Taking Input Using If/Else

age = int(input("Enter your age: "))

if age >= 18:
    print("You are an adult.")
else:
    print("You are a minor.")

# Comaparing Text Input

gender = input("Enter your gender: ")

if gender.lower() == "male":
    print("You are Male")

elif gender.lower() == "female":
    print("You are Female")\
    
elif gender.lower() == "Prefer Not To Say":
    print("na")

else:
    print("Invalid gender")

# If I enter space mistakely then i can Strip the space using strip function

name = input("Enter your name: ").strip()

print(f"Hello {name}")

#Input → variable → calculation → output

price = float(input("Enter price: "))
quantity = int(input("Enter quantity: "))

total = price * quantity

print(f"Price: ₹{price}")
print(f"Quantity: {quantity}")
print(f"Total: ₹{total}")

#This is evrything for Input  if user enter a male capital or small it i ll get the input i want bcz if i use ==lower funtion it will match my string 
