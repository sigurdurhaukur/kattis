# https://iceland.kattis.com/problems/iceland.akureyri

number_of_participants = int(input())

all_locations = [] # location of each participant
for i in range(number_of_participants*2): # collect the input
    if i % 2 == 1: # every other input contains the location
        all_locations.append(input())
    else: # do nothing except collecting input
        input()

available_locations = list( dict.fromkeys(all_locations) ) # list of all available locations

# loop over each location and count how many participants are there
for location in available_locations:
    population = all_locations.count(location) # population of participants present at location
    print(location, population)