import ctypes
import os

fun = ctypes.CDLL('/home/kacper/Documents/key-value-store/research/bridging/functions.so')
fun.fibo.argtypes = [ctypes.c_int]
print(fun.fibo(4))
 