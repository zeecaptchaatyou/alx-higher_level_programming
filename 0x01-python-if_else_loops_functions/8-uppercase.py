#!/usr/bin/python3

def uppercase(str):
    for i in range(len(str)):
        if ord(str[i]) > 96 and ord(str[i]) < 123:
            char = (chr(ord(str[i]) - 32))
        else:
            char = str[i]
        print("{}".format(char), end="")
    print("")
