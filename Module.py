from ctypes import *
so_file = "C:/tmp/Test.so"
Test = CDLL(so_file)

print(Test.square(10))