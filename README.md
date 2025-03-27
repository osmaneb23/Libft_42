# 📚 Libft - My 42 Core Library

Welcome to my **Libft** repository! This project was part of the **42 curriculum**, where I implemented my own version of essential C standard library functions. It served as a foundation for future projects at 42.

---

## **✅ Project Validation**
- **Validated on:** December 1, 2023  
- **Final Score:** 124/100  
  - Achieved **bonus part** 🎉  
  - One corrector mistakenly gave **123 instead of 125**, leading to an unusual final score.

---

## **📜 Project Overview**
The goal of this project is to recreate essential functions from `<string.h>`, `<stdlib.h>`, and other standard libraries. Additionally, it includes a set of custom functions designed to extend standard C capabilities.

✅ **Mandatory Part:** Reimplement standard C functions like `memset`, `bzero`, `strdup`, `atoi`, etc.  
🚀 **Bonus Part:** Implement linked list utilities (`t_list` struct and related functions).  

### **Key Concepts:**
- **Memory Manipulation:** Handling memory using pointers.
- **String Manipulation:** Implementing and optimizing string operations.
- **Linked Lists:** Creating and managing linked list structures.

---

## **📂 Project Structure**
```
libft/
│── ft_memset.c        # Fill memory with a constant byte
│── ft_bzero.c         # Zero out memory
│── ft_memcpy.c        # Copy memory area
│── ft_memccpy.c       # Copy memory up to a specific character
│── ft_memmove.c       # Safer version of memcpy
│── ft_memchr.c        # Locate a byte in memory
│── ft_memcmp.c        # Compare memory areas
│── ft_strlen.c        # Get the length of a string
│── ft_strdup.c        # Duplicate a string
│── ft_strcpy.c        # Copy a string
│── ft_strncpy.c       # Copy a string with length limit
│── ft_strcat.c        # Concatenate two strings
│── ft_strncat.c       # Concatenate strings with a limit
│── ft_strlcat.c       # Concatenate with size limit (BSD-style)
│── ft_strchr.c        # Locate a character in a string
│── ft_strrchr.c       # Locate last occurrence of a character
│── ft_strstr.c        # Locate a substring
│── ft_strnstr.c       # Locate a substring with a limit
│── ft_strcmp.c        # Compare strings
│── ft_strncmp.c       # Compare strings up to a limit
│── ft_atoi.c          # Convert a string to an integer
│── ft_isalpha.c       # Check if a character is alphabetic
│── ft_isdigit.c       # Check if a character is a digit
│── ft_isalnum.c       # Check if a character is alphanumeric
│── ft_isascii.c       # Check if a character is an ASCII character
│── ft_isprint.c       # Check if a character is printable
│── ft_toupper.c       # Convert character to uppercase
│── ft_tolower.c       # Convert character to lowercase
│── ft_lstnew_bonus.c        # Create a new linked list node (bonus)
│── ft_lstadd_front_bonus.c  # Add a node at the beginning (bonus)
│── ft_lstadd_back_bonus.c   # Add a node at the end (bonus)
│── ft_lstdelone_bonus.c     # Delete a single node (bonus)
│── ft_lstclear_bonus.c      # Clear an entire linked list (bonus)
│── ft_lstiter_bonus.c       # Iterate over a linked list (bonus)
│── ft_lstmap_bonus.c        # Apply function to list elements (bonus)
│── libft.h                  # Header file with function prototypes
│── Makefile                 # Compilation instructions
```

---

## **🛠️ Installation & Usage**
To use the library in your project, clone the repository and compile it.

### **📥 Clone & Compile**
```sh
git clone https://github.com/yourusername/libft.git
cd libft
make
```

### **📌 Compile with Your Project**
After compiling, link `libft.a` when compiling your own C files:

```sh
gcc your_file.c -L. -lft -o your_program
```

---

## **📜 Subject Requirements**
- Must **not** use external libraries (except for `write()`).
- Must follow **Norminette** coding standards.
- No memory leaks allowed.
- Must include a `Makefile` with rules:
  - `all` (compile library)
  - `clean` (remove object files)
  - `fclean` (remove object files & archive)
  - `re` (recompile everything)
  - `bonus` (compile the bonus files)

---

🔥 *Libft was my first big step into serious C programming at 42. Feel free to explore, use, and give feedback!*  
