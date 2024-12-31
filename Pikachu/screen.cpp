#include <unistd.h>
#include <term.h>

void clearScreen()
{
    if (!cur_term)
    {
        int result;
        setupterm( NULL, STDOUT_FILENO, &result);
        if (result <= 0) return;
    }
    char clear[] = "clear";
    putp(tigetstr(clear));
}