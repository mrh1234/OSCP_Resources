#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    // Attempt to set the user ID to root (0)
    if (setuid(0) == -1) {
        perror("setuid failed");
        return 1;
    }

    // Execute /bin/sh (shell) after setting root privileges
    execl("/bin/sh", "sh", NULL);

    // If exec fails
    perror("exec failed");
    return 1;
}
