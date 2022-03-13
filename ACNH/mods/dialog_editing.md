---
title: Dialog Editing
description: Tutorial for editing ACNH Dialog
---

Dialog in this game is stored in **MSBT** (Message Studio Binary Text) files. There are separate archive files that the MSBT files will be in depending on its type of dialog, and it is named based on its region and language. All dialog files are stored in the *Message* directory in the games romFS, [which you've hopefully dumped before](../mods#dumping-romfs). You'll also need to download [Kuriimu](https://github.com/FanTranslatorsInternational/Kuriimu2), which is what you'll be using to edit the dialog.

<big>Table of Contents</big>
- [Dialog Types](#dialog-types)
  - [SNpc's](#snpcs)
- [Region Types](#region-types)
- [Editing Dialog](#editing-dialog)

# Dialog Types

| **Type**  | **Description**                                                                                                                   |
|-----------|-----------------------------------------------------------------------------------------------------------------------------------|
| Dialog    | Text for menus in the game                                                                                                        |
| LayoutMsg | Text for menus in the game                                                                                                        |
| System    | Text for menus in the game                                                                                                        |
| Mail      | Mail that can be sent by villagers or special NPC's                                                                               |
| String    | Names of NPC's, items, villagers, along with their catchphrases                                                                   |
| TalkFtr   | Text for interacting with furniture                                                                                               |
| TalkNNpc  | NPC Dialog                                                                                                                        |
| TalkObj   | For things like the Nook Stop, Lloid, Snowman, the drop-off box, etc.                                                             |
| TalkSnpc  | Special NPC Dialog like Isabelle, Wilbur, Tom Nook, etc.                                                                          |
| TalkSys   | For text when the PC is talking to themselves, like catching critters <br> Or menus the PC opens themselves, like the save dialog |
| Tutorials | Any text during the games tutorial                                                                                                |

For dialog types that correlate to villagers (TalkNNpc and Mail), there will be 8 folders. Each folder represents a different personality type.

- B1_Bo: Lazy
- B2_Ha: Jock
- B3_Ko: Cranky
- B4_Zk: Smug
- G1_Fu: Normal
- G2_Ge: Peppy
- G3_Ot: Snooty
- G4_An: Sisterly

Special NPC's aren't grouped in with normal villagers though. For Mail, inside SNpc, there will be 22 folders. Each folder of course representing a different special NPC. The HHA, Nintendo, Catalog Shop, Mileage Program, Dodo Airlines, Museum, Snowman, and the ATM have separate folders named after them respectively. 

- alw: Reese
- bey: C.J.
- boc: Daisy Mae
- bpt: Katrina
- chy: Flick
- fox: Redd
- gul: Gulliver
- gulB: Gullivarr
- hgc: Label
- man: Wardell
- mnc: Niko
- otg: Lottie
- owl: Blathers
- pkn: Jack
- pyn: Zipper
- rco: Tom Nook
- slo: Leif
- spn: Harvey
- sza: Isabelle
- tap: Luna
- tkk: K.K.
- xct: Rover

Below is a list of all special NPC's. Most don't send mail, but still have abbreviated names to refer to them. There's 64 of SNpcs like this.

## SNpc's

| **ID**         | **Name**                 |
|----------------|--------------------------|
| alp            | Cyrus                    |
| alw            | Reese                    |
| bev            | Chip                     |
| bey            | C.J.                     |
| boa            | Joan                     |
| boc            | Daisy Mae                |
| bpt            | Katrina                  |
| chm            | Nat                      |
| chy            | Flick                    |
| cml <br> cmlB  | Saharah                  |
| dga            | Copper                   |
| dgb            | Booker                   |
| doc            | Wilbur                   |
| dod            | Orville                  |
| fox            | Redd                     |
| fsl            | Phineas                  |
| grf            | Gracie                   |
| gstA <br> gstB | Wisp                     |
| gul <br> gulB  | Gulliver <br> Gullivarrr |
| hgc            | Label                    |
| hgh            | Mabel                    |
| hgs            | Sable                    |
| kpg            | Grams                    |
| kpm            | Leilani                  |
| kpp            | Kapp'n                   |
| kps            | Leila                    |
| lom            | Katie                    |
| man            | Wardell                  |
| mka            | Blanca                   |
| mnc            | Niko                     |
| mnk            | Porter                   |
| mob            | Don                      |
| mol            | Resetti                  |
| otg <br> otgB  | Lottie                   |
| ott            | Lyle                     |
| owl            | Blathers                 |
| ows            | Celeste                  |
| pck            | Pavé                     |
| pge <br> pgeB  | Brewster                 |
| pkn            | Jack                     |
| plk            | Pelly                    |
| plm            | Phyllis                  |
| plo            | Pete                     |
| poo <br> pooB  | Harriet                  |
| pyn            | Zipper                   |
| rcm            | Timmy                    |
| rco            | Tom Nook                 |
| rct            | Tommy                    |
| rei            | Jingle                   |
| seo            | Pascal                   |
| skk            | Kicks                    |
| slo            | Leif                     |
| spn            | Harvey                   |
| sza            | Isabelle                 |
| szo            | Digby                    |
| tap            | Luna                     |
| tkkA <br> tkkB | K.K. <br> DJ KK          |
| ttlA <br> ttlB | Tortimer <br> Cornimer   |
| tuk            | Franklin                 |
| upa            | Shrunk                   |
| wrl            | Wendell                  |
| xct            | Rover                    |

# Region Types

| **Region** | **Language**                                       | **Description**                                                                                              |
|------------|----------------------------------------------------|--------------------------------------------------------------------------------------------------------------|
| CN         | zh                                                 | Simplified Chinese                                                                                           |
| TW         | zh                                                 | Traditional Chinese                                                                                          |
| EU         | de <br> en <br> es <br> fr <br> it <br> nl <br> ru | German <br> European English <br> European Spanish <br> European French <br> Italian <br> Dutch <br> Russian |
| JP         | ja                                                 | Japanese                                                                                                     |
| KR         | ko                                                 | Korean                                                                                                       |
| US         | en <br> es <br> fr                                 | NA English <br> LA Spanish <br> CA French                                                                    |

As you can see above, the way that they're named is very straight-forward. They start with a dialog type, then the region and language. So, if you were looking for the *LayoutMsg* in *German*, it would be named *LayoutMsg_EUde.sarc.zs*. 

# Editing Dialog

In Switch Toolbox, open the folder to the ACNH romFS folder. All text is stored in the Message folder. Expand the folder, double click on the file to open it, and then you'll see the contents of it. In the Toolbox, you can edit MSBT files, but it's better to use [Kuriimu](https://github.com/IcySon55/Kuriimu/releases).

With the MSBT file you're looking to edit, right click it then select *Export Raw Data*. You can save it to wherever you'd like. Now in Kuriimu, drag the file onto the window to open it. For more on what you can do with MSBT files, read [MSBT Functions](https://acmods.org/wiki/New_Horizons:MSBT_functions). Anyway, Make your changes, and save. Back in the toolbox, find the MSBT you just extracted and delete it. Now, right click the archive it was in, select add file, and select the edited text file. As an example, you open the *TalkFtr_USen.sarc.zs*, and make changes to the *FTR_TrashBox.msbt*. Delete the original MSBT, right click the sarc, and click Add File. Now to make the new archive with the edited file, right click the sarc again and press save. Save it to wherever you'd like, but <big>**make sure to save the file with ZSTD, and it's named the same**</big>. It is *especially* important that it's named the same, as a single typo can mess everything up. For loading the mod, read [Loading Mods](../mods#loading-mods)