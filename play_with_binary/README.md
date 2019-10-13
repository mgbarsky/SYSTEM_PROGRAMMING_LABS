# Play with binary
### Exercise 20

The purpose of this exercise is to explore the difference between writing in binary with <code>fwrite</code> and writing characters with <code>fprintf</code>.

Write a program in file <em>play_with_binary.c</em> that declares an integer variable <code>i</code> and uses <code>fprintf</code> to print the value of <code>i</code> followed by a newline to a file named <em>outputFile</em>. Set the value of <code>i</code> to 12 before you print it out. From your favourite text editor open <em>outputFile</em> and look at its contents. Now, look at the file's contents using the command:<br> <code>od -A d -c outputFile</code>. <br>How many bytes are in the file? You can see the total from the <code>od</code> output or you can use <code>ls</code> or <code>wc</code>. Be sure that you understand each command.

Add to your program so that it <b>also</b> prints out the value of <code>i</code> in binary using <code>fwrite</code>. Again look at outputFile from your favourite editor and using <code>od -A d -c outputFile</code>. What is the size of the file now? What happens when you change the value of <code>i</code> to 133? What about 558580545? At what point does the character representation of an integer take more space than its binary representation? If you don't understand what is going on here, ask a friend or your instructor.

###### The Value of a Name
Add to your program so that it creates and opens a file <em>nameFile</em>. Into this file, write your full name. Close the file. Check what you have written by looking at the file contents with an editor or from the command line with <code>cat</code>, <code>more</code> or <code>od</code>.

In the same program, open <em>nameFile</em> again - this time for reading. Using <code>fread</code>, read the first 4 bytes into an integer variable and print out the value of the variable. Add code to check the return value from the <code>fread</code> call to make sure that you have successfully read 4 bytes. Add a loop that continues to read and print integers, until you have read all of nameFile. <br>HINT: Use the return value from fread in the loop condition expression. Finally, to discover the "secret" value of your name, add together all the integers. Add code to print to standard out, the secret value of your name.

Push <em>play_with_binary.c</em> and your file <em>nameFile</em>.

