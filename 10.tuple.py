animes = ( "Naruto","One Piece","Bleach","Jjk","Solo Leveling")
print(animes[0])
print(animes[-2])
print(animes[1:4])
print(animes[::-1])

for anime in animes:
    print(animes)

print(len(animes))

ratings=(8.5,9.0,9.2,9.5,9.2)
print(max(ratings))
print(min(ratings))
print(sum(ratings))


print(ratings.count(9.2))
print(ratings.index(9.2))


#Tuple Unpacking 
student = ("ALPESH", 22, 72)

name, age, marks = student

print(name)
print(age)
print(marks)

# Nesting 

students = (
    ("ALPESH", 22, 70),
    ("Smeet", 21, 90),
    ("Sanjana", 18, 95)
)

print(students[2][0])