![WIP](https://img.shields.io/badge/status-Work_in_Progress-yellow?style=for-the-badge&logoColor=white)

<p align="center">
<img width="690" height="350" alt="Image" src="https://github.com/user-attachments/assets/869d7249-6771-4aad-852e-5cc0d8964d4d" alt="Banner""/>
</p>

<h1 align="center">Projects</h1>


<p align="center">
  <img src="https://github.com/user-attachments/assets/89ac4313-c0f9-497c-93c9-f33584bc5dbb" alt="Terminal GIF" height="420" width="420"/>
</p>
<br>

**WoodenItBeNice** is my corner of GitHub for woodworking projects, plans, and experiments.  
Think *cut lists meet code snippets*.  

Here you’ll find:  
- **DIY project plans** (from shelves to knife-throwing boards)  
- **Cut lists + material breakdowns** in Markdown/CSV/JSON  
- **Scripts** (Python/JS) to calculate cuts, generate QR codes, or track inventory  
- **CAD files** (FreeCAD, SketchUp, Blender exports)  
- Optional React/Vite app for browsing builds + instructions

<br> <br>

<h1 align="center">SideScripts</h1>

<br>

# DIY Woodworking Cut List Generator

This repository contains basic code scripts in multiple languages to help with the planning and material estimation for DIY woodworking projects. The scripts generate a "cut list" of required wood pieces and calculate the total board footage needed.

## Table of Contents
- [Features](#features)
- [Scripts Available](#scripts-available)
- [How to Use the Scripts](#how-to-use-the-scripts)
  - [Python Command-Line Script](#python-command-line-script)
  - [JavaScript Web Page](#javascript-web-page)
  - [C++ Command-Line Application](#c-command-line-application)
  - [Java Command-Line Application](#java-command-line-application)
- [Understanding Board Feet](#understanding-board-feet)
- [Contributing](#contributing)
- [License](#license)

## Features
- **Project Planning:** Easily plan your project by breaking it down into individual parts.
- **Material Estimation:** Automatically calculates the total board feet required for your project, helping you purchase the right amount of lumber.
- **Multi-language Support:** Choose the script that best suits your needs, whether you prefer a simple command-line tool or a web-based interface.
- **User-Friendly:** Simple, interactive prompts make it easy for anyone to use, regardless of their coding experience.

## Scripts Available
- `woodcraft_cutlist.py`: A simple Python command-line script.
- `woodcraft_cutlist.html`: An HTML file with embedded JavaScript for a web-based version.
- `woodcraft_cutlist.cpp`: A C++ command-line application that must be compiled first.
- `WoodcraftCutlist.java`: A Java command-line application that must be compiled first.

## How to Use the Scripts

### Python Command-Line Script
1.  **Run:** Execute the script from your terminal:
    ```sh
    python woodcraft_cutlist.py
    ```
2.  **Follow Prompts:** The script will guide you through entering the name, quantity, and dimensions for each part of your project. Type `done` when finished.

### JavaScript Web Page
1.  **Open in Browser:** Simply open the `woodcraft_cutlist.html` file in any web browser
2.  **Use Interface:** Fill in the input fields and click "Add Part" to build your cut list directly in the browser. The total board feet will update automatically.

### C++ Command-Line Application
1.  **Compile:** Navigate to the script's directory and compile the file:
    ```sh
    g++ woodcraft_cutlist.cpp -o woodcraft_cutlist
    ```
2.  **Run:** Execute program:
    ```sh
    ./woodcraft_cutlist
    ```
3.  **Follow Prompts:** Use the interactive prompts to build your cut list.

### Java Command-Line Application
1.  **Compile:** Navigate to the script's directory and compile the file:
    ```sh
    javac WoodcraftCutlist.java
    ```
2.  **Run:** Execute the program:
    ```sh
    java WoodcraftCutlist
    ```
3.  **Follow Prompts:** Use the interactive prompts to build your cut list.

## Understanding Board Feet
Board feet is a volume measurement for lumber. The calculation used in these scripts is based on the standard formula:
`(Thickness in inches * Width in inches * Length in feet) / 12`

For lumber less than one inch thick, the calculation defaults to assuming a one-inch thickness, which is the standard practice in the industry.

## Contributing
If you have an idea for an improvement or a new language implementation, feel free to fork the repository and submit a pull request. Contributions are welcome!

## License
This project is licensed under the MIT License - see the `LICENSE` file for details.



<p align="center">
  <img src="https://github.com/user-attachments/assets/4d9f2b5e-6ff4-4fc2-ae50-b9fc153e6a58" alt="image" height="320" width="320"/>
</p>



