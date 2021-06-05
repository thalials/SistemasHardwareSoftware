#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int pid1, pid2, pid3, pid4, pid5, pid6, pid7, pid8;

	pid1 = fork();
	if (pid1 == 0) {
    	sleep(3);
		printf("child[1] --> pid = %d and ppid = %d\n", getpid(), getppid());
	}

	else {
		pid2 = fork();
		if (pid2 == 0) {
			sleep(2);
			printf("child[2] --> pid = %d and ppid = %d\n", getpid(), getppid());
		}

		else {
			pid3 = fork();
			if (pid3 == 0) {
			    sleep(2);
				printf("child[3] --> pid = %d and ppid = %d\n", getpid(), getppid());
			} 

            else {
                pid4 = fork();
                if (pid4 == 0) {
			        sleep(2);
                    printf("child[4] --> pid = %d and ppid = %d\n", getpid(), getppid());
                } 
                
                else {
                    pid5 = fork();
                    if (pid5 == 0) {
			            sleep(2);
                        printf("child[5] --> pid = %d and ppid = %d\n", getpid(), getppid());
                    } 

                    else {
                        pid6 = fork();
                        if (pid6 == 0) {
                            sleep(2);
                            printf("child[6] --> pid = %d and ppid = %d\n", getpid(), getppid());
                        } 

                        else {
                            pid7 = fork();
                            if (pid7 == 0) {
                                sleep(2);
                                printf("child[7] --> pid = %d and ppid = %d\n", getpid(), getppid());
                            } 
                    
                            else {
                                pid8 = fork();
                                if (pid8 == 0) {
                                    sleep(2);
                                    printf("child[8] --> pid = %d and ppid = %d\n", getpid(), getppid());
                                } 
                        
                                else {
                                    // This is asked to be printed at last
                                    // hence made to sleep for 3 seconds.
                                    sleep(3);
                                    printf("parent[0] --> pid = %d\n", getpid());
                                }
                            }
                        }
                    }
                }
            }

		}
	}

	return 0;
}
