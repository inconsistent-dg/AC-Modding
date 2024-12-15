---
title: Pocket Camp Save Editor
description: Pocket Camp Save Editor, made by Thulinma
---

# Pocket Camp Save Editor

A Pocket Camp save editor made by [Thulinma](https://github.com/Thulinma). You can currently edit the amount of leaf tokens and bells you have. 
To use, [download the app](../assets/acpc_editor_universal.exe), and then open its location within file explorer. Click where the directory is then type `cmd`.
<p align="center">
  <img src="../assets/images/PCC/acpcc.gif"> 
</p>

## Usage

You can run the app by typing `acpc_editor_universal.exe`. Running the app without any parameters will print a help message with what is possible.

To change leaf tokens: `acpc_editor_universal.exe oldsave.bin newsave.bin --tokens=XXYYZZ` <br>
To change bells: `acpc_editor_universal.exe oldsave.bin newsave.bin --bells=XXYYZZ` <br>
You can prefix the number with + or - to add or remove amounts (`--bells=+50`)

Please keep the following in mind:
- The app currently has no graphical interface. You must use the cmd in order to use it (a web interface is being worked on though)
- The app currently has limited editing, which is restricted to:
  - Editing leaf tokens
  - Editing bells
- While data loss isn't expected, take **backups of your save before using this**, and keep in mind that save corruption is possible.

# Source code
If you don't trust downloading random exe files off the internet (or want to look at the source code) you can [download the source cpp file and compile it yourself.](../assets/acpc_editor.cpp)