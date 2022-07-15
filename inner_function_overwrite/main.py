# import os
# # exec("print = os.system")
# from foo import *
# x = foo()
# print(f"foo -> {x}")
# # def bar():
# print("ls -al")
# # bar()


def my_sum(n):
    if n == 1:
        globals()["my_sum"] = lambda _: 0
    return my_sum(n - 1) + n


print(my_sum(2))  # prints 28
# print(my_sum(7)) # prints 28
