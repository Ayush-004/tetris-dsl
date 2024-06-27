# Tetris-like Game Language and Compiler

This project implements a custom programming language and compiler for creating Tetris-like games. It uses Flex for lexical analysis, Bison for parsing, and generates Python code that utilizes a custom game engine.

## Project Structure

- `a2version.y`: Bison grammar file for the custom language parser
- `extretrickscanner.l`: Flex file for lexical analysis
- `engine.py`: Python-based game engine for Tetris-like games
- `board.py`: Board management for the game
- `allextetrominoes.py`: Definitions for various Tetromino shapes
- `shape.py`: Shape manipulation utilities
- `extetrickstype.h`: C header file for custom types used in the parser

## Prerequisites

- Flex
- Bison
- Python 3.x
- Tkinter (usually comes with Python)

## Building the Compiler

1. Generate the lexer:
   ```bash
   flex extretrickscanner.l
   ```

2. Generate the parser:
   ```bash
   bison -d a2version.y
   ```

3. Compile the generated C files (you may need to adjust this based on your specific setup):
   ```bash
   gcc lex.yy.c a2version.tab.c -o tetris_compiler
   ```

## Running the Project

1. Write your game logic in the custom language (let's say `my_game.tetris`)

2. Compile your custom language to Python:
   ```bash
   ./tetris_compiler < my_game.tetris > generated_game.py
   ```

3. Run the generated Python code:
   ```bash
   python generated_game.py
   ```

## Custom Language Syntax


Example:
```
Section1
#
Somename = 0
#
Someothername = 1
#
difficulty=1
#
fg_color=1
#
bg_color=5
#
speed_increase_factor=1
#
speed_decrease_factor=1
#
difficulty=1
#
direction=1
#
shadow=0
#
next=0
#
Section2
#
{ Func2 Someothername=Someothername + Somename }
#
{ run Somename = [call move_piece with direction=1 ] }
#
{Func3 while( 3 + 5 ) while( 3+ 5 )Someothername=5 end end}
#
Section3
#
[ play with height = 20 width = 20  fg_c=0 bg_c =3]]
```

## Game Engine Features

- Customizable board size
- Support for extended Tetromino shapes
- Tkinter-based GUI
- Configurable game parameters (e.g.,foreground color, background color)
