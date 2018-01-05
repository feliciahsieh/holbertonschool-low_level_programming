<h1 class="gap">0x15. C - Simple Shell - MOVED TO https://github.com/srinitude/simple_shell</h1>


<h4 class="task">
    0. README, man, AUTHORS
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><ul>
<li>Write a <code>README</code></li>
<li>Write a <code>man</code> for your shell.</li>
<li>You should have an <code>AUTHORS</code> file at the root of your repository, listing all individuals having contributed content to the repository. Format, see <a href="/rltoken/CksJEuyP-_LW9sRcPAXWgQ" target="_blank" title="Docker">Docker</a></li>
</ul>


<h4 class="task">
    1. Betty would be proud
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a beautiful code that passes the Betty checks</p>


<h4 class="task">
    2. Simple shell 0.1
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a UNIX command line interpreter.</p><ul>
<li>Usage: <code>simple_shell</code></li>
</ul><p>Your Shell should:</p><ul>
<li>Display a prompt and wait for the user to type a command. A command line always ends with a new line.</li>
<li>The prompt is displayed again each time a command has been executed.</li>
<li>The command lines are simple, no semi-columns, no pipes, no redirections or any other advanced features.</li>
<li>The command lines are made only of one word. No arguments will be passed to programs.</li>
<li>If an executable cannot be found, print an error message and display the prompt again.</li>
<li>Handle errors.</li>
<li>You have to handle the “end of file” condition (<code>Ctrl+D</code>)</li>
</ul><p>You don’t have to:</p><ul>
<li>use the <code>PATH</code></li>
<li>implement built-ins</li>
<li>handle special characters : <code>"</code>, <code>'</code>, <code>`</code>, <code>\</code>, <code>*</code>, <code>&amp;</code>, <code>#</code></li>
<li>be able to move the cursor</li>
<li>handle commands with arguments</li>
</ul>


<h4 class="task">
    3. Simple shell 0.1.1
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 0.1 +</p><ul>
<li>Write your own <code>getline</code> function</li>
<li>Use a buffer to read many chars at once and call the least possible the <code>read</code> system call</li>
<li>You will need to use <code>static</code> variables</li>
<li>You are not allowed to use <code>getline</code></li>
</ul><p>You don’t have to:</p><ul>
<li>be able to move the cursor</li>
</ul>


<h4 class="task">
    4. Simple shell 0.2
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Simple shell 0.1 +</p><ul>
<li>Handle command lines with arguments</li>
</ul>


<h4 class="task">
    5. Simple shell 0.2.1
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 0.2 +</p><ul>
<li>You are not allowed to use <code>strtok</code></li>
</ul>


<h4 class="task">
    6. Simple shell 0.3
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Simple shell 0.2 +</p><ul>
<li>Handle the <code>PATH</code></li>
</ul>


<h4 class="task">
    7. Simple shell 0.4
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Simple shell 0.3 +</p><ul>
<li>Implement the <code>exit</code> buit-in, that exits the shell</li>
<li>Usage: <code>exit</code></li>
<li>You don’t have to handle any argument to the built-in <code>exit</code></li>
</ul>


<h4 class="task">
    8. Simple shell 0.4.1
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 0.4 +</p><ul>
<li>handle arguments for the built-in <code>exit</code></li>
<li>Usage: <code>exit status</code>, where <code>status</code> is an integer used to exit the shell</li>
</ul>


<h4 class="task">
    9. Simple shell 0.4.2
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 0.4 +</p><ul>
<li>Handle <code>Ctrl+C</code>: your shell should not quit when the user inputs <code>^C</code></li>
</ul><p>man 2 <code>signal</code>.</p>


<h4 class="task">
    10. Simple shell 1.0
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Simple shell 0.4 +</p><ul>
<li>Implement the <code>env</code> <strong>built-in</strong>, that prints the current environment</li>
</ul>


<h4 class="task">
    11. setenv, unsetenv
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 1.0 +</p><p>Implement the <code>setenv</code> and <code>unsetenv</code> builtin commands</p><ul>
<li><code>setenv</code>
<ul>
<li>Initialize a new environment variable, or modify an existing one</li>
<li>Command syntax: <code>setenv VARIABLE VALUE</code></li>
<li>Should print something on stderr on failure</li>
</ul></li>
<li><code>unsetenv</code>
<ul>
<li>Remove a environment variable</li>
<li>Command syntax: <code>unsetenv VARIABLE</code></li>
<li>Should print something on stderr on failure</li>
</ul></li>
</ul>


<h4 class="task">
    12. cd
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 1.0 +</p><p>Implement the builtin command <code>cd</code>:</p><ul>
<li>Changes the current directory of the process.</li>
<li>Command syntax: <code>cd [DIRECTORY]</code></li>
<li>If no argument is given to <code>cd</code> the command must be interpreted like <code>cd $HOME</code></li>
<li>You have to handle the command <code>cd -</code></li>
<li>You have to update the environment variable <code>PWD</code> when you change directory</li>
</ul><p><code>man chdir</code>, <code>man getcwd</code></p>


<h4 class="task">
    13. ;
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 1.0 +</p><ul>
<li>Handle the commands separator <code>;</code></li>
</ul>


<h4 class="task">
    14. &amp;&amp; and ||
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 1.0 +</p><ul>
<li>Handle the <code>&amp;&amp;</code> and <code>||</code> shell logical operators</li>
</ul>


<h4 class="task">
    15. alias
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 1.0 +</p><ul>
<li>Implement the <code>alias</code> builtin command</li>
<li>Usage: <code>alias [name[='value'] ...]</code>
<ul>
<li><code>alias</code>: Prints a list of all aliases, one per line, in the form <code>name='value'</code></li>
<li><code>alias name [name2 ...]</code>: Prints the aliases <code>name</code>, <code>name2</code>, etc 1 per line, in the form <code>name='value'</code></li>
<li><code>alias name='value' [...]</code>: Defines an alias for each <code>name</code> whose <code>value</code> is given. If <code>name</code> is already an alias, replaces its value with <code>value</code></li>
</ul></li>
</ul>


<h4 class="task">
    16. Variables
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 1.0 +</p><ul>
<li>Handle variables replacement</li>
<li>Handle the <code>$?</code> variable</li>
<li>Handle the <code>$$</code> variable</li>
</ul>


<h4 class="task">
    17. Comments
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 1.0 +</p><ul>
<li>Handle comments (<code>#</code>)</li>
</ul>


<h4 class="task">
    18. help
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 1.0 +</p><ul>
<li>Implement the <code>help</code> buit-in</li>
<li>Usage: <code>help [BUILTIN]</code></li>
</ul>


<h4 class="task">
    19. history
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 1.0 +</p><ul>
<li>Implement the history built-in, without any argument</li>
<li>The <code>history</code> built-in displays the history list, one command by line, preceded with line numbers (starting at <code>0</code>)</li>
<li>On <code>exit</code>, write the entire history, without line numbers, to a file named <code>.simple_shell_history</code> in the directory <code>$HOME</code></li>
<li>When the shell starts, read the file <code>.simple_shell_history</code> in the directory <code>$HOME</code> if it exists, and set the first line number to the total number of lines in the file modulo <code>4096</code></li>
</ul>


<h4 class="task">
    20. File as input
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Simple shell 1.0 +</p><ul>
<li>Usage: <code>simple_shell [filename]</code></li>
<li>Your shell can take a file as a command line argument</li>
<li>The file contains all the commands that your shell should run before exiting</li>
<li>The file should contain one command per line</li>
<li>In this mode, the shell should not print a prompt and should not read from <code>stdin</code></li>
</ul>


<h4 class="task">
    21. What happens when you type ls -l in the shell
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a blog post describing step by step what happens when you type <code>ls -l</code> and hit Enter in a shell.
Try to explain every step you know of, going in as much details as you can, give examples and draw diagrams when needed.
You should merge your previous knowledge of the shell with the specifics of how it works under the hoods (including syscalls).</p><ul>
<li>Have at least one picture, at the top of the blog post</li>
<li>Publish your blog post on Medium or LinkedIn</li>
<li>Share your blog post at least on Twitter and LinkedIn</li>
<li>Only one blog post by team</li>
<li>The blog post must be done and published before the first deadline (it will be part of the manual review)</li>
</ul><p>When done, please add all urls below (blog post, tweet, etc.)</p><div class="blog_post_div">
<h4> Add URLs here:</h4>
<div class="form-group row">
<div class="col-sm-11">
<input class="form-control" id="input_1053" type="text" value=""/>
</div>
<div class="col-sm-1">
<button class="add_task_url" data-task-id="1053" data-task-requesting="0" data-user-id="214" type="button">
<span aria-hidden="true" class="glyphicon glyphicon-plus"></span>
</button>
</div>
</div>
<ul class="list_1053">
<li>
<button class="remove_blog_post" data-task-id="1053" data-task-requesting="0" data-task-url-id="106" id="1053" type="button">
<span aria-hidden="true" class="glyphicon glyphicon-minus"></span>
</button>
<a href="https://medium.com/@feliciaSWE/linux-command-ls-c-930cf1d7d8a6" target="_blank">https://medium.com/@feliciaSWE/linux-command-ls-c-930cf1d7d8a6</a>
</li>
<li>
<button class="remove_blog_post" data-task-id="1053" data-task-requesting="0" data-task-url-id="114" id="1053" type="button">
<span aria-hidden="true" class="glyphicon glyphicon-minus"></span>
</button>
<a href=" https://github.com/srinitude/shellgame.git" target="_blank"> https://github.com/srinitude/shellgame.git</a>
</li>
</ul>
</div>
<h4 class="task">
    22. Test suite
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Build a test suite for your shell.</p><ul>
<li>The test suite should cover every tasks from <code>0.</code> to <code>20.</code></li>
<li>The test suite should cover every regular cases (many different examples) and edge cases possible</li>
<li>The entire class will work on the same test suite. Use only one repository (don’t forget the <code>README.md</code> file)</li>
<li>Start adding tests asap and not just before the deadline in order to help everyone from day 0</li>
<li>You can take (or fork) inspiration from <a href="/rltoken/3968uYdoP1XylGPBqmAt5g" target="_blank" title="this example">this example</a>, but it is not mandatory to follow this format/way</li>
<li>Adopt a style and be consisten. You can for instance follow this <a href="/rltoken/XqQBdx22RsM8ijg7JNwasQ" target="_blank" title="style guide">style guide</a>. If you chose a style that already exist, add it to the README in a style section. If you write your own, create a wiki page attached to the project and refer to it in the README style section.

<ul>
<li>If you choose to use <a href="/rltoken/3968uYdoP1XylGPBqmAt5g" target="_blank" title="this code">this code</a>, make sure to update the style accordingly</li>
</ul></li>
<li>You should have an <code>AUTHORS</code> file, listing all individuals having contributed content to the repository. Format, see <a href="/rltoken/CksJEuyP-_LW9sRcPAXWgQ" target="_blank" title="Docker">Docker</a></li>
</ul><p>This is a task shared by everyone in the class. Everyone will get the same score for this task. <strong>Go team!</strong></p>