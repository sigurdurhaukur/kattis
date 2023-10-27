n = int(input())
s = input().split()

letters = []
for word in s:
    if word[0] == word[0].upper():
        letters.append(word[0])


letters = "".join(letters)
print(letters)
