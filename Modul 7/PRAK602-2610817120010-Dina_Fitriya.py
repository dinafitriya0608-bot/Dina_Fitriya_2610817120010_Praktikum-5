word = input()

lowered = word.lower()

if lowered == lowered[::-1]:
    print(f"Kata '{word}' adalah palindrom")
else:
    print(f"Kata '{word}' bukan palindrom")