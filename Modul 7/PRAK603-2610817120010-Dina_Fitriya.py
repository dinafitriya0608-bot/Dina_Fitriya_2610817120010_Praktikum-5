sentence = input("Kalimat : ")

vowels = 0
consonants = 0

for letter in sentence.lower():
    if letter in "aiueo":
        vowels += 1
    elif letter.isalpha():
        consonants += 1

print("Jumlah Vokal :", vowels)
print("Jumlah Konsonan :", consonants)