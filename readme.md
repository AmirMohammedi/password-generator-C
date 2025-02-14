# Password Generator

This is a simple C program that generates a random password based on user-defined criteria.

## Features
- User can specify the length of the password.
- Option to include uppercase letters.
- Option to include numbers.
- Option to include special symbols.

## Prerequisites
To compile and run this program, you need:
- A C compiler (e.g., GCC)

## Compilation and Execution
### Compile the program:
```sh
gcc password_generator.c -o password_generator
```

### Run the program:
```sh
./password_generator
```

## Usage
1. Enter the desired password length.
2. Choose whether to include uppercase letters, numbers, and symbols.
3. The program will generate and display a random password.

## Example Output
```
Enter the length of the password: 12
Include uppercase letters? (1 for Yes, 0 for No): 1
Include numbers? (1 for Yes, 0 for No): 1
Include symbols? (1 for Yes, 0 for No): 1
Generated Password: A8@vG2#kLp$5
```

## Notes
- The program uses `rand()`, so the password generation is pseudo-random.
- Consider using a more secure randomization method for high-security applications.

## License
This project is open-source and available for use under the MIT License.

