---
title: Pocket Camp Save Editor
description: Pocket Camp Save Editor, made by Thulinma
---

# Pocket Camp Save Editor

A Pocket Camp save editor made by [Thulinma](https://github.com/Thulinma). 
To use, [download the app](../assets/acpc_editor_universal.exe), and then open its location within file explorer. Click where the directory is then type `cmd`.
<p align="center">
  <img src="../assets/images/PCC/acpcc.gif"> 
</p>

## Usage

You can run the app by typing `acpc_editor_universal.exe`. Run the app without any parameters to print a help message of what is possible. <br>
Current options: 
 - `--tokens=AMOUNT` - Sets leaf tokens to given number (prefix number with - or + to remove/add)
 - `--bells=AMOUNT` - Sets bells to given number (prefix number with - or + to remove/add)
 - `--okmedals=AMOUNT` - Sets Ok Motors game medals to given number (prefix number with - or + to remove/add)
 - `--complete=AMOUNT` - Sets Complete Tickets to given number (prefix number with - or + to remove/add)
 - `--goldtreats=AMOUNT` - Sets Gold Treats to given number (prefix number with - or + to remove/add)
 - `--fruitexotic=lemon` - Sets your exotic fruit to Lemon (or Grape/Lychee)
 - `--fruitbasic1=apple` - Sets your basic fruit 1 to Apple (or Orange/Peach/Cherry/Pear)
 - `--fruitbasic2=apple` - Sets your basic fruit 2 to Apple (or Orange/Peach/Cherry/Pear)
 - `--inventory=AMOUNT` - Sets purchased inventory size (each purchase = 5 slots, prefix number with - or + to remove/add)
 - `--decrypted` - Don't re-encrypt output file

Example commands:
- To change leaf tokens: `acpc_editor_universal.exe oldsavefile newsavefile --tokens=99999999`
- To change gold treats: `acpc_editor_universal.exe oldsavefile newsavefile --goldtreats=+100`

You can also put `> output.txt` to send the output to a text file. The app outputs content of the save in a human-readable format, which can be useful for all kinds of things. <br>
```acpc_editor_universal.exe oldsavefile newsavefile --bells=999999 > output.txt```

Please keep the following in mind:
- The app currently has no graphical interface. You must use the cmd in order to use it (a web interface is being worked on though)
- While data loss isn't expected, **take backups of your save before using this**.

# Source code
If you want to look at the source code, you can [download it here.](../assets/acpc_editor_source.zip)