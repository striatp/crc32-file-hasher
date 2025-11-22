# CRC32 File Hasher

A lightweight, high-performance file hashing tool implemented in C and x86-64 Assembly.
This project computes the CRC32 checksum of any file. This project was made for self educational purposes; learn how CRC32 works under the hood and make a small CLI tool using C.

## Usage

If you wish to clone and use this repository for some reason, the steps to do so are listed below.

1. Clone the repository:
```
git clone https://github.com/striatp/crc32-file-hasher.git
```
2. Compile and link source files with NASM and Clang:
```
make compile
```
3. Run the executable
```
make execute File=path/to/file
```

## License

This repository is released into the public domain under the [MIT License](https://opensource.org/license/mit), allowing anyone to use, modify, or distribute the code freely.
