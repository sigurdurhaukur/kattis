forbidden_chars = input()
text = input()


def is_forbidden(word, forbidden_chars):
    for char in forbidden_chars:
        if char in word:
            return True
    return False


def censor(word):
    return "*" * len(word)


def censor_text(text, forbidden_chars):
    words = text.split()
    for i in range(len(words)):
        if is_forbidden(words[i], forbidden_chars):
            words[i] = censor(words[i])
    return " ".join(words)


text = censor_text(text, forbidden_chars)
print(text)
