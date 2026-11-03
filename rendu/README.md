*This project has been created as part of the 42 curriculum by sel-hall.*

# Libft

## Description

Libft is the first project of the 42 curriculum. Its goal is to build a personal C library containing useful functions that will be reused in later projects.

Each file of the library implements one function. While writing them, I learned how to:
- use casts,
- allocate and free memory with `malloc` and `free`,
- manipulate linked lists.

## Instructions

To compile the library, run the following commands at the root of the project:

```bash
make        # compiles the library (libft.a)
make bonus  # compiles the library with the bonus functions (linked lists)
make clean  # removes the object files (.o)
make fclean # removes the object files and libft.a
make re     # recompiles everything from scratch
```

To use the library in your own code, include the header and link the archive:

```bash
cc main.c -L. -lft -o program
```

## Resources

- Videos from the YouTube channel *Portfolio Courses*, which helped me write some functions.
- The website *gladir*, used as a reference for function behavior.
- Peer-to-peer evaluations, which were important to understand the most complicated functions.

**Use of AI:** I used AI to help me with some parts of a few functions, to help me debug my code, and to correct this README (spelling and grammar).
