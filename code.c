                              +----------------------------------------------+
                              |                                              |
                              |                  THE FIRST-                  |
                              |                                              |
                              |                 BANK OF-                     |
                              |                                              |
                                                   |    |
                     +-----------------------------+----+-------------------------------+
                     |    Safer than keeping your cash at home. Probably.-              |
                     |                                                                  |
                     +-----------------------------+----+-------------------------------+
                                                   |    |
                              +--------------------+----+-------------------+
                              |   3 days of security-problem free-          |
                              |   banking                                   |
                              +--------------------+----+-------------------+
                                                   |    |
                                                   |    |
                                                   |    |
                                                   +----+
 pid_t pid = fork();
 if (pid == -1) {
   fprintf(stderr, "Can't fork process: %s\n", strerror(errno));
   return 1;
 }
 if (execle(...) == -1) {
   fprintf(stderr, "Can't run script: %s\n", strerror(errno));
   return 1;
 }
 void error(char* msg)
 {
   fprintf(stderr, "%s: %s\n", msg, strerror(errno));
   exit(1);
 }
 pid_t pid = fork();
 if (pid == -1) {
   error("Can't fork process");
 }
 if (execle(...) == -1) {
   error("Can't run script");
 }
 ./rssgossip.py Snooki > stories.txt
 |-----+---------------------------|
 |   # | Data stream               |
 |-----+---------------------------|
 |   0 | The keyboard              |
 |   1 | The screen                |
 |   2 | The screen                |
 |   3 | Database connection       |
 |   4 | MP3 music stream          |
 | ... |                           |
 |-----+---------------------------|
 |-----+-------------------------------------|
 |   # | Data stream                         |
 |-----+-------------------------------------|
 |   0 | The keyboard                        |
 |   1 | <s>The screen</s>  File auction.txt |
 |   2 | The screen                          |
 |   3 | Database connection                 |
 | ... |                                     |
 |-----+-------------------------------------|
 ./myprog > output.txt 2> errors.log
 ./myprog 2>&1
 FILE* my_file = fopen("guitar.mp3", "r");
 |-----+---------------------------|
 |   # | Data stream               |
 |-----+---------------------------|
 |   0 | The keyboard              |
 |   1 | The screen                |
 |   2 | The screen                |
 |   3 | Database connection       |
 |   4 | File guitar.mp3           |
 | ... |                           |
 |-----+---------------------------|
 int descriptor = fileno(my_file);
 dup2(4, 3);
 |-----+--------------------------------------------|
 |   # | Data stream                                |
 |-----+--------------------------------------------|
 |   0 | The keyboard                               |
 |   1 | The screen                                 |
 |   2 | The screen                                 |
 |   3 | <s>Database connection</s> File guitar.mp3 |
 |   4 | File guitar.mp3                            |
 | ... |                                            |
 |-----+--------------------------------------------|
 int main(int argc, char* argv[])
 {
   char* phrase = argv[1];
   char* vars[] = {"RSS_FEED=http://www.cnn.com/rss/celebs.xml", NULL};
   FILE* f = fopen("stories.txt", "w");
   if (!f) {
     error("Can't open stories.txt");
   }
   pid_t pid = fork();
   if (pid == -1) {
     error("Can't fork process");
   }
   if (!pid) {
     if (________________________________) {
       error("Can't redirect Standard Output");
     }
     if (execle("/usr/bin/python", "/usr/bin/python", "./rssgossip.py", phrase, NULL, vars) == -1) {
       error("Can't run script");
     }
   }
   return 0;
 }
 int main(int argc, char* argv[])
 {
   char* phrase = argv[1];
   char* vars[] = {"RSS_FEED=http://www.cnn.com/rss/celebs.xml", NULL};
   FILE* f = fopen("stories.txt", "w");
   if (!f) {
     error("Can't open stories.txt");
   }
   pid_t pid = fork();
   if (pid == -1) {
     error("Can't fork process");
   }
   if (!pid) {
     if (dup2(fileno(f), 1) == -1) {
       error("Can't redirect Standard Output");
     }
     if (execle("/usr/bin/python", "/usr/bin/python", "./rssgossip.py", phrase, NULL, vars) == -1) {
       error("Can't run script");
     }
   }
   return 0;
 }
 |-----+------------------|
 |   # | Data stream      |
 |-----+------------------|
 |   0 | The keyboard     |
 |   1 | File stories.txt |
 |   2 | The screen       |
 |   3 | File stories.txt |
 |-----+------------------|
 > ./newshound2 'pajama death'
 > cat stories.txt
 Pajama Death ex-drummer tells all.
 New Pajama Death album due next month.
 > ./newshound2 'pajama death'
 > cat stories.txt
 >
   ...
   int pid_status;
   if (waitpid(pid, &pid_status, 0) == -1) {
     error("Error waiting for child process");
   }
   return 0;
 }
 if (WEXITSTATUS(pid_status))
   puts("Error status non-zero");
 > ./newshound2 'pajama death'
 > cat stories.txt
 Pajama Death ex-drummer tells all.
 New Pajama Death album due next month.
 Q: So does exit() end the program faster than just returning from main()?
 A: No. But if you call exit() you don't need to structure your code to get back to the main() function. As soon as you call exit(), you're program is dead.
 Q: Should I check for -1 when I call exit(), in case it doesn't work?
 A: No. exit() doesn't return a value, because exit() never fails. exit() is the only function that is guaranteed never to return and never to fail.
 Q: Is the number I pass to exit the exit status?
 A: Yes.
 Q: Are the Standard Input, Output and Error always in slots 0, 1 and 2 of the descriptor table?
 A: Yes they are.
 Q: So if I open a new data-stream to something like a file, it is automatically added to the descriptor table?
 A: Yes.
 Q: Is there a rule about which slot it gets?
 A: New data-streams are always added to the available slot with the lowest number. So if slot number 4 is the first available one, that's the one your new data stream will use.
 Q: Are all data-streams connected to files?
 A: No. You can open data-streams to the network, or to other processes.
 Q: How big is the descriptor table?
 A: It has slots from 0 to 255.
 Q: The descriptor seems kinda complicated. Why is it there?
 A: Because it allows you re-wire the way a program works. Without the descriptor table, redirection isn't possible.
 Q: Is there a way of sending data to the screen without using the Standard Output?
 A: On some systems. For example, on Unix-based machines if you open a file stream to '/dev/tty', it will send data directly to the terminal.
 Q: If I replace a data-stream in the table using dup2(), what happens to the old data-stream?
 A: If the data-stream was open, the operating system will close it.
 Q: Can I use waitpid() to wait for any process? Or just the processes I started?
 A: You can use waitpid() to wait for any process.
 Q: Why isn't the pid_status in waitpid(..., &pid_status, ...) just an exit status?
 A: Because the pid_status contains other information.
 Q: Such as...?
 A: For example, WIFSIGNALED(pid_status) will be false if a process ended naturally or true if something killed it off.
 Q: How can an integer variable like pid_status contain several pieces of information?
 A: It stores different things in different bits. The first 8 bits store the exit status. The other information is stored in the other bits.
 Q: So if I can extract the first 8 bits of the pid_status value, I don't have to use WEXITSTATUS()?
 A: It is always best to use WEXITSTATUS(). It's easier to read and it will on whatever the native int size is on the platform.
 Q: Why is WEXITSTATUS() in upper-case?
 A: Because it is a macro rather than a function. The compiler replaces macro-statements with small pieces of code at runtime.
 > python rssgossip.py -u 'pajama death'
 Pajama Death ex-drummer tells all.
     http://www.rock-news.com/exclusive/24.html
 New Pajama Death album due next month.
     http://www.rolling-stone.com/pdalbum.html
 python rssgossip.py -u 'pajama death' | grep 'http'
     http://www.rock-news.com/exclusive/24.html
     http://www.rolling-stone.com/pdalbum.html
  int fd[2];
  if (pipe(fd) == -1) {
    error("Can't create the pipe");
  }
 close(fd[0]);
 close(fd[1]);
 void open_url(char* url)
 {
   char launch[255];
   sprintf(launch, "cmd /c start %s", url);
   system(launch);
   sprintf(launch, "x-www-browser '%s' &", url);
   system(launch);
   sprintf(launch, "open '%s'", url);
   system(launch);
 }
 int main(int argc, char* argv[])
 {
   char* phrase = argv[1];
   char* vars[] = {"RSS_FEED=http://www.cnn.com/rss/celebs.xml", NULL};
   int fd[2];
   ________________________________
   ________________________________
   ________________________________
   pid_t pid = fork();
   if (pid == -1) {
     error("Can't fork process");
   }
   if (!pid) {
     _____________________________
     _____________________________
     if (execle("/usr/bin/python", "/usr/bin/python", "./rssgossip.py", "-u", phrase, NULL, vars) == -1) {
       error("Can't run script");
     }
   }
   ___________________________
   ___________________________
   char line[255];
   while (fgets(line, 255, _______________)) {
     if (line[0] == '\t')
       open_url(line + 1);
   }
   return 0;
 }
 int main(int argc, char* argv[])
 {
   char* phrase = argv[1];
   char* vars[] = {"RSS_FEED=http://www.cnn.com/rss/celebs.xml", NULL};
   int fd[2];
   if (pipe(fd) == -1) {
     error("Can't create the pipe");
   }
   pid_t pid = fork();
   if (pid == -1) {
     error("Can't fork process");
   }
   if (!pid) {
     dup2(fd[1], 1);
     close(fd[0]);
     if (execle("/usr/bin/python", "/usr/bin/python", "./rssgossip.py", "-u", phrase, NULL, vars) == -1) {
       error("Can't run script");
     }
   }
   dup2(fd[0], 0);
   close(fd[1]);
   char line[255];
   while (fgets(line,255,stdin)) {
     if (line[0] == '\t')
       open_url(line + 1);
   }
   return 0;
 }
 > ./news_opener 'pajama death'
 Q: Is a pipe a file?
 A: It's up to the operating system how it creates pipes, but pipes created with the <tt>pipe()</tt> are not normally files.
 Q: So pipes ''might'' be files?
 A: It is possible to create pipes based on files, which are normally called ''named pipes'' or '''FIFO''' (''First-In/First-Out'') files.
 Q: Why would anyone want a pipe that uses a file?
 A: Pipes based on files have ''names''. That means they are useful if two processes need to talk to each other and they are not parent-and-child processes. As long as both processes known the name of the pipe, they can talk with it.
 Q: Great! So how do I use named pipes?
 A: Using the <tt>mkfifo()</tt> system call. For more information see http://tinyurl.com/cdf6ve5
 Q: If most pipes are not files, what are they?
 A: Usually they are just pieces of memory. Data is written at one point and read at another.
 Q: What happens if I try to read from a pipe and there's nothing in there?
 A: Your program will wait until something '''is''' there.
 Q: How does the parent know when the child is finished?
 A: When the child process dies, the pipe is closed and the <tt>fgets()</tt> command receives an ''End-of-file'', which means the <tt>fgets()</tt> function returns 0, and the loop ends.
 Q: Can parents speak to children?
 A: Absolutely. There is no reason why you can't connect your pipes the other way round, so that the parent sends data to the child process.
 Q: Can you have a pipe that works in both directions at once? That way my parent and child processes could have a two way conversation.
 A: No - you can't do that. Pipes always work in only one direction. But you '''can''' create '''two''' pipes: one from the parent to the child and one from the child to the parent.
 #include <stdio.h>
 int main()
 {
   char name[30];
   printf("Enter your name: ");
   fgets(name, 30, stdin);
   printf("Hello %s\n", name);
   return 0;
 }
 > ./greetings
 Enter your name: ^C
 >
                                            +----------------+
                                            |                |
                                            |                |
                                            |                |                      ---------------
                                            |    Operating   |                 ----/               \----
       +----------------------+             |      System    | interrupt      /                         \
       |    Keyboard          +-------------+                +----------------       greetings program    )
       +----------------------+             |                |  signal        \                         /
                                            |                |                 ----\               /----
                                            |                |                      ---------------
                                            |                |
                                            |                |
                                            +----------------+
 |--------+-------------|
 | Signal | Handler     |
 |--------+-------------|
 | SIGURG | Do nothing  |
 | SIGINT | Call exit() |
 | ...    | ...         |
 #include <stdio.h>
 #include <signal.h>
 #include <stdlib.h>
 void handle_interrupt(int sig)
 {
   puts ("Goodbye cruel world....\n");
   exit(1);
 }
 int main()
 {
   if (signal(SIGINT, handle_interrupt) == SIG_ERR) {
     fprintf(stderr, "Can't map the handler");
     exit(2);
   }
   char name[30];
   printf("Enter your name: ");
   fgets(name, 30, stdin);
   printf("Hello %s\n", name);
   return 0;
 }
 > ./greetings
 Enter your name: ^CGoodbye cruel world....
 >
 Q: If the interrupt handler didn't call exit(), would the program still have ended?
 A: No.
 Q: So I could write a program that completely ignores interrupts?
 A: You could, but it's not a good idea. In general if your program receives an error signal it's best to exit with an error, even if your run some of your own code first.
 SIGINT
 SIGQUIT
 SIGFPE
 SIGTRAP
 SIGSEGV
 SIGWINCH
 SIGTERM
 SIGPIPE
 > ps
 77868 ttys003    0:00.02 bash
 78222 ttys003    0:00.01 ./testprog
 > kill 78222
 > kill -INT 78222
 > kill -SEGV 78222
 > kill -KILL 78222
 raise(SIGTERM);
 alarm(120);
 do_important_busy_work();
 do_more_busy_work();
 signal(SIGALRM, pour_coffee);
 alarm(120);
 ...
 Q: Can I set an alarm for '''less than a second'''?
 A: Yes - but it's a little more complicated. You need to use a different function called setitimer(). It lets you set the process' interval timer directly in either seconds or fractions of a second.
 Q: How do I do that?
 A: Type in <tt>http://tinyurl.com/3o7hzbm</tt> for more details.
 Q: Why is there only one timer for a process?
 A: The timers have to be managed by the operating system kernel and if processes had lots of timers, the kernel would go slower and slower. To prevent this happening the operating system limits each process to one timer.
 Q: Timers let me multi-task?! Great - so I can use them to do lots of things at once?
 A: No. Remember - your process will always ''stop whatever it's doing'' when it handles a signal. That means it is still only doing one thing at a time. We'll see later how you can ''really'' make your code do more than one thing at a time.
 Q: What happens if I set one timer and it had already been set.
 A: Whenever you call the <tt>alarm()</tt> function you reset the timer. That means if you set the alarm for 10 seconds, then a moment later you set it for 10 minutes, the alarm won't fire until 10 minutes are up. The original 10 second timer will be lost.
 signal(SIGTERM, SIG_DFL);
 signal(SIGINT, SIG_IGN);
 #include <stdio.h>
 #include <stdlib.h>
 #include <sys/time.h>
 #include <string.h>
 #include <errno.h>
 #include <signal.h>
 int score = 0;
 void end_game(int sig)
 {
   printf("\nFinal score: %i\n", score);
   ______________________________________
 }
 void times_up(int sig)
 {
   puts("\nTIME'S UP!");
   raise(________________);
 }
 void error(char* msg)
 {
   fprintf(stderr, "%s: %s\n", msg, strerror(errno));
   exit(1);
 }
 int main()
 {
   signal(SIGALRM, ____________);
   signal(SIGINT, ___________);
   srandom (time (0));
   while(1) {
     int a = random() % 11;
     int b = random() % 11;
     char txt[4];
     ____________________
     printf("\nWhat is %i times %i? ", a, b);
     fgets(txt, 4, stdin);
     int answer = atoi(txt);
     if (answer == a * b)
       score++;
     else
       printf("\nWrong! Score: %i\n", score);
   }
   return 0;
 }
 #include <stdio.h>
 #include <stdlib.h>
 #include <sys/time.h>
 #include <string.h>
 #include <errno.h>
 #include <signal.h>
 int score = 0;
 void end_game(int sig)
 {
   printf("\nFinal score: %i\n", score);
   exit(0);
 }
 void times_up(int sig)
 {
   puts("\nTIME'S UP!");
   raise(SIGINT);
 }
 void error(char* msg)
 {
   fprintf(stderr, "%s: %s\n", msg, strerror(errno));
   exit(1);
 }
 int main()
 {
   signal(SIGALRM, times_up);
   signal(SIGINT, end_game);
   srandom (time (0));
   while(1) {
     int a = random() % 11;
     int b = random() % 11;
     char txt[4];
     alarm(5);
     printf("\nWhat is %i times %i? ", a, b);
     fgets(txt, 4, stdin);
     int answer = atoi(txt);
     if (answer == a * b)
       score++;
     else
       printf("\nWrong! Score: %i\n", score);
   }
   return 0;
 }
 > ./math_master
 What is 0 times 1? 0
 What is 6 times 1? 6
 What is 4 times 10? 40
 What is 2 times 3? 6
 What is 7 times 4? 28
 What is 4 times 10? ^C
 Final score: 5
 >
 > ./math_master
 What is 5 times 9? 45
 What is 2 times 8? 16
 What is 9 times 1? 9
 What is 9 times 3?
 TIME'S UP!
 Final score: 3
 >
 Q: Are signals always received in the same order they are sent?
 A: Not if they are sent very close together. The operating system might choose to reorder the signals if it thinks one is more important than the others.
 Q: Is that always true?
 A: It depends on the platform. On most versions of Cygwin, for example, the signals will always be sent and received in the same order. But in general, you shouldn't rely on it.
 Q: If I send the same signal twice, will it be received twice by the process?
 A: Again - it depends. On Linux and the Mac, if same signal is repeated very quickly, the kernel might choose to only send the signal once to the process. On Cygwin it will always send both signals. But again - you should not assume that just because you sent the same signal twice, that it will be received twice.
