# Common Utilities for C Projects

This repository contains **common helper utilities and header files** for C projects.  
It is designed to be **reusable across multiple projects**, providing safe input functions, bit utilities, and other shared functionality.

## Contents

- `input_utils.h` / `input_utils.c`  
  Helper functions for safe console input, including `safeFgets()` that avoids buffer overflow and discards extra characters.

- `bitutils.h`  
  Inline functions and macros for bit manipulation (setting, clearing, toggling bits).

- Other utility headers and source files can be added as needed.

## Features

- Safe input reading from `stdin`  
- Reusable helper functions for multiple projects  
- Lightweight and header-only where possible  
- Designed for C11 standard  

## Usage

1. Include the header file in your project:

`#include "input_utils.h"`

2. Make sure to compile the source files from this repository along with your project:
   gcc -I/path/to/common/include main.c /path/to/common/src/input_utils.c -o main.exe

3. Use the utility functions:

```c
char buffer[100];
if (safeFgets(buffer, sizeof(buffer))) {
    printf("You entered: %s\n", buffer);
} else {
    printf("Input error or too long input.\n");
}
```

## License

- This project is licensed under the Apache License 2.0. See the LICENSE
  file for details.

## Contributing

- Feel free to submit pull requests or issues for improvements, new utilities, or bug fixes.
  The goal is to keep this repo lightweight, reusable, and safe for C projects.