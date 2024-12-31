
in_language = input()


a = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
b = ["@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", r"[]\/[]", r"[]\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", r"\/", r"\/\/", "}{", r"`/", "2"]

def translate_a_to_b(inpt):
    inpt = inpt.lower()
    translated = ""
    for char in inpt:
        if char in a:
            a_index = a.index(char)
            translated += b[a_index]
        else:
            translated += char
        
    return translated


translation = translate_a_to_b(in_language)
print(translation)
