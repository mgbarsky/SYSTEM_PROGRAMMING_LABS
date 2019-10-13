# Pipe Lab
### Exercise 23

<div><h2>Introduction</h2>

<p>In a web application that requires a user to login, the user id and password
must be validated. One approach to validation is to hand the task off to a
separate process. In our case, the program run by the new process is called
<tt>validate</tt>. The <tt>validate</tt> program reads the user id and password
from <tt>stdin</tt>, because if they were given as command-line arguments they
would be visible to programs such as <tt>ps</tt> that inspect the state of the
system. The validate program is given to you in <tt>validate.c</tt>.</p>

<p>Complete <tt>checkpasswd.c</tt>
that reads a user id and password, creates a new process to run the
<tt>validate</tt> program (found in <tt>validate.c</tt>), sends it the user id and
password, and prints a message "Password verified" if the user id and password
matched or either "Invalid password" or "No such user" depending on the return value
of the <tt>validate</tt> program. A sample password
file <em>"pass.txt"</em> is provided.</p>

<p>You will find the following system calls useful: fork, exec, pipe, dup2,
write, wait (along with WIFEXITED, WEXITSTATUS). A simple <tt>Makefile</tt> is provided to compile the
programs.  You may not use <tt>popen</tt> or <tt>pclose</tt> in your solution.
</p>

<p><b>Hint:</b> After reading the comments at the top of <tt>validate.c</tt>, you will want to compile it
and you may want to try running it directly. Notice that validate doesn't print any output. 
The only information it provides comes in the return value of the program. 
The shell variable <tt>$?</tt> holds the return value of the last process.
That means that from the bash prompt, you can type <tt>echo $?</tt> to see
the return value of the program.
</p>

<h2>Finally</h2>

<p>Add the following file: </p>
<ul>
	<li><code>checkpasswd.c</code></li>
</ul>
<p>Commit, and push.</p>
</div>


