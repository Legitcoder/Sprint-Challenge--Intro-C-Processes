**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

R - Indicates the process is currently Running in real time.

S - Indicates the process is Sleeping. The process is inactive and taking a break for a set period of time
so for example, Sleep(5) means the process will be inactive for 5 seconds.

Z - Indicates the process is a Zombie. This is a child of a parent. Once the child dies, it sticks around as
a zombie until the parent retrieves the exit integer parameter from the child so for example, exit(3) would
require the parent of the child to retrieve 3 and reap the zombie process.


**2. What is a zombie process?**

A zombie process is a process that sticks around after the child of a parent dies.


**3. How does a zombie process get created? How does one get destroyed?**

A zombie is created when a parent doesn't reap the zombie process of it's child meaning retrieve the exit
integer parameter of its child. It gets destroyed when the parent reaps the zombie process by executing
wait() during it's process to collect the zombie exit integer parameter of its child. Assuming the parent dies
before the child, then the grandfather of all children, process 1 adopts it and handles reaping the zombie
process.



**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

One major advantage of compiled languages is we're thrown errors of our code during compilation as
apposed to during runtime execution for interpreted languages which can be deadly for production.
Compiled Languages are often faster than Interpreted Languages such as Ruby and Python because
they compile into machine code. Also, with compiled languages being statically typed, it ensures
we're using the correct type to avoid errors later while dynamically typed variables in Interpreted languages
can cause unforeseen errors.

