---
title: Music Mods
description: Tutorial for editing ACNH Music
---

<sub>This page is not fully completed.</sub>

Music in this game is stored in **BWAV** (Binary Wave) files. All music can be found in the *Sound* directory of the games romFs, [which you've hopefully dumped before](../mods#dumping-romfs). You'll also need to download [Citric Composer](https://gota7.github.io/Citric-Composer/), which is how you'll open and extract the music from the bwav. This page (*will*) go over how to mod custom music into the game, and how to extract audio from bwav to normal wav.  

<big>Table of Contents</big>
- [Extracting Tracks](#extracting-tracks)

# Extracting Tracks

To extract the audio from a bwav, first make sure you have Citric Composer installed. Now, open the games romFs and go to the */Sound/Resource/Stream/* directory. All music can be found here. When you installed Citric Composer, it should've changed all file type associations for bwav to it. If it didn't, right click any bwav, select properties, and change `Opens With:` to Citric Composer.

Open the bwav by double clicking on it. You can check if it's the song you want to extract/replace by pressing the play button in the top right. Expand the *Tracks* section, right click on *Track 1*, then select **Export Wav**. Name it whatever you'd like, but I personally keep it the same name as in the romFs.

<p align="center">
  <img src="./../../assets/images/NH/mods/music/cc-export_wav.gif"/>
</p>