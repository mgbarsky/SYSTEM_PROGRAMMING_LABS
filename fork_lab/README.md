# Fork lab 
### Exercise 21
<div>
<h2>Introduction</h2>

<p>The purpose of this exercise is to play with fork, and get a feeling for how it works.  It should be a fairly short lab.</p>

<p>For this lab you are asked to answer some questions. Place the answers to the
questions in a plain text file called <code>answers.txt</code>. Please make sure the answers are clearly labeled.</p>

<p>Use the Makefile to build the provided programs.</p>

<h2>1. Run the <code>simplefork</code> program</h2>

<p>Open <code>simplefork.c</code> in your favorite editor. Read it through to
figure out what it is doing. Compile and run it a few times. Recall from lecture
that it is up to the operating system to decide whether the parent or the child
runs first after the fork call, and it may change from run to run.</p>

<p>Question 1: Which lines of output are printed more than once?</p>

<p>Question 2: Write down all the different possible orders for the output 
Note that this includes output orders that you may not be able to
reproduce.</p>

<h2>2. Fork in a loop</h2>

<p>The program in <code>forkloop.c</code> takes one command-line argument which
is the number of iterations of the loop that calls fork. Try it first with 2, 3 or
4. Notice that the shell prompt sometimes appears in the middle of the output.
That happens because the parent process exits before some of the children get a
chance to print their output.</p>

<p>Question 3: How many processes are created including the original parent when
<code>forkloop</code> is called with 2, 3, and 4 as arguments?</p>

<p>Question 4: Use an ASCII diagram to show the processes and their
relationships when you run with 3 processes. For example, the diagram for
<code>simplefork</code> with two processes would be (assuming the process id of the parent is 414
and the process id of the child is 416):</p>

<pre>
	414 -> 416
</pre>


<h2>2. Make the parent create all the new processes</h2>

<p>Modify the <code>parentcreates.c</code> program so that the new children do
not create additional children. Only the original parent will create children.
Both the parent and the child will print the output line. The resulting diagram
will look something like the following when <code>parentcreates 3</code> is
called. Note that the child process ids will not necessarily be in sequence.</p>

<pre>
	414 -> 416
	414 -> 417
	414 -> 420
</pre>

<h2>3. Make each child create a new process</h2>

<p>Modify the <code>childcreates.c</code> program so that the each new child
creates a new process. A parent does not create any more processes. All
processes will print the output line. The resulting diagram will look something
like the following when <code>childcreates 3</code> is called:</p>

<pre>
	414 -> 416 -> 417 -> 420
</pre>

<h2>4. Add wait:</h2>

<p>The information provided by the <code>getppid</code> system call may not
always give you the information you expect. If a process's parent has
terminated, then the process gets "adopted" by the init process which has a
process id of 1. So when you see the ppid of a process is 1, that means that its
parent has terminated.</p>

<p>A process can wait for its children to terminate. If a process wants to wait
until all its children have terminated, it needs to call wait once for each
child. Add the appropriate <code>wait</code> calls to both <code>childcreates</code> and <code>parentcreates</code> to ensure that each
parent does not terminate before its children.</p>

<p>Change your program to delay calling <code>wait</code> as long as possible. In
other words if the process has other work to do like creating more children, it
should create the children first and then call <code>wait</code>.</p>


<h2>Finally</h2>

<p>Commit the following files:	</p>
<ul>
	<li><code>answers.txt</code></li>
	<li><code>childcreates.c</code></li>
	<li><code>parentcreates.c</code></li>
</ul>

</div>
