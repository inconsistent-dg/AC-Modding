---
title: Modding Guide
description: Learn to install or create Switch mods
---

<p align="center">
<big><big><b>Follow this guide for dumping your romFS, it's needed to create mods.</b></big></big>
</p>

<p align="center">
<big><a href="https://www.youtube.com/watch?v=4SbMkAQmsI0">This guide is available on Youtube!</a></big> <iframe id="ytplayer" type="text/html" width="800" height="450"
src="https://www.youtube.com/embed/4SbMkAQmsI0"
frameborder="0" allowfullscreen></iframe>
</p>

<big>**Table of Contents**</big>
- [Dumping romFS](#dumping-romfs)
- [Switch Toolbox](#switch-toolbox)
- [Loading Mods](#loading-mods)
- [Creating Mods](#creating-mods)
  - [Dialog Editing](#dialog-editing)
  - [Editing Textures](#editing-textures)
  - [Model Swapping](#model-swapping)
  - [Music Mods](#music-mods)

So, you want to mod the hell out of your game, but don't know where to start. Whether you're new or not, this guide comes in to help out. Remember that mods can only be used on modded Switch's, so if you don't have one you can [read my switch guide for modding your own](../switch-guide.md). You can start modding on a new game or one in progress. I'm going to go over dumping the romFS, or its assets and general files, of Animal Crossing to edit with Switch Toolbox. There are multiple programs you can use to edit the romFS, but you can't get to that part without the romFS in the first place. 

If you're not making mods, and just need help installing them, go to [Loading Mods](#loading-mods).

# Dumping romFS

To edit the games files, you're going to need them. [NXDumptool](https://github.com/DarkMatterCore/nxdumptool/releases) allows you to dump the romFS of the game. You could use Yuzu to dump it as well, if you have it set up. Just download the .nro (NOT THE SOURCE CODE) and place it in the "*switch*" folder on your SD card. You will also need to dump your *prod* and *title* keys using [Lockpick_RCM](https://github.com/shchmue/Lockpick_RCM). Download the .bin (once again, not the source code) and place it in the *bootloader/payloads* folder on your SD. 

After injecting Hekate, select *payloads* and then **Lockpick**. Select "*Dump from SysNAND*" by pressing the power button. You'll see some 
<span style="color:red">f</span><span style="color:orange">l</span><span style="color:yellow">a</span><span style="color:green">s</span><span style="color:blue">h</span><span style="color:cyan">y</span> <span style="color:red">c</span><span style="color:orange">o</span><span style="color:yellow">l</span><span style="color:green">o</span><span style="color:blue">r</span><span style="color:cyan">s</span> and a confirmation that the keys were written to where they needed to be. Press the power button again to return to the menu, then navigate to Reboot (RCM). Reinject the Hekate payload, boot CFW, and launch any game via title takeover (opening the game while holding R). It's better to launch homebrew apps this way, as it gives them full system resources.

Here, the process differs a bit if you own the game physically instead of digitally. Press "*Dump gamecard content*" if you do own it physically, otherwise press "*Dump installed SD card / eMMC content*". Select the game, and then *RomFS Options*. If it's available to you, use the left/right buttons to cycle through the available updates for the game, so you can dump those as well. The option won't show if you don't have any available updates. Make sure *Split files bigger than 4 GiB* is also selected. Now you select the *RomFS section data dump* and wait for the process to finish. How long it takes depends on your SD card speed. And now, your romFS is dumped! You should copy the romFS folder from your SD card to your PC, as the romFS is 6gb+. It also makes it easier to edit whenever it's needed, instead of only editing when your SD's on your computer.

# Switch Toolbox

**Switch Toolbox** is what you'll be using to extract the game's files to edit them, and reimport to get those changes to show up in the game. Get Switch Toolbox by going to the [Github](https://github.com/KillzXGaming/Switch-Toolbox/releases) and downloading `Toolbox-Latest.zip`.
Despite the date, this build is automatically updated from the latest commit, so you always have the most recent release.

Extract the zip using [7-zip](https://www.7-zip.org/), and open the folder. Inside you'll see `Toolbox.exe`, and that's what you want to open. Remember when I said to copy the romFS from your Switch to your PC? Hopefully, you did, and remember the location you copied it to. Click `File > Open (Folder)` in Toolbox, then select the directory you saved it to. You'll be greeted with these folders, and the name tells you the contents of them. While most of it's self-explanatory, this explains what they represent, and what apps are used to edit them. Because I'm still new myself, I don't know what they all are for. So that's where you do your own digging. Whenever I do find out the missing links, I won't forget to update this list.

| **Folder**        | **Contents**                                            | **Editing Apps**                                                          |
|-------------------|---------------------------------------------------------|---------------------------------------------------------------------------|
| AnimationInfo     | Animation Info                                          |                                                                           |
| AnimationSequence | Animation Sequences                                     |                                                                           |
| Bcsv              | Binary CSV                                              | [BCSV Editor](https://gamebanana.com/tools/6825) [ACNH] <br>              |
| BDLI              |                                                         |                                                                           |
| Effect            | Particles                                               |                                                                           |
| ELink2            |                                                         |                                                                           |
| Env               | Camera Effects(?)                                       | [Switch Toolbox](https://github.com/KillzXGaming/Switch-Toolbox/releases) |
| EventFlow         | Interactable Objects (AI states, furniture, NPC's, etc) | Event Editor                                                              |
| Font              | Game Fonts (clearly)                                    | [Switch Toolbox](https://github.com/KillzXGaming/Switch-Toolbox/releases) |
| Layout            | Game GUI                                                | Switch Layout Editor                                                      |
| Message           | Game Dialog (MSBT Files)                                | Kuriimu                                                                   |
| Model             | Game Models (player animations are stored here)         | Blender                                                                   |
| Movie             | Opening movie (webm)                                    |                                                                           |
| Pack              | BYML Files                                              | [Switch Toolbox](https://github.com/KillzXGaming/Switch-Toolbox/releases) |
| Param             | Per-object type data                                    | [Switch Toolbox](https://github.com/KillzXGaming/Switch-Toolbox/releases) |
| Rumble            | For Switch rumble                                       |                                                                           |
| Shader            | Makes the game look pretty                              |                                                                           |
| SLink2            |                                                         |                                                                           |
| Sound             | Game Sounds (clearly)                                   | Citric Composer                                                           |
| Stage             |                                                         |                                                                           |
| Swkbd             | Software Keyboard                                       |                                                                           |
| System            |                                                         |                                                                           |

# Loading Mods
Now that we're here, you should create the layeredFs folder. The layeredFs is what actually allows you to load in the edited game files. In *atmosphere/contents/*, create a new folder which has the title ID of Animal Crossing. The title ID is `01006F8002326800`. Once this folder is created, make another called romFs inside it. Your directory should now look like this: `atmosphere/contents/01006F8002326800/romFs/`. In your romFs, create the directory *System/Resource/* and create a new resource size table. This can be done by creating an empty text file, and renaming it to `ResourceSizeTable.srsizetable`. Under normal circumstances with ACNH, loading a file that's much larger or smaller than the original causes the game to crash. This resource size table disables the games RAM management, so it will load any mod no matter the size.  

**Any mods must follow the same naming scheme as in the romFs, or the mod will not load.** So if you edit the *TalkFtr_USen.sarc.zs*, then you need to create a folder called Message and any archives must be in there. This also applies if you aren't creating mods, and just loading them. While most creators provide the full `atmosphere/contents` directory, if they don't. they'll say to put the edited file in the directory where it belongs. 

It is also important to say that in the case you have multiple of one folder (e.g. Model_0, Model_1, etc) then you do not include the `_X`. Bringing this up because I was in this predicament 😔 So it would just be *Model*, not *Model_0*.

# Creating Mods

<big>What would you like to look at?</big>

**Simply click on the header for that section.**

## [Dialog Editing](mods/dialog_editing)

## [Editing Textures](mods/editing_textures)

## [Model Swapping](mods/model_swapping)

## [Music Mods](mods/music_mods)
