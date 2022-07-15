# Template Argument Selection


```cpp
bool cond = false;
uint32_t i = 5;
int32_t j = -3;
std::cout << std::to_string(cond ? i : j) << std::endl;
std::cout << (cond ? std::to_string(i) : std::to_string(j)) << std::endl;
```

One might think that the first print statement should yield `-3` however it infact gives us `4294967293` (the unsigned cast of `-3`). This is most likely because `std::to_string` is a template argument, and probably decides its type to be unsigned.