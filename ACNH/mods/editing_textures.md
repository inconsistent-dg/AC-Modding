---
title: Editing Textures
description: Tutorial for editing ACNH Textures
---

In each models bfres, there is a folder called *Textures*. As the name suggests, this folder contains every texture the model uses. There are multiple types of textures, but the one you're going to edit will probably be the alb. 

With the texture you want to replace, right click it and select Export. Change the extension to PNG, then copy it to a directory of your choosing.

<p align="center">
  <img src="../../assets/images/NH/mods/ToolboxTex_Museum-export.png" alt="Exporting Texture with Switch Toolbox"/>
</p>

In whatever image editor you use, make and save your changes.

<p align="center">
  <img src="../../assets/images/NH/mods/ToolboxTex_Museum-bna.png" alt="Before and After for changed texture"/>
</p>

In Switch Toolbox, right click the same texture you exported and click Replace. Go to the directory with the changed texture, and select it. Keep everything the default when importing.

Now, right click the archive with the edited texture and save it. As usual, it *must* be named the same, and be compressed with ZSTD. 

<p align="center">
  <img src="../../assets/images/NH/mods/ToolboxTex_Museum-save.png" alt="Saving Archive"/>
</p>

Like any other mod, the file must go into the [layeredFs folder](../mods#loading-mods). And the edited archive must be in the same folder as in the romFs. This guide edited the `StrcMuseumA01.Nin_NX_NVN.zs` found in the Model folder, so it must be in the Model folder for the layeredFs.

<p align="center">
  <img src="../../assets/images/NH/mods/ToolboxTex_Museum-game.jpg" alt="Saving Archive"/>
</p>