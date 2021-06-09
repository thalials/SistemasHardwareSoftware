#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main()  {
    pid_t filho, pai;

    filho = fork();
    if (filho == 0) {
        filho = getpid();
        printf("[filho] pid=%d\n", filho);
        sleep(3);

    } else {
        int wst;
        // wait(&wst);
        printf("[pai] pid=%d\n", getpid());
        // If the WNOHANG bit is set in OPTIONS, and that child
        // is not already dead, return (pid_t) 0. If successful,
        // return PID and store the dead child's status in STAT_LOC.
        // Return (pid_t) -1 for errors. I
        printf("%d\n", waitpid(filho, &wst, WNOHANG));
        printf("[pid filho] = %d\n", filho );
        // FILHO ACABOU:
        if (waitpid(filho, &wst, WNOHANG) == filho) {
            printf("processo filho acabou\n");
            wait(&wst);
        }
        if (waitpid(filho, &wst , WNOHANG) ==  0) {
            printf("processo filho ainda não morreu\n");
            wait(&wst);
        }
        if (waitpid(filho, &wst, WNOHANG) == -1) {
            printf("deu ruim\n");
        }
        
    }
    return 0;
}