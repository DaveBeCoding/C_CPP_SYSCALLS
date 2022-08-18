# CLEAR SCREEN
```c
void clear()
{
    // SYSTEM_AGNOSTIC->UNIX_LINUX_WIN
    std::cout << "\033[2J\033[1;1H";
}
```
