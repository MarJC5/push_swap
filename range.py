#!/usr/bin/env python
import random

list = random.sample(range(-500, 500), 500)
text = ""

for i in list:
    text += str(i)
    text += " "

print(text)