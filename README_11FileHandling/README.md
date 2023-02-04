## File Handling in C programming

### File Input and Output

```
FILE *flo;
flo = fopen("/home/solokope/Desktop/C programs/EjikeProject/NewFile.txt", "w+");
fprintf(flo, "This is sample code from our example");
fclose(flo);
```

```
FILE *flo;
flo = fopen("/home/solokope/Desktop/C programs/EjikeProject/Hello.txt", "w"); //pdf doc
fprintf(flo, "This is sample code from our example");
fclose(flo);
```

### File Input and Output(Part 2)

```
FILE *flo;

char read[300];

flo = fopen("/home/solokope/Desktop/C programs/EjikeProject/Hello.txt", "r");
fgets(read, 300, (FILE*)flo);

printf("%s \n", read);

fclose(flo);
```
