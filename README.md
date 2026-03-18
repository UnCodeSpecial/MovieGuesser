# Movie Guesser — Binary Decision Tree (C++)

A C++ program that uses a **binary decision tree** to identify a movie through a series of yes/no questions. Each internal node holds a question and branches left (yes) or right (no) until a leaf node is reached, which contains the answer.

---

## Features

- Binary tree built from hardcoded structs with yes/no child pointers
- Walks the tree interactively based on user input
- Reaches one of 8 possible movie answers through 3 questions
- Cleanly distinguishes between question nodes and answer nodes (leaf detection)

---

## Concepts Demonstrated

- Binary tree structure using structs and pointers
- Tree traversal (root to leaf)
- Leaf node detection (`yes == 0 && no == 0`)
- Pointer-based navigation through a data structure

---

## How to Run

### Online (easiest)
Paste `Lab12.cpp` into [onlinegdb.com](https://onlinegdb.com), set language to C++, and hit Run.

### Local (requires g++)
```bash
g++ -o movie_guesser Lab12.cpp
./movie_guesser
```

No input files required.

---

## Sample Output

```
Tell me about the movie you are watching and I'll identify it.

Are children under 13 able to watch it? [yes/no] yes
Is it animated? [yes/no] no
Are animals involved? [yes/no] yes
It's Marley and Me!
```

---

## Decision Tree

```
                Are children under 13 able to watch it?
                        /                    \
               Is it animated?           Is it rated R?
               /         \                /           \
    Disney prod?    Animals?       Guns used?      In space?
      /    \          /    \        /     \          /     \
Atlantis Demon   Marley Princess Elysium  50 Shades  Star  Pirates
         Slayer  & Me   Diary            of Grey     Wars
```

---

## Notes

- The tree is statically defined — extending it requires adding new nodes and rewiring pointers
- All 8 movies are reachable through exactly 3 questions from the root
