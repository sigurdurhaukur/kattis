# https://iceland.kattis.com/problems/iceland.afjormun

number_of_sentances = int(input())

sentances = []
for i in range(number_of_sentances): # collect the input
    sentances.append(input())


for sentance in sentances:
    unmemed = sentance.capitalize() # format the string
    print(unmemed) # output the sentance


