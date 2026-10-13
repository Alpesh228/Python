name="Alpesh"
age=22
weight=85
gender="MALE"

print(f"My name is {name} my age is {age} my weight is {weight} kg and my gender is {gender}.")

print(type(name))
print(type(age))

price = 100
quantity = 10

total = price*quantity

print("Total price is", total)

score = 50
# score = score + 10
# print(score)

# score -= 5
score *= 2
# score /= 2

print("Updated Score is",score)

a = 112
b = 121

a, b = b, a

print(a)
print(b)