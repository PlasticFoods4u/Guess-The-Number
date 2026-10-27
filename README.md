# Guess The Number 🎲

A simple console-based number guessing game written in C++.

## Play Instantly In Your Browser
**[Click here to play the game!](https://onlinegdb.com/-wM8Zlt-35)**
its a OnlineGDB (Online Compiler) link.

## About

This is one of my beginner C++ projects made to practice:

- Variables and data types
- Loops (`do-while`, `while`)
- Switch statements
- Random number generation
- Input validation
- Error handling with `cin.clear()` and `cin.ignore()`

The player chooses a difficulty, then tries to guess a randomly generated number. The game provides hints after every guess and keeps track of the number of attempts.

---

## Features

✅ 4 Difficulty Levels

- Easy (1 - 25)
- Medium (1 - 100)
- Hard (1 - 1000)
- Insane (1 - 10000)

✅ Random number generation using:

```cpp
srand(time(0));
```

✅ Input validation

- Prevents letters and words from being entered where numbers are expected.
- Clears invalid input using:

```cpp
cin.clear();
cin.ignore(1000, '\n');
```

✅ Hint system

- Tells the player if the answer is higher or lower.

✅ Attempt counter

- Counts how many guesses it took to find the number.

✅ Play Again option

- Allows multiple rounds without restarting the program.

---

## What I Learned

While building this project I learned:

- How pseudo-random numbers work with `rand()`
- Why `srand(time(0))` is needed
- How input streams can fail
- How to recover from invalid user input
- How to use `switch` statements for menus
- How to organize larger programs using loops and conditions

---

## Example

```text
=======================================
        >>GUESS THE NUMBER<<
=======================================

Choose a difficulty:

E - Easy   (1 - 25)
M - Medium (1 - 100)
H - Hard   (1 - 1000)
I - Insane (1 - 10000)

Difficulty: M

Guess between (1 - 100)

50
Its lower than 50

25
Its higher than 25

37
You got it, it was 37. It took you 3 tries to get it right.
```

---

## Future Improvements

Some features I may add later:

- Limited guesses mode
- Difficulty selection menu using numbers
- Better code reuse by reducing repeated code

---

This project was created as part of my journey learning C++.
