# Lab 9. Signals
The goal of this exercise is to write a simple math game, while using custom signal handlers to keep track of time.

Start with simple infinite loop, in which you ask the player to multiply two random integer numbers randomly selected from the interval [0,10]. To accomplish this, you may use: <code>rand() % 11</code>. Note that sequence of pseudorandom numbers created with <tt>rand</tt> repeats itself each time you are running your program, and to avoid this you need to change the seed of the sequence by using: <code>srandom((unsigned int) time(NULL));</code> before your loop begins. Define a variable to store the total game score: the number of correct answers. Check if the result of multiplication is correct, and display the corresponding message, including the current game score. 

Now, before the loop begins, set up an alarm clock to raise SIGALRM signal in 30 seconds: <code>alarm(30);</code>. Override the default reaction to SIGALRM by implementing a custom function which will print the message: "Time is up!", and then will raise SIGINT signal. Override the default handler for SIGINT so the program displays the total score and then exits.




