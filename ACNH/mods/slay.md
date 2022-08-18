---
title: Slay!
description: notes on different stuff 
---

This is not a guide, more of my own notes on different things.  They'll be turned into their own real guides at a future date.  Probably.

[BCSV Editor](https://gamebanana.com/tools/6825)

[KKClue BCSV Vid](https://www.youtube.com/watch?v=tRsBan5HTsM)

[1.6.0 BCSV Datamine](https://wuffs.org/acnh/bcsv_160/html/) 

[2.0.5 BCSV/BYML/MSBT Datamine](https://gitlab.com/AeonSake/acnh-data)

[Translation for item ID's](https://docs.google.com/spreadsheets/d/1MMbsvDfu59OY9YBEAfHhFJ6O8vRTllNFgMrX7RBZuyI/edit#gid=0)

[CRCPedia](https://docs.google.com/spreadsheets/d/13JwdQs7uvg4gMqll0OpoaiQUlWV2lO9iSbPlymMSNSQ/)

[Item ID List (internal name and hex id)](https://mpql.net/tools/acnh/codes/item-list/)

`ItemParam.bcsv` stores price of items. name price hash 718b024d. only seems to show buy price, which is most likely the same as sell price. so can't edit them separately

`SPNpcParam.bcsv` Determines the color of the bubble and text surrounding their name while you talk to them. The value is the index of the array in the NpcColor BYML in the Pack folder (stored as an rgb float array).

`EventFlagsHouseParam.bcsv` name MaxValue hash 344b17d7. days passed since the house upgrade

Either [FishFieldActor.byml](https://gitlab.com/AeonSake/acnh-data/-/blob/master/BYML/XML/StaticParam/Param/Actor/FishFieldActor.byml.xml) or [FishStatusParam.bcsv](https://gitlab.com/AeonSake/acnh-data/-/blob/master/BCSV/CSV/FishStatusParam.bcsv.csv) BuoyLv seems to hold how many times a fish will bonk into your bob before biting. look into it? maybe??

EventFlagsHouseParam.bcsv

[`EventFlagsLandParam.bcsv`](https://gitlab.com/AeonSake/acnh-data/-/blob/master/BCSV/CSV/EventFlagsLandParam.bcsv.csv) 
> has a flag for if K.K. had his first live event. maybe the value could be changed for a permanent 3/5 star island?

> has values for the player upgrading museum/nooks/tailor/res services. 

> `TownNewsHeardEventStarted` value could be changed, possibly to skip nook/isabelle dialog at start of day.

> `WeedCount` limits the amount of weeds legally allowed to spawn naturally, to 65535! maybe this could be set to 0 to prevent all spawning of weed?

[`EventFlagsPlayerActivityParam.bcsv`](https://gitlab.com/AeonSake/acnh-data/-/blob/master/BCSV/CSV/EventFlagsPlayerActivityParam.bcsv.csv) **HitStoneCount** description roughly translates to "number of times you hit a rock to get an item out".

[`PlayerActor.byml`](https://gitlab.com/AeonSake/acnh-data/-/blob/master/BYML/XML/StaticParam/Param/Actor/PlayerActor.byml.xml) checks for collision. could be changed to disable (without poker)

`EventFlagsPlayerParam.bcsv` **SzaIslandEvaluation5star1st** or flag 692 description roughly reads "Isabelle | Received 5 stars for the first time on the island". this could be changed to have a permanent 5 star island?
> flag 524 `PlayToday` might need to be changed in addition to skip nook/isabelle dialog at start of day

[EventFlagsLifeSupportAchievementParam.bcsv](https://gitlab.com/AeonSake/acnh-data/-/blob/master/BCSV/CSV/EventFlagsLifeSupportAchievementParam.bcsv.csv) holds the mount of miles you get for completing an achievement. this could be lowered 😈
