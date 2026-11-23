# BHU MSC CSA — Course Notes & Assignments

Semester 1 study material for the **M.Sc. Computer Science / Applications** program at Banaras Hindu University (BHU). The repository collects lecture PDFs, notes, assignments, and C programs written while studying the first-semester courses.

- **Author:** Ashish Kumar Singh (Roll No. 09)
- **Repository:** [BHU-MSC-CSA-CourseNotes](https://github.com/realaashishly/BHU-MSC-CSA-CourseNotes)
- **Contents:** 3 subjects, 117 course files (~64.6 MB), including 60 C programs and 32 PDFs
- **Branch:** `main`

## Repository structure

```text
BHU-MSC-CSA CourseMaterial/
├── README.md
├── .gitattributes
└── sem-1/
    ├── Database Management Systems/
    │   ├── Lectures/       23 PDFs (L1–L18, L20 variants, NFs, ORDBMS handout)
    │   ├── Notes/          1 Markdown notes file + 1 image
    │   └── Practicals/     4 SQL demo PDFs + 1 HTML class sheet
    ├── Introduction to C and Java/
    │   ├── Books/          c lang.pdf
    │   └── C Programming Languages/
    │       ├── c assignments/       Assignment I (6 programs + DOCX)
    │       ├── c assignment 2/      Assignment II (15 programs + source PDF)
    │       └── Simple C Questions/  practice programs by topic
    │           ├── Basics/arrays/           10 programs
    │           ├── Basic_Manipulation/       7 programs + binaries
    │           ├── L03_Duplicates_and_Frequency/ 7 programs + binaries
    │           ├── Practice_Questions/       9 programs + binary
    │           ├── data_structures/          5 programs + binaries
    │           ├── hello.c, hello, question.txt
    └── Probability/
        ├── Books/          PROB AND STATS.pdf
        ├── ch-01/          (reserved for chapter 1)
        ├── ch-02/          2-Combinatorics.pdf
        └── ch-03/          3-IntroProbability.pdf + simulate.py
```

## Subjects

### 1. Database Management Systems
- **Lectures:** 23 PDFs covering lecture series L1–L18, multiple versions of L20, normalization forms (`NFs.pdf`), and an ORDBMS study handout.
- **Notes:** `Notes/dbms.md` — concise notes starting with data, information, and knowledge.
- **Practicals:** SQL class demos covering queries, transactions (`COMMIT`, `ROLLBACK`, `SAVEPOINT`), and a saved HTML class sheet.

### 2. Introduction to C and Java
- **Book:** `Books/c lang.pdf`.
- **Assignment I:** 6 programs on data types, `sizeof`, implicit conversion, explicit casting, overflow, and type modifiers; original `Assignment_I_C_Programming.docx`.
- **Assignment II:** 15 programs with the original `C-Programming-Assignment-II.pdf`. Topics include number/alphabet patterns, triangles, menu-driven prime/Armstrong/palindrome checks, arrays and 3×3 matrices, string processing without `string.h`, recursion vs iteration, call by value/reference, structures and unions, dynamic memory, file handling, linked lists, bitwise operators, and macros/enums/typedefs/CLI arguments.
- **Simple C Questions:** a progressive array/DSA problem set documented in `question.txt`, with solutions organized into:
  - `Basics/arrays` — sum, max/min, average, even/odd, search, frequency, etc.
  - `Basic_Manipulation` — reverse, copy, second largest/smallest, sorting, insert.
  - `L03_Duplicates_and_Frequency` — duplicates, first duplicate, non-repeating, distinct elements, counting.
  - `Practice_Questions` — area/interest/salary/ASCII programs, matrix, perfect number.
  - `data_structures` — array, linked list, stack, queue, string implementations.

  Compiled executables are kept next to their `.c` sources for quick reference.

### 3. Probability
- `Books/PROB AND STATS.pdf` — textbook/reference.
- `ch-02/2-Combinatorics.pdf` — combinatorics chapter.
- `ch-03/3-IntroProbability.pdf` — introduction to probability, plus `simulate.py` for simulation work.

## Compiling the C programs

A C compiler such as GCC (MinGW on Windows) is required.

```bash
# Windows (MinGW)
gcc -std=c11 -Wall -Wextra program.c -o program.exe
program.exe

# Linux / macOS
gcc -std=c11 -Wall -Wextra program.c -o program
./program
```

Example — Assignment II, question 1:

```bash
cd "sem-1/Introduction to C and Java/C Programming Languages/c assignment 2"
gcc -std=c11 01_diamond_numbers.c -o diamond
./diamond          # or diamond.exe on Windows
```

Programs that take input (for example `05_prime_armstrong_palindrome_menu.c`, `07_string_palindrome_counts_reverse.c`, and `12_file_handling.c`) prompt on the terminal. `12_file_handling.c` creates and reads `data.txt` in the current directory. `15_macros_enum_typedef_args.c` expects two command-line numbers, e.g. `./program 15 25`.

All Assignment II programs were verified to compile with `gcc -std=c11 -Wall -Wextra`.

## Repository notes

- `.gitattributes` marks PDFs, images, DOCX, EXE, and ZIP files as binary to prevent line-ending conversion on checkout.
- File names containing spaces are intentional and preserved; quote paths when working in a terminal.
- `ch-01/` is currently an empty placeholder for future Probability chapter 1 material.
- This repository is for personal/educational study use.
