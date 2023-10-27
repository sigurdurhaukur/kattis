name_of_company = input()

consonants = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ"


def remove_consonats(s):
    return "".join(x for x in s if x not in consonants)


name_of_company = remove_consonats(name_of_company)

print(name_of_company)
