def rot13(message):
    hasil = ""
    for i in range(len(message)):
        char = message[i]
        # Menggubah karakter
        if(char.isalpha()):
            if (char.isupper()):
                hasil += chr((ord(char)+13-65) % 26+65)
            else:
                hasil += chr((ord(char)+13-97) % 26+97)
        else:
            hasil += char
    return hasil


print(rot13("test"))
print(rot13("Test"))
