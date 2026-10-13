anime = { "Anime1":{                      # nested dictionary
         "Author":"Oda Sensi",
        "name":"One Piece",          
         "Ratings":9.2,
         "Ranking": 1},
         
         "Anime2":{
         "name":"NARUTO",
         "Author":"sesni",
         "Ratings":9.0,
         "Ranking": 2}
}
print(anime["Anime1"])
print(anime["Anime2"])
print(anime["Anime1"]["name"])




#We can also use dictinory inside a list also 

students = [
    {"name": "ALPESH", "age": 22, "marks": 85},
    {"name": "SANJANA", "age": 19, "marks": 90},
    {"name": "Smeet", "age": 22, "marks": 95}
]

print(students[0]["name"])


# print(anime)

anime["Ratings"]= 9
print(anime)

anime["Highest ep rating"]= 9.8
print(anime)

anime.pop("Author")
print(anime)

# We can also use the clear method to clear the dictionary
anime.clear()

# cheking if value exist or not 

print("name" in anime)

print(anime.keys())
print(anime.values())
print(anime.items())

for key,value in anime.items():
    print(key,value)

