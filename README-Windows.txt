Written 07/26/14
This book was mainly written using a Unix based OS - which Windows is not. Thus
while going through this book you are likely to encounter issues at some point 
or another.

The recommended solution is to download VirtualBox and run Ubuntu, Lubuntu(If
you need something more lightweight or running Ubuntu is slow for you), or a 
linux distro of your choice inside a virtual machine.

If your machine cannot deal with the amount of overhead the above requires, try 
out cygwin which runs natively or look into booting from an Ubuntu or other 
Linux distribution's livecd (Won't save), or even better look into installing it 
alongside Windows.

If you wish to compile native Windows programs using your source code, I 
recommend TDM-GCC found here http://sourceforge.net/projects/tdm-gcc/?source=dlp 
instead of minGW as the book recommends. In truth, TDM-GCC is more of a wrapper 
for minGW, but an up-to date, much easier to install one. It sets up your path 
variable for you so you can run gcc(and others) from anywhere in the OS. Also 
you can compile a 32 bit or a 64 bit binary, which you cannot do with minGW.
However note that this solution will run into issues later in the book, for 
example, with valgrind, as it is a somewhat complicated process to get valgrind 
to work on windows using minGW.

Some issues you may encounter running natively(i.e. not via a cygwin tty) on 
Windows(This list is by no means complete):
Redirecting standard input works differently, and you will find windows won't 
let you simply use < to redirect the standard input. If you have access to 
Windows powershell (And if not you can just download it via Microsoft), you can 
use cat to accomplish this task by using, for example "cat in.txt | .\bar.exe > 
out.txt"
