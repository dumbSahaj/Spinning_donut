# Spinning Donut in C — ASCII Torus Animation

This project recreates the classic ASCII spinning donut rendered directly in the terminal using C, trigonometry, and 3D projection math.
The idea became popular online years ago, and this implementation was built from scratch after learning and understanding the math behind it.

## Inspiration

This project is heavily inspired by the original blog post **“Donut Math”** by a1k0n —  
https://www.a1k0n.net/2011/07/20/donut-math.html  

That post introduced the math behind the spinning ASCII donut, and motivated me to try implementing it myself.


## What the Program Does

The program:

  Computes the 3D coordinates of a torus (donut) using two angles: theta (circle cross-section) and phi (donut loop)

  Rotates the shape over time using two rotation angles A and B

  Projects 3D points to 2D screen coordinates

  Calculates brightness using a luminance formula, mapping it to ASCII characters

  Displays the donut animation in real-time inside the terminal

##  Requirements

To compile and run the program you need:

  A C compiler (GCC, Clang, MinGW, etc.)

  A terminal that supports ASCII output

  Windows users may need ```system("cls");``` (already included)

  Linux/Mac users can replace it with ```system("clear");```

## How to Compile and Run

```bash
gcc donut.c -o donut -lm
./donut
```

## File Included 
| File      | Description                                         |
| --------- | --------------------------------------------------- |
| `donut.c` | Complete C source code for the ASCII spinning donut |

## Concept Used
| Concept            | Usage                                            |
| ------------------ | ------------------------------------------------ |
| Trigonometry       | Creating torus geometry using sin & cos          |
| 3D rotation        | Rotation along X and Z axes using A & B          |
| 3D → 2D Projection | Mapping coordinates to terminal display          |
| Z-buffering        | Depth comparison for correct rendering           |
| ASCII shading      | Luminance mapped to characters `" .,-~:;=!*#$@"` |


## Preview

<img width="722" height="529" alt="image" src="https://github.com/user-attachments/assets/112b6bcb-7589-40c6-b5fc-f989ef511415" />

## Author 

**Sahaj Saxena**
CSE student
