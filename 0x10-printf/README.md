<h1 class="gap">0x10. C - printf</h1>


<h4 class="task">
    0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that produces output according to a format.</p><ul>
<li>Prototype: <code>int _printf(const char *format, ...);</code></li>
<li>Returns: the number of characters printed (excluding the null byte used to end output to strings)</li>
<li>write output to stdout, the standard output stream</li>
<li><code>format</code> is a character string. The format string is composed of zero or more directives. See <code>man 3 printf</code> for more detail. You need to handle the following conversion specifiers: 

<ul>
<li><code>c</code></li>
<li><code>s</code></li>
<li><code>%</code></li>
</ul></li>
<li>You don’t have to reproduce the buffer handling of the C library <code>printf</code> function</li>
<li>You don’t have to handle the flag characters</li>
<li>You don’t have to handle field width</li>
<li>You don’t have to handle precision</li>
<li>You don’t have to handle the length modifiers</li>
</ul>


<h4 class="task">
    1. Education is when you read the fine print. Experience is what you get if you don't
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Handle the following conversion specifiers:</p><ul>
<li><code>d</code></li>
<li><code>i</code></li>
<li>You don’t have to handle the flag characters</li>
<li>You don’t have to handle field width</li>
<li>You don’t have to handle precision</li>
<li>You don’t have to handle the length modifiers</li>
</ul>


<h4 class="task">
    2. Just because it's in print doesn't mean it's the gospel
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Create a man page for your function.</p>


<h4 class="task">
    3. With a face like mine, I do better in print
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the following custom conversion specifiers:</p><ul>
<li><code>b</code>: the unsigned int argument is converted to binary</li>
</ul>


<h4 class="task">
    4. What one has not experienced, one will never understand in print
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the following conversion specifiers:</p><ul>
<li><code>u</code></li>
<li><code>o</code></li>
<li><code>x</code></li>
<li><code>X</code></li>
<li>You don’t have to handle the flag characters</li>
<li>You don’t have to handle field width</li>
<li>You don’t have to handle precision</li>
<li>You don’t have to handle the length modifiers</li>
</ul>


<h4 class="task">
    5. Nothing in fine print is ever good news
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Use a local buffer of 1024 chars in order to call <code>write</code> as little as possible.</p>


<h4 class="task">
    6. My weakness is wearing too much leopard print
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the following custom conversion specifier:</p><ul>
<li><code>S</code> : prints the string.</li>
<li>Non printable characters (0 &lt; ASCII value &lt; 32 or &gt;= 127) are printed this way: <code>\x</code>, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)</li>
</ul>


<h4 class="task">
    7. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the following conversion specifier: <code>p</code>.</p><ul>
<li>You don’t have to handle the flag characters</li>
<li>You don’t have to handle field width</li>
<li>You don’t have to handle precision</li>
<li>You don’t have to handle the length modifiers</li>
</ul>


<h4 class="task">
    8. The big print gives and the small print takes away
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the following flag characters for non-custom conversion specifiers:</p><ul>
<li><code>+</code></li>
<li>space</li>
<li><code>#</code></li>
</ul>


<h4 class="task">
    9. Sarcasm is lost in print
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the following length modifiers for non-custom conversion specifiers:</p><ul>
<li><code>l</code></li>
<li><code>h</code></li>
</ul><p>Conversion specifiers to handle: <code>d</code>, <code>i</code>, <code>u</code>, <code>o</code>, <code>x</code>, <code>X</code></p>


<h4 class="task">
    10. Print some money and give it to us for the rain forests
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the field width for non-custom conversion specifiers.</p>


<h4 class="task">
    11. The negative is the equivalent of the composer's score, and the print the performance
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the precision for non-custom conversion specifiers.</p>


<h4 class="task">
    12. It's depressing when you're still around and your albums are out of print
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the <code>0</code> flag character for non-custom conversion specifiers.</p>


<h4 class="task">
    13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the <code>-</code> flag character for non-custom conversion specifiers.</p>


<h4 class="task">
    14. Print is the sharpest and the strongest weapon of our party
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the following custom conversion specifier:</p><ul>
<li><code>r</code> : prints the reversed string</li>
</ul>


<h4 class="task">
    15. The flood of print has turned reading into a process of gulping rather than savoring
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Handle the following custom conversion specifier:</p><ul>
<li><code>R</code>: prints the rot13'ed string</li>
</ul>


<h4 class="task">
    16. *
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>All the above options work well together.</p>
