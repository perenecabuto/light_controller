#!/usr/bin/env python

import serial
import time
import string

rot13 = string.maketrans(
    "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz",
    "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm")

test = serial.Serial("/dev/ttyUSB0", 9600)
#test.open()

items = ['C', 'D', 'A']
items += reversed(items)

for x in items:
    print x
    test.write('%s\r' % x)
    time.sleep(2)

test.close()
