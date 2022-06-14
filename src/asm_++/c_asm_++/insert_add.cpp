#include <bits/stdc++.h>
using namespace std;

int main()
{
    int total;
    // mv 50 -> register eax
    // mv 20 -> register ebx
    // add ebx -> eax

    __asm__("movl $50, %%eax;"
            "movl $20, %%ebx;"
            "addl %%ebx, %%eax "
            : ''=a'(total));
    cout << res;
    return 0;
} // runs on x86 -> !ARM
  // Rosetta2 translator