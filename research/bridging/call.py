import ctypes

fun = ctypes.CDLL(functions.so)
fun.fibo.argtypes(ctypes.c_int)
print(fun.fibo(20))
