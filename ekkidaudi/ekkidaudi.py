seperator = "|"

first_line = input().split(seperator)
second_line = input().split(seperator)


def format_text(first_line, second_line):
    # first_line = [txt.strip() for txt in first_line]
    # second_line = [txt.strip() for txt in second_line]

    formatted_text = ""
    for i in range(2):
        formatted_text += f"{first_line[i]}{second_line[i]} "

    return formatted_text


formatted = format_text(first_line, second_line)

print(formatted)
