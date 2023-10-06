def ends_with_single_vowel(s):
    vowels = "aeiouy"
    count_vowels = sum(1 for char in s if char in vowels)
    return count_vowels == 1 and s[-1] in vowels


def is_desiigner_string(txt):
    if len(txt) < 3 or txt[0] != "b" or txt[-1] not in "aeiouy":
        return False

    # Check if the string ends with a vowel and has 'b' followed by two or more 'r's
    return ends_with_single_vowel(txt) and "r" in txt[2:-1]


def test_desiigner_string_checker():
    test_cases = [
        ("brrra", "Jebb"),
        ("brrrae", "Neibb"),
        ("xrrra", "Neibb"),
        ("brrrg", "Neibb"),
        ("brrre", "Jebb"),
        ("braa", "Neibb"),
        ("", "Neibb"),
        ("bra", "Neibb"),
        ("brra", "Jebb"),
        ("brrra", "Jebb"),
        ("brrrra", "Jebb"),
        ("brrrx", "Neibb"),
    ]

    for i, (input_str, expected_output) in enumerate(test_cases, start=1):
        result = "Jebb" if is_desiigner_string(input_str) else "Neibb"
        print(f"Test {i}: {'Pass' if result == expected_output else 'Fail'}")
        print(f"  Input: {input_str}")
        print(f"  Expected Output: {expected_output}")
        print(f"  Actual Output: {result}\n")


if __name__ == "__main__":
    test_desiigner_string_checker()
