<div align="center">

# 🏊 42 Piscine

**C and Shell exercises from the 42 admission Piscine — scripts, algorithms and a lot of pointers.**

![Language](https://img.shields.io/badge/language-C-00599C?style=flat-square)
![Shell](https://img.shields.io/badge/shell-bash-4EAA25?style=flat-square)
![Norminette](https://img.shields.io/badge/norm-42%20standard-2b9348?style=flat-square)
![Stars](https://img.shields.io/github/stars/ifrankerem/42PISCINE?style=flat-square)

</div>

---

## 📋 Table of Contents

- [About](#about)
- [Curriculum](#curriculum)
- [Getting Started](#getting-started)
- [Layout](#layout)
- [Author](#author)

---

## 📖 About

A snapshot of my work during the **42 Istanbul Piscine** — the exam-driven admission month. Every exercise is graded by the **Moulinette**, so the code is strict: 42 Norminette compliant, built with `-Wall -Wextra -Werror`, no forbidden functions, no leaks.

The arc goes from printing characters to linked lists and recursion. The Shell modules sit alongside because the Piscine treats the terminal as part of the language.

---

## 📚 Curriculum

| Module | Topic |
|---|---|
| `SHELL00` | shell basics — permissions, file discovery |
| `SHELL01` | scripting, environment, text tools |
| `C00` | `write`, character output, basic loops |
| `C01` | pointers and pointer arithmetic |
| `C02` | strings — copy, compare, concatenate |
| `C03` | string concatenation, `strncat` |
| `C04` | `atoi`, `strncmp`, number handling |
| `C05` | factorials, recursion, Fibonacci |
| `C06` | `argv` and argument printing |
| `C07` | dynamic strings, `strdup`, `strjoin` |
| `C08` | headers and declaration files |
| `C09` | libraries and Makefiles |
| `RUSH00` | group project — printable ASCII rectangles |

---

## 🚀 Getting Started

**Build a single C exercise**

```sh
cd C00/ex04
gcc -Wall -Wextra -Werror *.c -o ex04
./ex04
```

**Run a shell exercise**

```sh
cd SHELL01/ex03
sh ex03.sh
```

---

## 🗂 Layout

```
42PISCINE/
├── C00 … C09      # C exercises, one directory per evaluation
├── SHELL00/       # discovery and permissions
├── SHELL01/       # scripting and text processing
└── RUSH00/        # weekend team project
```

---

## 👤 Author

**İrfan Kerem Arslan** — [@ifrankerem](https://github.com/ifrankerem)

---

## 📄 License

Built for the **42 Piscine**. Shared for learning and portfolio purposes.

---

## 🙏 Acknowledgements

- [awesome-readme](https://github.com/matiassingers/awesome-readme) — structure inspiration for this README