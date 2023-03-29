---
title: BCSV Editing
description: What BCSV's are, and how to edit them.
date: 2022-09-22 22:59:00 -0400
categories: [Switch, ACNH]
tags: [switch, BCSV, homebrew, ACNH, CFW]
permalink: /ACNH/mods/bcsv_editing/
img_path: /
---

<sup>Note: this page is not fully completed!</sup>

Much tabular data in the game is stored inside **BCSV** (Binary Comma Separated Value) files. The BCSV, just like a normal CSV consists of rows and columns. For example, `ItemColor.bcsv` has 3 columns, first being the UniqueID specifying which color an item has, second being the English color name (red, green, blue, etc), and the last being the Japanese color name.

<p align="center">
  <img width="75%" src="../../assets/images/NH/mods/bcsv/ItemColor-bcsv.png" 
  title="i wonder if my use of the pan flag for colorful says anything about me,,,,"/>
</p>

# Editing BCSV

To edit a BCSV, you *could* hex edit. Or you could use the [BCSV Editor](https://gamebanana.com/tools/6825) by Alree. It should be noted that not every file ending in "BCSV" has the same internal structure as another. Super Mario Galaxy's BCSV files cannot be opened with Alree's BCSV Editor, just as ACNH's BCSV can't be opened in [Whitehole](https://github.com/SunakazeKun/Whitehole-Despaghettification).

# Loading BCSV