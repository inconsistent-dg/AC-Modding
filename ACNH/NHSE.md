<html>
 <head>
  <meta name="description" content="A guide for NHSE, the most popular New Horizons Save Editor!">
  <title>NHSE Guide</title>
</head> 
</html>

# NHSE

## What is NHSE?

`NHSE` (New Horizons: Save Editor) is, as the name suggests, a save editor for New Horizons. It was made by Kurt ([kwsch](https://github.com/kwsch)), written in C# and is the longest standing save editor for NH. [MyHorizons](https://github.com/Cuyler36/MyHorizons) by [Cuyler36](https://github.com/Cuyler36) was (and still is, afaik) the only other save editor for NHSE, however it has been discontinued (once again afaik, there hasnt been a commit in a year)

## Downloading NHSE

There are 2 ways to download NHSE. The easiest is shown first

1. Go to https://berichan.github.io/GetNHSE/, and click the BIG button that says `Download Latest NHSE Version`. This will download a .zip, and inside it will be NHSE and all of the needed files for it.

<img align="center" src="../assets/images/NH/GetNHSE.png"> 

<sub>Everything inside NHSE (as of the time writing this). If your folder does not have everything shown in this screenshot, then you should probably try downloading NHSE again.</sub>

<img align="center" src="../assets/images/NH/NHSEContents.png"> 

2. Downloading compiled buids (info taken from [kurts wiki](https://github.com/kwsch/NHSE/wiki/Downloading-Compiled-Builds))

A gif tutorial is shown, to help out a bit

- On [the Github page](https://github.com/kwsch/NHSE), click the green checkmark

- Click "Details" in the popup

- Click "View more details on Azure Pipelines"

- Click the "Published" button under Artifacts

- Click the 3 dots to the right, then click "Download Artifacts"

<img align="center" src="../assets/images/NH/Artifacts.gif"> 

## Using NHSE

Extract the `NHSE.zip` you've just downloaded, and open `NHSE.exe`. **You MUST extract the zip to use NHSE**. If you don't, you will get an error that looks a little something like this. If you get this, you know what you did wrong.

<img align="center" src="../assets/images/NH/NHShitE.png">

This page assumes you already have CFW, and if you don't, then you can [follow a guide here.](../switch-guide)

### Extracting Save with JKSV

NHSE is a **Save Editor** (hence the name New Horizons: Save Editor). This obviously means that you're gonna need to extract your save for use with NHSE! JKSV currently is the only homebrew app that can do this. This is because ACNH uses Device Saves, and Checkpoint (another big save extractor) doesn't support this.

<big><big>**Before extracting your save, try finishing most of the game. You don't want to rely on NHSE too much to finish it for you, since plenty of errors can come your way if you decide to cheat your way through.**</big></big>

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

<img align="center" src="../assets/images/NH/NHSE_SaveDrag.gif"> 

## Players Tab

hold on give me a second i need to finish the rest