def determine_force_user(user_name, a, b, a_minus_b):
    is_sith = a_minus_b == abs(a - b)
    is_jedi = a_minus_b == (a - b)
    is_neither = (not is_sith and not is_jedi) or (is_sith and is_jedi)

    if is_neither:
        return "VEIT EKKI"
    if is_sith:
        return "Sith"
    elif is_jedi:
        return "Jedi"
    else:
        return "error"


# Sample input
user_name = input()
a = int(input())
b = int(input())
a_minus_b = int(input())

# Determine the force user's alignment
force_alignment = determine_force_user(user_name, a, b, a_minus_b)

# Output the force alignment
print(force_alignment)
