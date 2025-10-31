# 🔺PixelPlotters-DDA🔻
This repository contains two classic computer-graphics programs implemented in C using OpenGL (GLUT).
The focus is on drawing shapes and lines using the DDA Algorithm, a fundamental rasterization technique used in computer graphics.

## 🌟 Features
➕ 1. House & Boat Drawing using DDA

* A full 2D scene made entirely from DDA-generated lines:
* House (walls, roof, chimney, doors)
* Boat with sails
* Multiple connected shapes
* Pixel-accurate rasterization using OpenGL points

➕ 2. Interactive DDA Line Drawer

* A program where the user inputs:
* Starting point (x1, y1)
* Ending point (x2, y2)
## ⭕The program then draws the line using:
* Step-based DDA iteration
* Pixel-by-pixel plotting
* Manual coordinate input
## ⭕Both programs demonstrate:
* Basic rasterization
* Manual point plotting
* 2D coordinate systems
* OpenGL point rendering

## 🧠 What is DDA?
DDA (Digital Differential Analyzer) is a line-generation algorithm that increments one coordinate in unit steps and computes the other using the line’s slope.

```
step = max(|dx|, |dy|)
Xin = dx / step
Yin = dy / step
x = x1 + n * Xin
y = y1 + n * Yin
```
This program (shapes.c) draws a complete scene made entirely using DDA lines:
Shapes Drawn:
* Rectangle-based house
* Roof
* Extension block
* Chimney
* Boat hull
* Boat top sail

## 🖼️ Output
* Black background
* White lines drawn pixel-by-pixel
* Clean 640×480 2D coordinate system
<img width="636" height="444" alt="image" src="https://github.com/user-attachments/assets/1be11044-8fc1-4820-aa0e-c1086d427ddf" />








The program line.c draws a straight line using DDA Algorithm.
```
Value of x1:1
Value of y1:1
Value of x2:5
Value of y2:5
```
## 🖼️ Output

<img width="636" height="444" alt="image" src="https://github.com/user-attachments/assets/e7651c33-2564-4c8f-822d-16e183e24448" />

