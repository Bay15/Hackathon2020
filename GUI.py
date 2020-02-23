from ctypes import *
#import tkinter as tk
#from Definitions import display

so_file = "C:/tmp/source.so"

source = CDLL(so_file)


option = input("Do you have an event to add? (Y/N) : \n>>>").upper()
print(option)
while option == "Y":
    number = int(input("Please input a number: \n>>>"))
    num_added= source.print_int(number)
    print(num_added)
    option = input("Do you have another event to add? (Y/N) : \n>>>").upper()
    print(option)