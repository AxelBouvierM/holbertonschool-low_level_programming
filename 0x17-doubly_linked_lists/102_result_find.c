#!/usr/bin/python3
def palindrome(str):
    for i in range(len(str) // 2):
        if str[i] != str[-1 - i]:
            return False
    return True

for i in range(999*999, -1, -1):
    if palindrome(str(i)):
        print("Found: ", i)
