#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int f(void * arg);

int main(int argc, char ** argv) {
    int stack_size = 1024 * 1024;
    char stack[stack_size];
    pid_t pid = clone(f, stack + stack_size, CLONE_NEWNET | SIGCHLD, 0);
    if(pid == -1)
        exit(pid);
    return waitpid(pid, 0, 0);
}

int f(void * arg) {
    return execl("/bin/sh", "/bin/sh", (char *) 0);
}
