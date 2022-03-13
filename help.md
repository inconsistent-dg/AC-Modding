---
title: HELP
description: Troubleshooting page for Switch modding.
---

<sub># Note: this page probably doesn't have everything that it deserves, but for now i'd call it pretty Pog!</sub>

<big><big>
**Be aware that, no matter what, EVERY time you modify the console, there's a chance of an UNRECOVERABLE BRICK.** These are very, *very* rare, but still a possibility, so always make sure that you follow any directions EXACTLY.
</big></big>

This help page tries to go through each and every question one might ask about anything shown in the guides.

**Table of contents**

- [Homebrew](#homebrew)
  - [What's homebrew?](#whats-homebrew)
  - [What's a patched or unpatched switch? And how do I know which I have?](#whats-a-patched-or-unpatched-switch-and-how-do-i-know-which-i-have)
  - [What's emuNAND/sysNAND, and do I need it?](#whats-emunandsysnand-and-do-i-need-it)
    - [What's sysCFW?](#whats-syscfw)
  - [What's RCM?](#whats-rcm)
  - [What's a Jig? (and how to get inside RCM)](#whats-a-jig-and-how-to-get-inside-rcm)
    - [How do I inject a payload?](#how-do-i-inject-a-payload)

# Homebrew
## What's homebrew?

`Homebrew` is a term for software that isn't official, (hasn't been made by nintendo themselves), and is made for locked down systems, such as the Switch.

This can include anything from save editors, to editors, to full games (and more, if you're creative enough)

If you're trying to run homebrew on your switch, you CAN! If you have a v1/unpatched switch, an SD card, and a USB-C cable.

## What's a patched or unpatched switch? And how do I know which I have?
`Unpatched` / v1 switches are any switches that were made before early June of 2018. Any switch made after that is what's called a `Patched` / v2 switch. The difference from the two, is that the original Switch (v1) was made with a Tegra x1 chip. These chips, when they're in Recovery Mode (RCM), are able to execute unverified code. This one exploit allows people to develop payloads for the switch, which can then be injected. NVIDIA *has* [publicly responded to this.](https://nvidia.custhelp.com/app/answers/detail/a_id/4660/~/security-notice%3A-nvidia-tegra-rcm-vulnerability)

With the serial number, you can check if your switch is patched or not.

To find your serial number, enter the `System Settings` on the switch, scroll down to `System`, then click on `Serial Information`.
<p align="center">
  <img src="./assets/images/SerialInformation1.jpg" alt="Serial Info"/>
</p>

Once you click it, it will show your Serial Number at the top of the screen. I have censored my Serial Number here, as you shouldnt give out your entire Serial. Only the 4 numbers after XXX should you give out, if you're asking for assistance.
<p align="center">
  <img src="./assets/images/SerialInformation2.jpg" alt="Serial Info"/>
</p>


<sup>the following information is taken from [this GBATemp thread](https://gbatemp.net/threads/switch-informations-by-serial-number-read-the-first-post-before-asking-questions.481215/)</sup>

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

## What's emuNAND/sysNAND, and do I need it?
**emuNAND** (aka emuMMC) is, essentially, a second switch. It is stored completely on your SD card, on a separate partition, and not the internal storage. Because of this, whatever you do on your emuNAND will not be on your sysNAND, and whatever you do on your sysNAND will not be on your emuNAND.

For the most part, emuNAND is used to do things that could get you banned, but to always keep it OFFLINE, then only go online with sysNAND. So since all of the bannable actions were done on the emuNAND, keeping it forever offline let’s you get away with being banned. Another way it could be used is to prevent a brick, something that could render your device completely useless. Do note however, your sysNAND and emuNAND do share a couple of things, such as the system/cartridge fuses, as well as your ban state. So if you DO get banned, there's nothing you can do.

This guide does not go over setting up emuNAND. It is not needed, nor is it recommended, unless you want to pirate, or do other bannable actions. [A good tl;dr of what can/wont get you banned can be found here](https://nx.eiphax.tech/ban). In the case of Animal Crossing, no matter what mods you have or what you do in the game, you can't be banned. The most that will happen is the game prevents you from going online, until you remove the downloaded mods. And when they're removed, it's like nothing happened. You shouldn’t go online with emuNAND and then go online with sysNAND, as mismatched logs will be the reason you get banned. Plus, the entire point of emuNAND is to keep it offline.

`sysNAND` is the storage built into your switch, so... you probably shouldn't take it out. People use sysNAND to go online and not have to worry about being banned.

### What's sysCFW?
`sysCFW` is the storage built into your switch, *buut* with CFW. Me personally (and others i know) always have the switch in sysCFW. I don't use my switch for anything other than save editing New Horizons so I can do treasure islands. Plus there's no reason to go into emuNAND, restore the edited save file, then go into stock to play the game. You've already done "magic" on your sysNAND, so it's not clean anymore. Being in sysCFW allows you to do whatever you wanted to do in emu (to the extent of the law) while still going online, without being banned.

## What's RCM?

The switch has a Tegra X1 Processor, and a `Recovery Mode` (RCM) if anything goes wrong. Now for normal users, this is basically useless information. However, that right there is our gateway into CFW. [The Tegra X1 chip is able to be exploited to allow unverified code to run on any device with it.](https://nvidia.custhelp.com/app/answers/detail/a_id/4660/~/security-notice%3A-nvidia-tegra-rcm-vulnerability)

Because of this exploit, people who actually know what they're doing can create payloads, send them to the switch, and get CFW on it. Although RCM can still be accessed on Patched (v2) switches, the exploit to inject a payload has been patched.

## What's a Jig? (and how to get inside RCM)

A Jig is a molded piece of plastic with metal wiring in it. It was made to be more reliable and safer than using paperclips or foil. Once you have a Jig, you slide it into the Right Joycon slot, so the metal can touch the 1st and 10th pins on the underside of the slot.  

<p align="center">
  <img src="./assets/images/misc/jig.jpg" alt="Switch Jig"/>
</p>

<sub>You do not need to disassemble the Switch or anything to get in RCM.
Note that to enter RCM, the jig has to be entered fully with the pins not visible. This picture has the pins out to show which way to enter it.</sub>

<p align="center">
  <img src="./assets/images/misc/jigger.jpg" alt="Jig in the right joycon slot."/>
</p>

Once it's in there, hold down the Power button and Volume Up button. If the screen stays black, you're most likely in RCM!

### How do I inject a payload?

To inject a payload on Windows, you use something called [TegraRCMGui](https://github.com/eliboa/TegraRcmGUI/releases). 
If you want to inject a payload on other platforms:

[Fusée Launcher](https://github.com/Qyriad/fusee-launcher) (Linux)

[NXBoot](https://mologie.github.io/nxboot/) (OS X, iOS)

[NXLoader](https://github.com/DavidBuchanan314/NXLoader) (Android)

[Web Fusée Launcher](https://fusee-gelee.firebaseapp.com/) (cross platform! works in a browser, only in chrome)
