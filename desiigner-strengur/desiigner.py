txt = input()


def ends_with_single_vowel(s):
    vowels = "aeiouy"
    count_vowels = sum(1 for char in s if char in vowels)
    return count_vowels == 1 and s[-1] in vowels


def is_desiigner_string(txt):
    if len(txt) < 3 or txt[0] != "b" or txt[-1] not in "aeiouy":
        return False

    # Check if the string ends with a vowel and has 'b' followed by two or more 'r's
    return ends_with_single_vowel(txt) and "r" in txt[2:-1]


if is_desiigner_string(txt):
    print("Jebb")
else:
    print("Neibb")
