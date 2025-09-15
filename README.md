# ctoa

ctoa - char to ascii conversion CLI tool (decimal, hex, binary).

---

## Overview
ctoa is a simple CLI tool that prints each character of the input string alongside its ASCII value in decimal, hexadecimal, and binary. It’s designed to show how character encodings work under the hood, focusing on ASCII rather than Unicode.

---

## Why?
This is an educational project. I had a computer science class on Information Encoding, and I got really interested in it. I wanted to automate conversion from decimal to binary, hex, etc.

--

## Features
- ASCII output in decimal
- Conversion to hex, binary

---

## Build
```bash
git clone https://github.com/hoverdd/ctoa.git
cd ctoa
make
```

## Usage
To pass multiple words add quotes (`"hello world"`).
```bash
./ctoa "text" # quotes are useful when you type a lot of text not just a word
``` 

Example:
```bash
./ctoa "i love cats"
   Dec | Hex |  Bin
--------------------
i: 105   69     1101001
 : 32    20     100000
l: 108   6C     1101100
o: 111   6F     1101111
v: 118   76     1110110
e: 101   65     1100101
 : 32    20     100000
c: 99    63     1100011
a: 97    61     1100001
t: 116   74     1110100
s: 115   73     1110011
```

## Future improvements
- Read from a file and stdin, also from pipes
- Colorful output for readabilty


