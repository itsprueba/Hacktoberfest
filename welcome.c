fruit = {"orange": "a sweet, orange, citrus fruit",
         "apple": "good for making cider",
         "lemon": "a sour, yellow citrus fruit",
         "grape": "a small, sweet fruit growing in bunches",
         "lime": "a sour, green citrus fruit",
         "apple": "round and crunchy"}
print(fruit)
print(fruit["lemon"])

for snack in fruit:
    print(fruit[snack])
# 
here lemon is a key as a dictionary can be accesed using a key
# 
bike = {"make": "Honda", "model": "250 dream", "colour": "red", "engine_size": 250}
print(bike["engine_size"])
print(bike["colour"])
# 
a key in the dictionary is unique
ADDING A NEW ENTRY TO A DICTIONARY
fruit["pear"] = "an odd shaped apple"
print(fruit)
fruit["lime"] = "great with tequila"
print(fruit)
# 
REMOVE  a dictionary
USE OF DEL COMMAND
# 
del fruit["lemon"]
# 
REMOVING CONTENT FROM A DICTIONARY
# 
fruit.clear()
print(fruit)
# 
RETRIEVING ITEM FROM A DICTIONARY THAT DOESN'T EXISTS
# 
print(fruit["tomato"])
# 
USE OF GET COMMAND TO ACCESS THE DESCRIPTION OF A KEY FROM A DICTIONARY
# 
print(fruit)
while True:
    dict_key = input("Please enter a fruit: ")
    if dict_key == "quit":
        break
    if dict_key in fruit:
        description = fruit.get(dict_key)
        print(description)
    else:
        print("we don't have a " + dict_key)

print(fruit)
while True:
    dict_key = input("Please enter a fruit: ")
    if dict_key == "quit":
        break
    description = fruit.get(dict_key, "We don't have a " + dict_key)
    print(description)

fruit = {"orange": "a sweet, orange, citrus fruit",
         "apple": "good for making cider",
         "lemon": "a sour, yellow citrus fruit",
         "grape": "a small, sweet fruit growing in bunches",
         "lime": "a sour, green citrus fruit"}

print(fruit)

for i in range(10):
    for snack in fruit:
        print(snack + " is " + fruit[snack])
    print("="*40)
 # 
 ORDERING A DICTIONARY
# 
ordered_keys = list(fruit.keys())
ordered_keys.sort()

ordered_keys = sorted(list(fruit.keys()))
for f in ordered_keys:
    print(f + " - " + fruit[f])

ordering a dictionary without using a list

for f in sorted(fruit.keys()):
    for f in fruit:
        print(f  + " - " + fruit[f])
# 
USE OF VALUE COMMAND
# 
for val in fruit.values():
    print(val)

print('-' * 40)

for key in fruit:
    print(fruit[key])
# 
fruit_keys = fruit.keys()
print(fruit_keys)
print(fruit.keys())
print(fruit.values())
fruit["tomato"] = "not nice with ice cream"
print(fruit_keys)
# 
USE OF ITEM COMMAND
# 
print(fruit)
print(fruit.items())
f_tuple = tuple(fruit.items())
print(f_tuple)
# 
for snack in f_tuple:
    item, description = snack
    print(item + " is " + description)
# 
making dictionary from a tuple
print(dict(f_tuple))
# 
UPDATE TWO DICTIONARIES OR JOINING TWO DICTIONARIES
# 
# fruit = {"orange": "a sweet, orange, citrus fruit",
#          "apple": "good for making cider",
#          "lemon": "a sour, yellow citrus fruit",
#          "grape": "a small, sweet fruit growing in bunches",
#          "lime": "a sour, green citrus fruit"}
# print(fruit)
# 
# veg = {"cabbage": "every child's favourite",
#        "sprouts": "mmmm, lovely",
#        "spinach": "can i have some more fruit ,please"}
# 
# print(veg)
# 
# veg.update(fruit)
# print(veg)
# 
# fruit.update(veg)
# print(fruit)
it will return none vale
# 
# print(fruit.update(veg))
# print(fruit)
# 
USE OF COPY COMMAND IN DICTIONARY
# 
# nice_and_nasty = fruit.copy()
# nice_and_nasty.update(veg)
# print(nice_and_nasty)
# 
GAME
# 
Modify the program so that the exits is a dictionary rather than a list,
with the keys being the numbers of the locations and the values being
dictionaries holding the exits (as they do at present). No change should
be needed to the actual code.

Once that is working, create another dictionary that contains words that
players may use. These words will be the keys, and their values will be
a single letter that the program can use to determine which way to go.
# 
# 
# locations = {0: "You are sitting in front of a computer learning Python",
#              1: "You are standing at the end of a road before a small brick building",
#              2: "You are at the top of a hill",
#              3: "You are inside a building, a well house for a small stream",
#              4: "You are in a valley beside a stream",
#              5: "You are in the forest"}
# 
# exits = {0: {"Q": 0},
#          1: {"W": 2, "E": 3, "N": 5, "S": 4, "Q": 0},
#          2: {"N": 5, "Q": 0},
#          3: {"W": 1, "Q": 0},
#          4: {"N": 1, "W": 2, "Q": 0},
#          5: {"W": 2, "S": 1, "Q": 0} }
# 
# namedExits = {1: {"2": 2, "3": 3, "5": 5, "4": 4},
#               2: {"5": 5},
#               3: {"1": 1},
#               4: {"1": 1, "2": 2},
#               5: {"2": 2, "1": 1}}
# 
# vocabulary = { "QUIT":  "Q",
#                "NORTH": "N",
#                "SOUTH": "S",
#                "EAST":  "E",
#                "WEST":  "W",
#                "ROAD": "1",
#                "HILL": "2",
#                "BUILDING": "3",
#                "VALLEY": "4",
#                "FOREST": "5" }
# 
print(locations[0].split())
print(locations[3].split(","))
print(' '.join(locations[0].split()))
# 
# loc = 1
# while True:
#     availableExits = ", ".join(exits[loc].keys())
# 
#     print(locations[loc])
# 
#     if loc == 0:
#         break
#     else:
#         allExits = exits[loc].copy()
#         allExits.update(namedExits[loc])
# 
#     direction = input("Available exits are " + availableExits + " ").upper()
#     print()
    Parse the user input, using our vocabulary dictionary if necessary
    # if len(direction) > 1:   # more than one letter, so check vocab
    #     words = direction.split()
    #     for word in words:
    #         if word in vocabulary:
    #             direction = vocabulary[word]
    #             break
    # 
    # if direction in allExits:
    #     loc = allExits[direction]
    # else:
    #     print("You cannot go in that direction")
# 
Challenge time!
# 
We have mentioned that the data for the Adventure game could be organised in many
different ways.  We've created another way for you.
Your mission, if you choose to accept it, is to
change the code to make it work.
Below is the the complete program from the last video, but with the
locations dictionary modified so that everything is in a single dictionary.
N.B. Yes the code has some errors, thats what you need to fix!
# 
# locations = {0: {"desc": "You are sitting in front of a computer learning Python",
#                  "exits": {},
#                  "namedExits": {}},
#              1: {"desc": "You are standing at the end of a road before a small brick building",
#                  "exits": {"W": 2, "E": 3, "N": 5, "S": 4, "Q": 0},
#                  "namedExits": {"2": 2, "3": 3, "5": 5, "4": 4}},
#              2: {"desc": "You are at the top of a hill",
#                  "exits": {"N": 5, "Q": 0},
#                  "namedExits": {"5": 5}},
#              3: {"desc": "You are inside a building, a well house for a small stream",
#                  "exits": {"W": 1, "Q": 0},
#                  "namedExits": {"1": 1}},
#              4: {"desc": "You are in a valley beside a stream",
#                  "exits": {"N": 1, "W": 2, "Q": 0},
#                  "namedExits": {"1": 1, "2": 2}},
#              5: {"desc": "You are in the forest",
#                  "exits": {"W": 2, "S": 1, "Q": 0},
#                  "namedExits": {"2": 2, "1": 1}}
#              }
# 
# vocabulary = {"QUIT": "Q",
#               "NORTH": "N",
#               "SOUTH": "S",
#               "EAST": "E",
#               "WEST": "W",
#               "ROAD": "1",
#               "HILL": "2",
#               "BUILDING": "3",
#               "VALLEY": "4",
#               "FOREST": "5"}
# 
# loc = 1
# while True:
#     availableExits = ", ".join(locations[loc]["exits"].keys())
# 
#     print(locations[loc]["desc"])
# 
#     if loc == 0:
#         break
#     else:
#         allExits = locations[loc]["exits"].copy()
#         allExits.update(locations[loc]["namedExits"])
# 
#     direction = input("Available exits are " + availableExits).upper()
#     print()
# 
    Parse the user input, using our vocabulary dictionary if necessary
    # if len(direction) > 1:  # more than 1 letter, so check vocab
    #     words = direction.split()
    #     for word in words:
    #         if word in vocabulary:  # does it contain a word we know?
    #             direction = vocabulary[word]
    #             break
    # 
    # if direction in allExits:
    #     loc = allExits[direction]
    # else:
    #     print("You cannot go in that direction")
