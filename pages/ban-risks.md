---
title: Ban Risks
---

[A good tl;dr of what will/will not get you banned can be found here](https://nx.eiphax.tech/ban). 

---

<p align="center">
<big><a href="https://www.youtube.com/watch?v=8Kc-TI1_Xxc">This guide is available on Youtube!</a></big> <iframe id="ytplayer" type="text/html" width="800" height="450"
src="https://www.youtube.com/embed/8Kc-TI1_Xxc"
frameborder="0" allowfullscreen></iframe>
</p>

<big>Table of Contents</big>

- [What is a ban?](#what-is-a-ban)
- [What does Nintendo ban consoles for?](#what-does-nintendo-ban-consoles-for)
- [Will I be banned for using NHSE/Poker/Game Mods?](#will-i-be-banned-for-using-nhsepokergame-mods)
- [Why shouldn't I use emuNAND?](#why-shouldnt-i-use-emunand)
- [Should I Use Incognito?](#should-i-use-incognito)
- [I won't get banned if I follow this advice?](#i-wont-get-banned-if-i-follow-this-advice)

---

# What is a ban?

A ban is when Nintendo doesn’t let a specific console or Nintendo account use online services. This includes the eShop, updating games, and online play in games. The Switch comes with a lot of telemetry, telling Nintendo what you’re doing on it, including the games you install, the games you play, and a bunch of other data too. All of this stuff is logged on your Switch, even when offline. This means doing a bannable action offline, then going online any point after, even for a second, means Nintendo receives those logs and bans you.

You can disable some of this telemetry by going into the System Settings, scrolling down to the system tab, and set Share Error Information to not share. But that doesn’t stop all telemetry. You might be asking “Why not just delete the telemetry before/after it’s been sent?” and that would also lead to a ban. A mismatch of what’s on your console vs. what’s on the server results in a ban. A factory reset doesn’t clear out any logs either.

# What does Nintendo ban consoles for?

**All of the following actions will result in getting banned immediately:**
- Piracy of any sort
- Installing Homebrew NSPs
  - These being custom homebrew apps that you install to the home menu
- Changing user icon through homebrew
- Sketchy eShop behavior

**Eventual bans:**

Modding or cheating in online games (like smash to become invincible or mk8d to get max stats) won't result in an immediate ban, but will get you eventually. The same goes for deleting telemetry logs after they've been sent to Nintendo. This might extend to using both emuNAND and sysNAND online at the same time, due to mismatched logs between them.

**The following haven't resulted in a ban so far:**
- Just using Atmosphere
- Using the Homebrew Menu (via the album or title takeover)
- Custom themes
- Custom sys-modules
  - includes overclocking with sys-clk
- Mods, or cheating in offline games 
  - This extends to ACNH!

There's basically three ways to prevent being banned. There’s basically three ways to prevent being banned. The first, don’t do the things listed above. The second, keep the console offline at all times so Nintendo is never sent the logs. The third, block your connection to Nintendo with DNS service. Sadly, there’s no way to unban your Switch. Be careful. Tl;dr, don’t pirate or ruin the experience of others by cheating in online games, and you’ll be fine. 

# Will I be banned for using NHSE/Poker/Game Mods?

As far as I know, there have never been any console bans from editing your save, but there are "temporary" and "save" bans. On the ban guide, I'd say the console ban from modding/save editing excludes New Horizons, because that mostly means competitive games like Smash or mk8.

**Temp bans** are for using mods that can't be used in online play, or making illegal save edits. The 360 camera mod is one that can be used in online play, but a mod that changes the spawn rate of every critter in the game might not. That prevents you from accessing online modes in New Horizons until you remove the mod. When you do remove it, you'll be able to use online services again. Making an illegal edit can be undone, and will let you go online again. 
And by making illegal save edits, the only "illegal" edit I've found was changing the personality of a villager to something it isn't.

**Save bans** prevent a save from ever going online again. Presumably, each created island has its own ID, which will never be the same as another. When you do something that elicits a save ban, then it prevents any island with that specific ID from going online. It's still nothing to worry about, as you can simply make a new save and play on that. The only thing I've seen cause a save ban is sharing a direct JKSV dump to another person, and both of those islands being online. 

Basically, there's nothing to worry about. <br> In the case of a "temp" ban, you simply have to remove the mod or illegal edit. <br> In the case of a "save" ban, you just have to make a new island. All of your progress can be carried over by dumping the map, player flags, etc. onto the new island.

# Why shouldn't I use emuNAND?

**emuNAND** (aka emuMMC) is, essentially, a second switch. It is stored completely on your SD card, on a separate partition, and not the internal storage. Because of this, whatever you do on your emuNAND will not be on your sysNAND, and whatever you do on your sysNAND will not be on your emuNAND.

For the most part, emuNAND is used to do things that could get you banned, but to always keep it OFFLINE, then only go online with sysNAND. So since all of the bannable actions were done on the emuNAND, keeping it forever offline let’s you get away with being banned. Another way it could be used is to prevent a brick, something that could render your device completely useless. Do note however, your sysNAND and emuNAND do share a couple of things, such as the system/cartridge fuses, as well as your ban state. So if you DO get banned, there's nothing you can do.

This guide does not go over setting up emuNAND. It is not needed, nor is it recommended, unless you want to pirate, or do other bannable actions. In the case of Animal Crossing, no matter what mods you have or what you do in the game, you can't be banned. The most that will happen is the game prevents you from going online, until you remove the downloaded mods. And when they're removed, it's like nothing happened. You shouldn’t go online with emuNAND and then go online with sysNAND, as mismatched logs will be the reason you get banned. Plus, the entire point of emuNAND is to keep it offline.

To not worry about this, simply go online with sysCFW. Not only does it give you the benefits of Custom Firmware, but because sysCFW is on your sysNAND (hence the name) you don't have to worry about mismatched logs, as the logs will be the same on both. 

# Should I Use Incognito?

Incognito works by blanking parts of your console's PRODINFO. Incognito is not recommended for many reasons. 
1. Your PRODINFO is unique data to your console and it is required for it to boot. If Incognito malfunctions and writes the data in the wrong spot, and you don’t have a backup of the original PRODINFO, it can result in damage to your device, as worse as a brick and not being able to play online ever again.
2. Incognito works by sending “invalid data” when connecting to Nintendo’s servers, which currently doesn’t accept that data. If Nintendo decides to go on a banning spree, they can simply set their servers to receive these connections, and anyone using Incognito has now sent their data to Nintendo.
3. Incognito is incompatible with Atmosphere because Atmosphere disables writing to the CAL0, which Incognito has to do. Because of that, the only way to use Incognito is to use CFW’s other than Atmosphere, which increases the risk of banning your Switch. 
4. Atmosphere has its own virtual PRODINFO blanking feature as of 0.12.0, which is safer than Incognito because nothing is deleted, only redirected. However, it’s still not as viable as using 90dns or configuring AMS to block Nintendo’s servers.  
If you do want to use Incognito for whatever reason, make backups of your PRODINFO in case something does go wrong.

# I won't get banned if I follow this advice?

While I want to say yes, nothing’s guaranteed. I am getting information from good sources, but Nintendo can always add more telemetry or change what they consider bannable.  
The only surefire way to not get banned is to never connect to Nintendo’s servers, or not hack your switch in the first place. When you hack your console you have to accept the risk of being banned. And if it’s a risk you don’t think is worth taking, don’t hack your switch.
