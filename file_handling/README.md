# File Handling in C Lessons from [Programiz](https://www.programiz.com/c-programming/c-file-input-output)

### Study
- Files have to be closed before they can be opened in another mode. i.e write mode to append mode
- open a file with:
  ```c
  FILE *fptr;
  fptr = fopen(path to file, mode);
  ```
