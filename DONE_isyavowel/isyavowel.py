
vowels = 'aeiou'

word = input()

# count the number of vowels in the word
count = 0
for letter in word:
    if letter in vowels:
        count += 1

print(count, end=' ')

for letter in word:
    if letter == 'y':
        count += 1

print(count)


