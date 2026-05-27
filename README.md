# compressor_decompressor
Run-Length Encoding (RLE) compressor and decompressor in C using standard input/output. Supports compression and decompression via command-line arguments.
=======
# 📦 RLE Compressor & Decompressor (C)

This project implements a simple **Run-Length Encoding (RLE)** compression and decompression tool written in C.

---

# 🚀 What it does

- 🔹 Compresses repeated characters using RLE
- 🔹 Decompresses encoded data back to original form
- 🔹 Works with standard input and output (`stdin` / `stdout`)

---

# ⚙️ How to use

## 🔧 Compile
```bash
gcc compressor_decompressor.c -o rle
````

---

## 📌 Compression

```bash
./rle compress < input.txt > output.rle
```

---

## 📌 Decompression

```bash
./rle decompress < output.rle > restored.txt
```

---

# 🧠 How it works

## 🔹 Compression

The program reads consecutive repeated characters and converts them into:

```
(character, count)
```

Example:

```
AAAAA → A5
```

---

## 🔹 Decompression

It reads pairs of (character, count) and reconstructs the original text:

```
A5 → AAAAA
```

---

# 📚 Concepts used

* Standard input/output (`getchar`, `putchar`)
* Byte-level data handling
* Run-Length Encoding (RLE) algorithm
* Low-level C programming

---

# ⚠️ Notes

* The program uses **stdin/stdout streams**
* Maximum run length is limited to 255
* Not optimized for large-scale compression

---

# 💡 Example

## Input:

```
AAAAABBBCC
```

## Compressed output:

```
A5B3C2
```

---

# 👨‍💻 Author

A simple educational project for learning:

* C programming
* Basic compression algorithms
* File/stream manipulation




