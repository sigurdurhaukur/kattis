# https://open.kattis.com/problems/findingana

def suffix(word):
    if word[0] == "a":
        return word

    return suffix(word[1:])


w = input()
print(suffix(w))
