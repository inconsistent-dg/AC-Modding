<html>
 <head>
  <meta name="description" content="A guide for NHSE, the most popular New Horizons Save Editor!">
  <title>NHSE Guide</title>
</head> 
</html>

# NHSE

<big>**Table of Contents**</big>

- [NHSE](#nhse)
  - [What is NHSE?](#what-is-nhse)
  - [Downloading NHSE](#downloading-nhse)
  - [Opening NHSE](#opening-nhse)
    - [Extracting Save with JKSV](#extracting-save-with-jksv)
    - [Importing Save to NHSE](#importing-save-to-nhse)
  - [Using NHSE](#using-nhse)
  - [Internal Items](#internal-items)
  - [Players Tab](#players-tab)
    - [Edit Player...](#edit-player)
  - [Villagers Tab](#villagers-tab)
    - [**Changing Villager**](#changing-villager)
    - [**Changing Villager House**](#changing-villager-house)
    - [**Moving Villager Out**](#moving-villager-out)
    - [**Edit Villager**](#edit-villager)

## What is NHSE?

`NHSE` (New Horizons: Save Editor) is, as the name suggests, a save editor for New Horizons. It was made by Kurt ([kwsch](https://github.com/kwsch)), written in C# and is the longest standing save editor for NH. [MyHorizons](https://github.com/Cuyler36/MyHorizons) by [Cuyler36](https://github.com/Cuyler36) was (and still is, afaik) the only other save editor for NHSE, however it has been discontinued (once again afaik, there hasnt been a commit in a year)

## Downloading NHSE

There are 2 ways to download NHSE. The easiest is shown first

1. Go to https://berichan.github.io/GetNHSE/, and click the BIG button that says `Download Latest NHSE Version`. This will download a .zip, and inside it will be NHSE and all of the needed files for it.

<p align="center">
<img src="../assets/images/NH/GetNHSE.png"> 
</p>

<sub>Everything inside NHSE (as of the time writing this). If your folder does not have everything shown in this screenshot, then you should probably try downloading NHSE again.</sub>

<p align="center">
<img src="../assets/images/NH/NHSEContents.png"> 
</p>

1. Downloading compiled buids (info taken from [kurts wiki](https://github.com/kwsch/NHSE/wiki/Downloading-Compiled-Builds))

A gif tutorial is shown, to help out a bit

- On [the Github page](https://github.com/kwsch/NHSE), click the green checkmark

- Click "Details" in the popup

- Click "View more details on Azure Pipelines"

- Click the "Published" button under Artifacts

- Click the 3 dots to the right, then click "Download Artifacts"

<p align="center">
<img src="../assets/images/NH/Artifacts.gif"> 
</p>

## Opening NHSE

Extract the `NHSE.zip` you've just downloaded, and open `NHSE.exe`. **You MUST extract the zip to use NHSE**. If you don't, you will get an error that looks a little something like this. If you get this, you know what you did wrong. [You can use 7-zip to extract.](https://www.7-zip.org/)

<p align="center">
<img src="../assets/images/NH/NHShitE.png">
</p>

This page assumes you already have CFW, and if you don't, then you can [follow a guide here.](../switch-guide)

### Extracting Save with JKSV

NHSE is a **Save Editor** (hence the name New Horizons: Save Editor). This obviously means that you're gonna need to extract your save for use with NHSE! JKSV currently is the only homebrew app that can do this. This is because ACNH uses Device Saves, and Checkpoint (another big save extractor) doesn't support this.

---

<big><big>**Before extracting your save, try finishing most of the game. You don't want to rely on NHSE too much to finish it for you, since plenty of errors can come your way if you decide to cheat your way through. Errors that might just completely prevent you from loading your save. If you aren't gonna listen to the big message in front of you, at least make a backup of your save.**</big></big>

---

1. Download the [`JK has to go back to work edition` release of JKSV](https://github.com/J-D-K/JKSV/releases/download/06.07.2020/JKSV.nro). This version is recommended more than latest.
2. Drag `JKSV.nro` into the `switch` folder on root.
   - No, **not in a folder called `root`**. Open your sd card, and without being in any folders already, you'll see a `switch` folder. **Drag it in there.**
3. Boot into Custom Firmware, then open the Homebrew Launcher. Find JKSV, then open it.
   - You'll be fine opening the hbmenu in the album, but app takeover is still an option.
4. Open `Device Saves`, then ACNH.
5. Press `New...`, and then give your save folder a name.
6. Once finished, open the JKSV folder on your Switch, then the Animal Crossing folder. Whatever you named your folder in step 5 will be there.

Now that you have your save, you can actually use NHSE! You really, *really* should make a backup of the save you just made. You might make a terrible mistake on accident, and then you won't have any save to fallback on. A great man once said, the best backup's the one you **have** but dont need, and the worst backup's the one you **need** but dont have.

### Importing Save to NHSE

Open NHSE, and drag your save folder into the NHSE window. After a couple seconds, it should load, and you'll be ready to edit!

(It's better to drag the entire folder rather than just the `main.dat`.)

<p align="center">
<img src="../assets/images/NH/NHSE_SaveDrag.gif"> 
</p>

## Using NHSE

## Internal Items

Before going any further, it's important to mention `internal items`. Internal items are items that cannot be obtained by the player during normal gameplay, and only by editing it into your save. Most of them are items that villagers can hold and use, but the player can't (such as a fruit shake). It's important to bring this up because once these items are in your inventory, you ***can't*** get them out of there without editing it out, or deleting your current save and starting over, as some aren't even able to be thrown away. These are cool as decoration, or as a way to just hold a donut in your hand, but you shouldn't try and give these to other players. People on your island shouldn't be able to pick these up, but sending them to your "friends" through the mailbox to mess up their save is just a shitty move.

<big>[**Please read this list by Berichan to see what these internal items are, and prevent yourself from placing them down.**](https://github.com/berichan/ACNHMobileSpawner/wiki/List-of-internal-items)</big>

## Players Tab

<p>
<img align="right" src="../assets/images/NH/NHSEVillager69.png">
</p>
All of the tabs (including this one) are pretty self explanatory for the most part. Even with a comprehension skill of 3, you should still be able to understand what changing your Player or Town Name does. 

If you have multiple players on your island, you can click on `Villager0` to change between them.

### Edit Player...

<big>**Editing Storage**</big>

Clicking on `Edit Player...` and then `Edit Storage` will allow you to edit your storage (no surprise). You can either dump or load an `NHI` (New Horizons Inventory) of your storage to import into other places that allow it. You can press `Clear`, which will delete all items of your choosing. Or `Sort` to sort all your items in alphabetical order, or by the type of item.

<p align="center">
  <img src="../assets/images/NH/NHSE_EPlayer-Storage.png"/>
</p>

<big>**Editing Recieved Items**</big>

Clicking on `Edit Player...` and then `Edit Recieved Items` will allow you to edit all of the items you've recieved throughout your playthrough. You can click `Give All` to automatically give you every item there, or you can simply check the boxes next to the item name to manually give yourself the item.

It's recommended to earn all these through normal gameplay. But hey, it's not my save that'll be corrupted!

<p align="center">
  <img src="../assets/images/NH/NHSE_EPlayer-RecievedItems.png"/>
</p>

<big>**Editing Achievements**</big>

Clicking on `Edit Player...` and then `Edit Achievements` will allow you to edit your achievements. You can click `Give All` which will complete every achievement there, or you can click `Clear All` which will completely erase all achievements you've earned so far. If NHSE doesn't do it for you, you should check each achievement and make sure that `Read` is checked, otherwise you'll have to go through your Nook Miles app and read them all yourself.

Instead of just giving all of these to yourself through NSHE, you should probably get them through normal gameplay.

The achievements aren't named the same way that they are in game, and that's because NHSE uses the internal names for all of them. They're named pretty similar though, so it shouldn't be too hard to manually give/remove an achivement you want/don't want.

<p align="center">
  <img src="../assets/images/NH/NHSE_EPlayer-Achievements.png"/>
</p>

<big>**Editing Recipes**</big>

This one should be pretty self explanatory. Clicking on `Edit Player...` and then `Edit Recipes` will allow you to edit your recipes. Using the `goto` dropdown box at the top, you can go to the specific recipe that you want, and then click on **Known**, **Crafted**, **Favorite**, or **New** which will give the recipe that property. If you don't want to go through every recipe and add/remove a property, you can select `Learn All`, which will apply the **Known** and **New** property to that recipe.

It's recommended to earn all these through normal gameplay, instead of just giving them to yourself.

<p align="center">
  <img src="../assets/images/NH/NHSE_EPlayer-Recipe.png"/>
</p>

<big>**Editing Flags**</big>

Clicking on `Edit Player...` and then `Edit Flags` will allow you to change your player flags. Flags keep track of what you have done/completed during your playthrough. They're true/false statements, 0 being false and 1 being true. So to enable a flag, set it to 1, and to disable it set it to 0. No matter what, as always, it's best to achieve all flags in-game, as there could be other flags affected during normal playthrough that arent known about right now, which could potentially mess up your save. 

```
Terraforming:                 513, 565-574, 644
Designer app:                 513
Paving:                       828
3 Star Evaluaion / KK Unlock: 776
Harvey's Island:              535, 544
Reactions UI:                 140
Pro Designs:                  353, 702, 714
Pro Designs+:                 1172
Custom Design Portal:         1310
Nook Shopping App:            319
Hair styles:                  559-562
Hair Color:                   563
Halloween Customizations:     1142-1144
Afro Hairstyles:              1219
Incline/Bridge Kit Dialo:     126 (set to 4)
```

<p align="center">
  <img src="../assets/images/NH/NHSE_EPlayer-Flags.png"/>
</p>

<big>**Editing Reactions**</big>

Clicking on `Edit Player...` and then `Edit Reactions` will allow you to edit your reactions. Click the arrow next to **ManpuBit**, and you'll be able to see all the reactions that you've gotten so far. Clicking on the arrow next to the reaction will allow you to change the reaction to whatever you want. If you want to use the UNUSED reactions, there is a list below.

```
UNUSED_6  = Anger
UNUSED_8  = Outrage
UNUSED_17 = Disbelief
UNUSED_34 = Sweating
UNUSED_37 = Smile
UNUSED_38 = Sunniness
UNUSED_46 = Shrunk Funk Shuffle
UNUSED_49 = Distress, no hand movement
UNUSED_50 = Smiling and rubbing cheek
UNUSED_51 = Poking hands
UNUSED_52 = Intense frowning!
UNUSED_53 = Amazed, smaller particles
UNUSED_56 = Talking
UNUSED_57 = Clapping, no expression
UNUSED_59 = Greetings, no expression
UNUSED_75 = Gulliver (dead)
UNUSED_76 = Intense shake action!
UNUSED_77 = Roll safe!
UNUSED_78 = Leave it to me!
UNUSED_79 = K.K. Slider, Sitting
UNUSED_80 = K.K. Slider, Sitting while nodding
UNUSED_81 = K.K. Slider, Sitting while thinking
```

<p align="center">
  <img src="../assets/images/NH/NHSE_EPlayer-React.png"/>
</p>

<big>**Editing Misc**</big>

Clicking on `Edit Player...` and then `Edit Misc` will allow you to change some player settings that don't fit anywhere else. These things being your birthday, day that you started playing, your island fruit, and whether or not the character you've chosen created the island. Most of these are self explanatory, but know that changing your island fruit from here will only change it on your passport. Because of this, everywhere else it will refer to the old fruit. [Click here]() to see how to change the fruit everywhere.

The **Made Village** option is given to the Island Representative. To change it, simply untick the mox, then go to the villager that you want to give it to. *I haven't tested what it's like to tick the box on multiple representatives....*

<p align="center">
  <img src="../assets/images/NH/NHSE_EPlayer-Misc.png"/>
</p>

## Villagers Tab

<p>
<img align="right" src="../assets/images/NH/NHSEVillagersTab.png">
</p>

The villagers tab shows all the villagers you have on your island, along with their relationship with you, their catchprase, personality, and everything else you'd expect to see from a save editor. You can change which villager you'd like to edit by changing the villager index. It's recommended to finish the game (get all 10 villagers) before editing *anything*, but especially with villagers. 

### **Changing Villager**
You *could* change the villager by editing the species and varient, however it is not recommended to do it this way. There are a lot of flags different villagers have, so it's recommended to use the Villager Database instead to import villagers.

[Download the villager database here](https://gbatemp.net/attachments/villager-database-complete-zip.206556/). You MUST extract the zip to use with NHSE. [You can use something like 7-zip to extract](https://www.7-zip.org/). Once extracted, you will see a list of ALL villagers in the game, along with their houses. 

<p>
<img align="left" src="../assets/images/NH/NHSE_EVillagers-Values.png">
</p>

In NHSE, click on **Load Villager**. Now go to the location where you extracted the Villager database, and open it. Find the villager you want to replace them with, and select it. You'll get a prompt saying the villager didn't originate from your Island representative, so click **Yes** when it asks you if you want to update the values.

Your villager is changed! ...but what about the house?

### **Changing Villager House**

Because the villager house is seperate from the villager itself, you will have to import that as well. Be sure to save (File > Save) before changing continuing, as the villager name may not be correct if you don't. Anyway, click **Edit House**. Click on **Load** at the bottom, go to the Villager Database, and open it. Find the villagers house (`nhvh`) and select it. It will change the house values correctly, so the house is now fixed. Before saving, make sure that the **NPC1** number is set to the right villager index. For example, if you're editing Rolf whos villager index is 6, you wan't to make sure that the NPC1 number is also set to 6.

### **Moving Villager Out**
If you have a keen eye, you might've noticed already that there's a **Moving Out** box to the right of the villager. Checking this will put the villager in boxes, to allow someone else to pick them up. But, when checking it, you will get an error that looks something like this.

<p align="center">
  <img src="../assets/images/NH/NHSE_EVillagers-MoveOut.png"/>
</p>

There are 2 ways you can get your villager to move out, or be in boxes. There's a Forced Move Out, and an Irregular Move out. The Forced move out is the "cleaner" method of moving villagers out, and works as it should in the normal game. The villager will be in boxes, and by the next day, whether invited by a visitor or not, the villager will be gone. 

The Irregular move out is the "dirtier" method. It will keep the villager in boxes *forever*, meaning that even if a day passes without a player picking thhem up, they will still be there tomorrow. And the next day. *And the next day*. ***And the next day***. So, forever. This is great if you run a treasure island, and don't want to revert the time everyday, or if you're a "normal" player who wants to trade a villager, but don't know when a visitor is coming.

Setting the flag (024 - ForceMoveOut) to 1 works as a force move out (hence the name.) If you want your villagers to stay in boxes forever, don't set the flag. Only checking the box acts as an irregular move out.

### **Edit Villager**

<big>**Editing Furniture**</big>

Clicking on `Edit Villager` and then `Edit Furniture` will allow you to... change furniture? I believe this is furniture that will randomly be given to you when your friendship with the villager is high enough. I'm not exactly sure though, so I can't say for certain.

<big>**Editing Wear**</big>

Clicking on `Edit Villager` and then `Edit Wear` will allow you to change the clothes your villager will wear. Simply search for the clothing item, place the clothing in the inventory, then save.

<big>**Editing Room**</big>

Clicking on `Edit Villager` and then `Edit Room` will allow you to edit your villagers room. You can edit the accent wall, the wall itself, and the floor of the house. Just click on which you'd like to edit, and it will bring up a prompt where you can search for what you'd like to change it to. I'm not sure what changing the direction or InfoBit does, but you can try it and see.

<big>**Editing Memories**</big>

Clicking on `Edit Villager` and then `Edit Player Memories` will allow you to edit the flags of what the villager knows about you. For example, how many days in a row have you spoken to the villager, how many times you've spoken to them in one day, if you've set their greeting/nickname, and so on.

<big>**Editing DIY Timer**</big>

Clicking on `Edit Villager` and then `Edit DIY Timer` will allow you to set when your villager is crafting a DIY recipe, what the recipe will be, and how long they will be crafting the recipe for. This can be used if you want a player to get a DIY from a villager instead of injecting it in your inventory or on your island.