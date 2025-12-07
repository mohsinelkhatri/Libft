<!DOCTYPE html>
<html lang="en">
<body>

<h1 align="center">📚 Libft – 42 Project</h1>

<!-- Badges -->
<p align="center">
    <img src="https://img.shields.io/badge/Language-C-blue?style=flat-square">
  <img src="https://img.shields.io/badge/School-1337-black?style=flat-square">
    <img src="https://img.shields.io/badge/School-42-black?style=flat-square">
    <img src="https://img.shields.io/badge/Status-Completed-success?style=flat-square">
  
</p>

<h2 align="center">🚀 About the Project</h2>
<p>
    <strong>Libft</strong> is a foundational project at <strong>42</strong> where students rebuild 
    essential C standard library functions and expand them with useful utilities.
    It strengthens skills in memory management, pointers, strings, and data structures.
</p>

<ul>
    <li>Reimplementation of standard C library functions</li>
    <li>Extra string and memory manipulation utilities</li>
    <li>Linked list library (bonus)</li>
    <li>Reusable foundation for future 42 projects</li>
</ul>

<h2 align="center">📁 Project Structure</h2>
<pre>
libft/
│── ft_*.c
│── libft.h
└── Makefile
</pre>

<h2 align="center">🧠 What I Learned</h2>
<ul>
    <li>Internal behavior of libc functions</li>
    <li>Memory allocation & pointer manipulation</li>
    <li>Working with arrays and linked lists</li>
    <li>Modular and reusable C development</li>
    <li>Building a static library using Make</li>
</ul>

<h2 align="center">🛠️ Installation</h2>
<pre>
git clone https://github.com/&lt;mohsinelkhatri&gt;/libft.git
cd libft
make
</pre>

<p>This will generate the file <strong>libft.a</strong>.</p>

<p>To compile the bonus (linked list functions):</p>
<pre>make bonus</pre>

<h2 align="center">📌 Usage Example</h2>
<pre>
#include "libft.h"
#include &lt;stdio.h&gt;

int main(void)
{
    char *str = "Hello, Libft!";
    printf("Length: %zu\n", ft_strlen(str));
    char *copy = ft_strdup(str);
    printf("Copy: %s\n", copy);
    free(copy);
    return 0;
}
</pre>

<h2 align="center">📦 Included Functions</h2>

<h3> 🧩 Part 1 – Libc Functions</h3>
<ul> 
    <li>Character checks: isalpha, isdigit, isalnum, isascii, isprint</li>
    <li>Memory & string ops: memset, memcpy, memmove, strlen, strlcpy, strlcat…</li>
    <li>Conversions: atoi, toupper, tolower</li>
    <li>Memory allocation: calloc, strdup</li>
</ul>

<h3>🔧 Part 2 – Additional Functions</h3>
<ul>
    <li>String utilities: substr, strjoin, strtrim, split, itoa</li>
    <li>Output functions: putchar_fd, putstr_fd, putendl_fd, putnbr_fd</li>
</ul>

<h3 >🧱 Bonus – Linked List Functions</h3>
<ul>
    <li>lstnew, lstadd_front, lstsize, lstlast, lstadd_back</li>
    <li>lstdelone, lstclear, lstiter, lstmap</li>
</ul>

<h2 align="center">📜 Makefile Rules</h2>
<ul>
    <li><strong>make</strong> – Builds libft.a</li>
    <li><strong>make clean</strong> – Removes .o files</li>
    <li><strong>make fclean</strong> – Removes .o + libft.a</li>
    <li><strong>make re</strong> – Rebuilds everything</li>
    <li><strong>make bonus</strong> – Adds linked list functions</li>
</ul>

<h2 align="center">⭐ Support</h2>
<p>If you like this project, consider starring the repository!</p>
</body>
</html>
