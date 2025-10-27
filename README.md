# Password Dictionary Search (C++)

A simple dictionary-based password search tool written in C++ using Dev-C++.
Used for testing algorithm performance and file I/O efficiency.

**Note:** For educational use only. Do not attempt to access accounts or systems you do not own or have explicit permission to test.

## How to build
1. Open in Dev-C++.
2. Compile and run.

## Example Output
Password found: apple123
Attempts: 234
Time elapsed: 12 ms
Attempts per second: 19500

## Benchmark (reproducibility)

Tested on a local machine (not included in repo) with a 1,000,000-word dictionary.

- Hardware: Intel i7-11800H (8 cores / 16 threads), 16 GB RAM  
- OS: Windows 11
- Measurement: 3 runs, first run discarded, reported median.  
- Result: **~1.0e7 attempts/sec** (measured Oct 27, 2025).  
- Notes: CPU governor set to `performance`. Wordlist not published for size/licensing reasons.
