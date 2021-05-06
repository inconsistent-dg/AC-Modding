---
layout: default
---

# Switch CFW Setup

**This guide is not trying to be its own "standalone guide" that everyone should go to, it's simple and does not get into the real nitty-gritty aspects for the WONDROUS world of magic. If you want an actually good guide, follow the [Nintendo Homebrew Switch Guide](https://nh-server.github.io/switch-guide/). This guide mostly follows that, except simplifying things by a LOT, and removing the optional emuNAND Route.**

<big><big>
**Be aware that, no matter what, EVERY time you modify the console, there's a chance of an UNRECOVERABLE BRICK.** These are very, *very* rare, but still a possibility, so always make sure that you follow any directions EXACTLY.
</big></big>

Note: This page has not yet been fully completed. Once it has, you'll be able to answer all your questions!

# Table of Contents

- [Finding your serial number](#finding-your-serial-number)
- [Preparing the SD](#preparing-the-sd)
  - [Formatting the SD](#formatting-the-sd)
    - [**Formatting on Windows**](#formatting-on-windows)
    - [**Formatting on MacOS**](#formatting-on-macos)
    - [**Formatting on Linux**](#formatting-on-linux)
  - [Required Files](#required-files)
- [Injection Apps](#injection-apps)
  - [TegraRCM](#tegrarcm)
- [Backing Up System Files (optional, but recommended)](#backing-up-system-files-optional-but-recommended)
  - [Switch NAND](#switch-nand)
  - [Switch keys](#switch-keys)
- [Launching CFW](#launching-cfw)

# Finding your serial number

Serial Numbers are important, as not every Switch can be modded. With the serial number, you can check if your switch is patched or not. `Unpatched` / v1 switches are any switches that were made before early June of 2018. Any switch made after that is what's called a `Patched` / v2 switch. The difference from the two, is that the original Switch (v1) was made with a Tegra x1 chip. These chips, when they're in Recovery Mode (RCM), are able to execute unverified code. This one exploit allows people to develop payloads for the switch, which can then be injected. NVIDIA *has* [publicly responded to the RCM exploit](https://nvidia.custhelp.com/app/answers/detail/a_id/4660/~/security-notice%3A-nvidia-tegra-rcm-vulnerability). And before you ask, you can't mod a Patched switch. You can *technically*, with a mod chip, but those would be illegal to use since modifying the hardware is against Nintendo's TOS, but also they're hard to find since the company that was making them (Team Xecuter) got shut down.

To find your serial number, enter the `System Settings` on the switch, scroll down to `System`, then click on `Serial Information`.
<p align="center">
  <img src="./assets/images/SerialInformation1.jpg" alt="Serial Info"/>
</p>

Once you click it, it will show your Serial Number at the top of the screen. I have censored my Serial Number here, as you shouldnt give out your entire Serial. Only the 4 numbers after XXX should you give out, if you're asking for assistance.
<p align="center">
  <img src="./assets/images/SerialInformation2.jpg" alt="Serial Info"/>
</p>

As you saw earlier, my Switch is a XAW1, and between 1000 and 1007, so I have an <span style="color:green">Unpatched</span> unit. If you have a <span style="color:orange">Potentially patched</span> unit, then in reality there's only a 30% chance that you can actually mod it. You're better off selling your current Switch then buying an <span style="color:green">Unpatched</span> unit.

<sup>the following information is taken from [this GBATemp thread](https://gbatemp.net/threads/switch-informations-by-serial-number-read-the-first-post-before-asking-questions.481215/)</sub>

| Serial Numbers | <span style="color:green">Unpatched!!</span>                | <span style="color:orange">Potentially patched??</span>        | <span style="color:red">Patched.</span>                      |
|----------------|----------------------------|------------------------------|-------------------------------|
| XAW1           | 10000000000 to 10074000000 | 10075000000 to 10120000000   | Anything above 10120000000    |
| XAW4           | 40000000000 to 40011000000 | 40011000000 to 40012000000   | Anything above 40012000000    |
| XAW7           | 70000000000 to 70017500000 | 70017500000 to 70030000000   | Anything above 70030000000    |
| XAJ1           | 10000000000 to 10020000000 | 10020000000 to 10030000000   | Anything above 10030000000    |
| XAJ4           | 40000000000 to 40046000000 | 40046000000 to 40083000000   | Anything above 40083000000    |
| XAJ7           | 70000000000 to 70040000000 | 70040000000 to 70050000000   | Anything above 70050000000    |
| XAW9           |                            | All potentially patched.     |                               |
| XAK            |                            | No info, only sold in Korea. |                               |
| XKW or XKJ     |                            |                              | Mariko switches, all patched. |

# Preparing the SD

## Formatting the SD

Your SD card *should* be formatted to FAT32. Using exFAT on the Switch should be avoided, since the exFAT drivers on the switch are literal dogwater and are prone to corruption. It can also prevent certain homebrew/cfw from booting, which is another reason why it shouldnt be used.

### **Formatting on Windows**

For formatting on Windows, this guide uses GUIFormat. GUIFormat is used because it allows you to format drives that are higher than 32gb, where using the default format tool doesn't allow you to go any higher.

You can download from the official website, or you can download it from my github repository. It's here because the official website seems to go down every other week, so if it's down you can download it there.

[Official Download](http://ridgecrop.co.uk/index.htm?guiformat.htm)

[Github Repo](https://github.com/inconsistent-dg/guiformat/releases/download/v1.0.1.0/guiformat.zip)

Once you have it downloaded, open the .exe. It'll ask for administrative purposes, which you need to give. After that, change the drive to your sd's drive (**it will NOT be C:.**) It'll most likely be D, E, H, I, or something similar. 

*Note: **BE ON THE RIGHT DRIVE.** Formatting your drive deletes all your data, and last time I checked you had some important things in your homework folder!*

With that being said, now would be a great time to backup your data (if you have any data on it). If you've used your SD on your switch already and have taken some pictures that you just can't afford to lose, back them up! 

Once the drive is selected, keep the allocation unit size on either 32768 or 65536, give your SD a label if you want, then keep `Quick Format` CHECKED. Without getting too deep into it, quick format is... quick. Click start, then watch your SD convert to fat32.

<p align="center">
  <img src="./assets/images/hbrew/GUIFormat.gif" alt="GUIFormat format to fat32"/>
</p>

If you get an error that looks like this, you just need to make sure that your file explorer is closed before pressing start.

<p align="center">
  <img src="./assets/images/hbrew/GUIFormatERROR.png" alt="GUIFormat file exploror open error"/>
</p>

### **Formatting on MacOS**

I don't have a CrapOS, so I can't provide any extra screenshots, however you can [follow the Apple Support page for formatting](https://support.apple.com/guide/disk-utility/format-a-disk-for-windows-computers-dskutl1010/mac). At the top of the page, you can change which version of CrapOS you're using.

### **Formatting on Linux**

This guide uses GParted. GParted works on most Linux distros, so you probably don't have to worry about missing out if you use Hannah Montana Linux.

GParted is included by default in some distros, however if it isn't you can look it up with your systems installed package manager. If you can't find it in your package manager, you can install it from the command line.

| Linux Distro | Package   | Terminal Command             |
|-------------:|-----------|------------------------------|
| Debian       | [gparted](https://packages.debian.org/search?keywords=gparted) | ```sudo apt-get install gparted```|
| Fedora       | [gparted](https://koji.fedoraproject.org/koji/packageinfo?packageID=1950) | ```su -c "yum install gparted"```  |
| Mangeia      | [gparted](https://madb.mageia.org/package/show/name/gparted) | ```sudo urpmi gparted```           |
| OpenSUSE     | [gparted](https://software.opensuse.org/package/gparted) | ```sudo zypper install gparted```  |
| Ubuntu       | [gparted](https://packages.ubuntu.com/search?keywords=gparted) | ```sudo apt-get install gparted``` |

If your distro isn't listed here, you can either try to find it in it's package manager or simply [check out the official download instructions](https://gparted.org/download.php).

Now that you have GParted installed, open it. Find your SD Card in the top right drop down box (will most likely be something like /dev/sdb or /dev/sdc). In my case, it was /dev/sdc.

*Note: **BE ON THE RIGHT DRIVE.** Formatting your drive deletes all your data, and last time I checked you had some important things in your homework folder!*

With that being said, now would be a great time to backup your data (if you have any data on it). If you've used your SD on your switch already and have taken some pictures that you just can't afford to lose, back them up! 

Assuming you're on the right drive, right click the device, and delete the partition. This will make everything on the drive unallocated, and once it is right click the unallocated space then select New. This takes you to the `Create New Partition` screen. Once you're here, change the filesystem type to `fat32` and, if you want, give the partition a label. After you've done that, click `Add`, then the green checkmark at the top of the window to apply the changes.

If you need visuals, below is a GIF

<p align="center">
  <img src="./assets/images/Linux/GParted.gif" alt="GParted format to fat32"/>
</p>

## Required Files

We're now going to place the required files for CFW, with some added homebrew files. Yeah, we could just use Atmosphere's own bootloader (called fusee), however we'll be using Hekate instead, just so we can backup the systems NAND, and use some features that'll be helpful in the future.

A [hekate_ipl.ini](assets/hekate_ipl.ini) config file (open the link, right click > save page as)

The bootlogos folder [bootlogos.zip](assets/bootlogos.zip)

The latest release of [Atmosphere](https://github.com/Atmosphere-NX/Atmosphere/releases) (get the `atmosphere-(version)-master-(version)+hbl-(version)+hbmenu-(version).zip`, and not `atmosphere-EXPERIMENTAL-(version)-master-(version)+hbl-(version)+hbmenu-(version).zip`)

The latest release of [FTPD](https://github.com/mtheall/ftpd/releases) (download `ftpd.nro`)

The latest release of [Hekate](https://github.com/CTCaer/Hekate/releases/) (download `hekate_ctcaer_(version).zip`)

The latest release of [JKSV](https://github.com/J-D-K/JKSV/releases) (download `JKSV.nro`)

The latest release of [Lockpick_RCM](https://github.com/shchmue/Lockpick_RCM/releases) (download `Lockpick_RCM.bin`)

The latest release of [nxdumptool](https://github.com/DarkMatterCore/nxdumptool/releases) (download `nxdumptool.nro`)

The latest release of the [hbappstore](https://github.com/fortheusers/hb-appstore/releases) (download `appstore.nro`)

<big><big>**After downloading, follow these instructions:**</big></big>

1. Copy *the contents* of the Atmosphere`.zip` to the root of your SD

2. Copy the `bootloader` folder from the Hekate`.zip` to the root of your SD

3. Copy the `bootloader` folder from the `bootlogos.zip` to the root of your SD (if you're asked to merge the folders, do so)

4. Copy `hekate_ipl.ini` inside the `bootloader` folder on your SD

5. Copy `Lockpick_RCM.bin` to the `/bootloader/payloads` folder on your SD

6. Create a folder named `appstore` inside the `switch` folder, and copy `appstore.nro` to it.

7. Copy `ftpd.nro`, `JKSV.nro`, and `nxdumptool.nro` inside the `switch` folder on your SD.

If you were using your SD before and backed up your Nintendo folder, now would be the time to put it back on.

Your SD cards contents should look something like this. The Nintendo folder will be here if you've already used your SD with your switch.
<p align="center">
  <img src="./assets/images/hbrew/nintendy.png" alt="SD Content"/>
</p>

# Injection Apps

To inject payloads on Windows, you use something called [TegraRCMGui](https://github.com/eliboa/TegraRcmGUI/releases). Download either the MSI or zip.

If you want to inject a payload on other platforms:

[Fusée Launcher](https://github.com/Qyriad/fusee-launcher) (Linux)

[NXBoot](https://mologie.github.io/nxboot/) (OS X, iOS)

[NXLoader](https://github.com/DavidBuchanan314/NXLoader) (Android)

[Web Fusée Launcher](https://fusee-gelee.firebaseapp.com/) (cross platform! works in a browser, only in chrome)

I might show how to inject on other platforms in the future, but for now, if you're using Windows, then I'll be showing how to inject with Tegra.

## TegraRCM

1. Run the TegraRCMGUI installer, and after installation, start the program. Or just run it if you downloaded portable.

2. In the `Settings` tab, click on `Install Driver`, which will install the drivers needed for Tegra to detect your Switch.

3. After the drivers have been installed, plug your Switch into your computer. While it's still plugged in, power off your switch COMPLETELY (so hold down the power for 5 seconds, select Power Options, then turn off)

4. *Insert* your Jig into the right joy-con slot, making sure the pins aren't visible, and then press the Power button and VOL+ at the same time. Your Switch screen should stay black; if it turns on normally, retry from step 2.

<img align="right" src="./assets/images/hbrew/rcm.png">

5. If you see RCM O.K in the bottom left of Tegra, then you know your switch is in RCM. This is where you can actually inject a payload!!

Once your switch is in RCM, you can inject payloads. We'll be injecting Hekate.

In the `hekate_ctcaer_(version).zip` that you downloaded, inside was the `hekate_ctcaer_(version).bin`. That file is what you'll be injecting. Move it to any accessible place on your PC.

In the `Payload` tab of Tegra, click on the folder icon and navigate to the `hekate_ctcaer_(version).bin` file. Select it, and then click on `Inject Payload` and your switch will boot into the hekate menu.

# Backing Up System Files (optional, but recommended)

Now that you're in Hekate (congrats btw!!) you **should** backup your Switch's NAND. This is entirely optional, however VERY recommended, to ensure you have a backup of your switch incase (somehow, someway) you brick it. It's also useful if you want to basically erase all evidence that you had modded your switch in the first place. Of course, this does not remove a ban from your switch if you're banned, but if you just wanted to mod your switch to see what it'd be like, then you can restore your backup to delete that incriminating evidence.

As they say, the best backup is the one you have but never need, and the worst backup is the one you need but never made. 

## Switch NAND

You ARE going to need at**least** 32gb of free space to dump your Switch NAND (unless you want to dump it 4gb at a time).

1. On Hekate, tap on the `Tools` tab and select `Backup EMMC`.
2. Once here, tap on `eMMC BOOT0 & BOOT1`. It'll take a couple seconds, but once it's done it should say `Finished and verified!`. Under `Filepath:` is where you'll see the location of the dump.
3. Close this screen then select `eMMC RAW GPP`. It should take some time, since the Switch's rawnand.bin is quite large. (it'll take even longer if you're dumping it 4gb at a time). This can take anywhere from 15minutes up to an hour and a half, all depends on the speed of your SD card.
4. Tap on Close twice to return to the tools menu, and copy the `backup` folder to your computer (or someplace safe). Once you got your `backup` folder copied someplace else, you can delete the `backup` folder on your SD. To save a bit of space, you can compress the backup folder in a .zip, .7z, or something similar. 

## Switch keys

Your Switch keys aren't that large, so you don't have to worry about spending another hour backing them up.

1. On the `Home` tab of Hekate, select `Payloads`. Once here, open `Lockpick_RCM.bin`. (if it's not here, you didn't follow [Required Files](#required-files) correctly)
2. Once Lockpick has loaded, press the power button to select `Dump fron SysNAND`. You'll see some pretty colors for a moment!
3. After Lockpick is finished, your `prod.keys` and `title.keys` should be in `sd:/switch`.
4. Now that you have your keys, copy them to your computer (or someplace safe). Once you got your keys backed up somewhere, you can delete the keys on your SD. You wouldn't HAVE to compress these, since (in total) they're only 12kb, but you can still do it if you'd like to.
---

Now that you've finished those steps, you're basically finished at this point! All you need to do now is actually boot into CFW. You might be asing, am I not already in CFW? Well, no. You've simply injected a payload.

---

# Launching CFW

To launch into CFW, on the Hekate `Home` tab, select `Launch`, then select `CFW (SYSNAND)`. If you get an error like <span style="color:yellow">No main boot entries found...</span>, then you haven't downloaded the hekate_ipl.ini and put it in your bootloader folder. If this is the case, download the [hekate_ipl.ini](assets/hekate_ipl.ini) config file (open the link, right click > save page as)

But if you don't get that error, then you're in CFW! You ARE gonna have to inject a paylaod everytime you want to enter CFW though, so remember that as soon as you turn off your switch you'll be back in normie territory.