def caeser_cipher(string, shift):
    result = ""
    for i in range(len(string)):
        char = string[i]
        if char.isupper():
            result += chr((ord(char) + shift - 65) % 26 + 65)
        else:
            result += chr((ord(char) + shift - 97) % 26 + 97)
    return result

# Path: test_caeser_cipher.py
import unittest
from caeser_cipher import caeser_cipher
