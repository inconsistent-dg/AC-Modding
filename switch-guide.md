---
layout: default
---

# Switch CFW Setup

**This guide is not trying to be its own "standalone guide" that everyone should go to, it's simple and does not get into the real nitty-gritty aspects for the WONDROUS world of magic. If you want an actually good guide, follow the [Nintendo Homebrew Switch Guide](https://nh-server.github.io/switch-guide/). This guide mostly follows that, except simplifying things by a LOT.**

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
- [Entering RCM](#entering-rcm)
  - [Injecting a payload](#injecting-a-payload)

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

I don't have a MadOS, so I can't provide any extra screenshots, however you can [follow the Apple Support page for formatting](https://support.apple.com/guide/disk-utility/format-a-disk-for-windows-computers-dskutl1010/mac). At the top of the page, you can change which version of MadOS you're using.

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

<sub>
A [hekate_ipl.ini](assets/hekate_ipl.ini) config file

The bootlogos folder [bootlogos.zip](assets/bootlogos.zip)

The latest release of [Atmosphere](https://github.com/Atmosphere-NX/Atmosphere/releases) (get the `atmosphere-(version)-master-(version)+hbl-(version)+hbmenu-(version).zip`, and not `atmosphere-EXPERIMENTAL-(version)-master-(version)+hbl-(version)+hbmenu-(version).zip`)

The latest release of [FTPD](https://github.com/mtheall/ftpd/releases) (download `ftpd.nro`)

The latest release of [Hekate](https://github.com/CTCaer/Hekate/releases/) (download `hekate_ctcaer_(version).zip`)

The latest release of [JKSV](https://github.com/J-D-K/JKSV/releases) (download `JKSV.nro`)

The latest release of [Lockpick_RCM](https://github.com/shchmue/Lockpick_RCM/releases) (download `Lockpick_RCM.bin`)

The latest release of [nxdumptool](https://github.com/DarkMatterCore/nxdumptool/releases) (download `nxdumptool.nro`)

The latest release of the [hbappstore](https://github.com/fortheusers/hb-appstore/releases) (download `appstore.nro`)

After downloading, follow these instructions:

Copy *the contents* of the Atmosphere`.zip` to the root of your SD

Copy the `bootloader` folder from the Hekate`.zip` to the root of your SD

Copy the `bootloader` folder from the `bootlogos.zip` to the root of your SD (if you're asked to merge the folders, do so)

Copy `hekate_ipl.ini` inside the `bootloader` folder on your SD

Copy `Lockpick_RCM.bin` to the `/bootloader/payloads` folder on your SD

Create a folder named `appstore` inside the `switch` folder, and copy `appstore.nro` to it.

Copy `ftpd.nro`, `JKSV.nro`, and `nxdumptool.nro` inside the `switch` folder on your SD.
</sub>

If you were using your SD before and backed up your Nintendo folder, now would be the time to put it back on.

Your SD cards contents should look something like this. The Nintendo folder will be here if you've already used your SD with your switch.
<p align="center">
  <img src="./assets/images/hbrew/nintendy.png" alt="SD Content"/>
</p>

# Entering RCM

Before you do this, turn on the switch normally and delete all wifi networks. You can add them back after the guide.

## Injecting a payload

To inject payloads on Windows, you use something called [TegraRCMGui](https://github.com/eliboa/TegraRcmGUI/releases). Download either the MSI or zip.

If you want to inject a payload on other platforms:

[Fusée Launcher](https://github.com/Qyriad/fusee-launcher) (Linux)

[NXBoot](https://mologie.github.io/nxboot/) (OS X, iOS)

[NXLoader](https://github.com/DavidBuchanan314/NXLoader) (Android)

[Web Fusée Launcher](https://fusee-gelee.firebaseapp.com/) (cross platform! works in a browser, only in chrome)
