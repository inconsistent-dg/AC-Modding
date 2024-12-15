#include <iostream>
#include <sstream>
#include <fstream>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

const char *xorkey = 
  "x\2553\034\026\232\260\226\311\225D\263$\221\020f5\265\362;\366h\352\033\225\273\230\2719\005\270H\243\273\261y\0222\257'[\005\203\210O\326\267X1\230\367\242\266T-!\301:\341\240;\254\342\250\315\177'\230\332U&3\314t\3538\220\221\351\274" \
  "\244\346_\321\327\361\221\300\274\267\215-\243tO\0165\372\224fn\336|\210n\000J\233o\rtj\216\265\204I\023\022\223+\177*W@{\200\322\353Y5\206\036\3369\315\330\363\204\021\010\216\356\222\031{\036\360\254kY\245\032\270\206\365(B\002\306{" \
  "\316\025\305\007h\302\330\252\347bO/\263\007|\246\323Z\252<\255#?uX\315\006\311\320\247\243:\326\252\370Xb\306\255oR\r\024\260\277^\323\270>\267\2243iM\353_S\337\332R\032U\000\202\230\301\031\367\236\320\016\2433pZa\201\223\035\235" \
  "\021\r\242\371\017\266\023m\276\244\343\250\247\302~\024\333\244\032\177d6W\035\375\026A\220I\220\262\370\262\034.WdD\t\266+\021\336o\347\332\256\207\264\347J\275\360\252\354.U\355\266\362gq\204^\351M\230\257N!\3224vC\247$\235\373\216\306" \
  "\030\366\3656X\0064n3\027\302\315r\333\367\327\335+\343\377\264\347\031p9k\244\213\224\243\211>\026\025\264N\232\265\003e\376\236\243Dv\374/\320\315\360R\205\377l\316u\364\343\326_c\366\345\274,\335\367=\265[\213\265_\340\342o\213\3577*" \
  "HH]u!'q\352y\214\034;\213(\"G\201\201e\242\2333\374Y\202GF\300H\267v\325\302\221\246\024\306D[+~\215te\215\177\244\277\302\221\022\002&\350\224x3\323\342\234C\371\342\005\t\262\351zk\233\367`\307\360?\215K\225\004\274" \
  "\325\362\315\215af\000\244',WR\304\177\007\357\207\242$H\326\220w8\223C<\177\257?\021\2079)\340LlUy\346\346\177\020\327\261\233\226\266\307\306+I\000\233\340\036\036|\261rs?\272-\205UK`Z\021\320\304\241\035\r\325/}%\t" \
  "\000\\e\315\324\037\002\362\235%\316\001[\266\345\301\270'\221w\224\003\034\023'\345\235T\313\221\354\204O\271p\250\303\326\036\310\310\3224\333\214c\024\211\010\333\t\235{\210v\020\"\245\341V\266\366~\327f\261\036u^\261\334ES\023)\224V\026\345\347" \
  "\270\272\033\346h9\253@\242\254pZCt\2005+y\306\226\216\277\013\022OP\224?\250\302\300\310Mj\3560;\373\233\024\360\301\0018N\273[hT\272'\341\263~5YKN*\317\337\272X\325Z\272\351\354\030,\313\037\"\016\202\207/\177\n\343" \
  "\242\007si\334\r \005\212A\233\271]\276\260\000\304\273\034\345q\003\001\177\367\031\300\265_\217P\346C\3173\306*\256\3129\023\213\273\2616\246\321F\014\315\205WPny\365\036v\026z\036Z\330\023~\335\001\262]_~M\3634vZ;f\262o" \
  "\255 \364 \013+Z\337[\375{FU\006O\234\377-0\350\256\201pp\036\026\t\255y\013\337\\\3577\n\345J\220\345\203\344e\326\035\303\263\004\362\224\204^CY\365\r\255\223\352\355\260\310%\377\253~\345\326\252\217\214$\276K\317\337\222\254\360\251\347" \
  "\374\360jU\022\267\010\241'\261v*\016'\\\252q\372=\371\333\242\301gw\016\374\037C\370<X\343M\324+.)\230\334.\307w\002\254_\224~!>\341RC\263r\321V\331b\302\006u\360\003\320\227\265\356\010jp\327\2258\314j<d\303&" \
  "Q19\201\n\206\027\270Y\216\321\036C\351T\372\233\314\2207\241\315o!\216\344\\'\207\243\207\205x\021\362n\262o.*";
uint32_t xorkey_len = 1000;


std::string item_lookup(uint32_t ID){
  switch (ID){
    case 1301048: return "Gold Treats";
    default: return "Unknown";
  }
}

std::string npc_lookup(std::string ID){
  if (ID == "sza00"){return "Isabelle";}
  if (ID == "xct00"){return "Rover";}
  if (ID == "rco00"){return "Tom Nook";}
  if (ID == "fox00"){return "Redd";}
  if (ID == "poo00"){return "Harriet";}
  if (ID == "owl00"){return "Blathers";}
  if (ID == "pkn00"){return "Jack";}
  if (ID == "end00"){return "K.K.";}
  if (ID == "hgs00"){return "Sable";}
  if (ID == "hgh00"){return "Mabel";}
  if (ID == "pga00"){return "Pelly";}
  if (ID == "pgb00"){return "Phyllis";}
  if (ID == "alw00"){return "Reese";}
  if (ID == "alp00"){return "Cyrus";}
  if (ID == "ows00"){return "Celeste";}
  if (ID == "lrm00"){return "Timmy";}
  if (ID == "lrt00"){return "Tommy";}
  if (ID == "moo00"){return "Resetti";}
  if (ID == "mob00"){return "Don";}
  if (ID == "mke00"){return "Porter";}
  if (ID == "kpp00"){return "Kapp'n";}
  if (ID == "seg00"){return "Gulliver";}
  if (ID == "wrl00"){return "Wendell";}
  if (ID == "pge00"){return "Brewster";}
  if (ID == "ott00"){return "Lyle";}
  if (ID == "lom00"){return "Katie";}
  if (ID == "slo00"){return "Leif";}
  if (ID == "pyn00"){return "Zipper";}
  if (ID == "seo00"){return "Pascal";}
  if (ID == "cml00"){return "Saharah";}
  if (ID == "tuk00"){return "Franklin";}
  if (ID == "grf00"){return "Gracie";}
  if (ID == "upa00"){return "Shrunk";}
  if (ID == "bpt00"){return "Katrina";}
  if (ID == "plb00"){return "Pete";}
  if (ID == "snt00"){return "Jingle";}
  if (ID == "bev00"){return "Chip";}
  if (ID == "szo00"){return "Digby";}
  if (ID == "hgc00"){return "Labelle";}
  if (ID == "skk00"){return "Kicks";}
  if (ID == "chm00"){return "Nat";}
  if (ID == "pck00"){return "Pavé";}
  if (ID == "hnw00"){return "Lloid";}
  if (ID == "tap00"){return "Luna";}
  if (ID == "bln00"){return "Phineas";}
  if (ID == "boa00"){return "Joan";}
  if (ID == "plc00"){return "Copper";}
  if (ID == "pla00"){return "Booker";}
  if (ID == "mka00"){return "Blanca";}
  if (ID == "kpm00"){return "Leilani";}
  if (ID == "kpg00"){return "Grams";}
  if (ID == "kps00"){return "Leila";}
  if (ID == "ttl00"){return "Tortimer";}
  if (ID == "otg00"){return "Lottie";}
  if (ID == "cwa00"){return "Giovanni";}
  if (ID == "cwb00"){return "Carlo";}
  if (ID == "cwc00"){return "Beppe";}
  if (ID == "ant00"){return "Cyrano";}
  if (ID == "ant01"){return "Antonio";}
  if (ID == "ant02"){return "Pango";}
  if (ID == "ant03"){return "Anabelle";}
  if (ID == "ant04"){return "";}
  if (ID == "ant05"){return "Zoe";}
  if (ID == "ant06"){return "Snooty";}
  if (ID == "ant07"){return "";}
  if (ID == "ant08"){return "Annalisa";}
  if (ID == "ant09"){return "Olaf";}
  if (ID == "bea00"){return "Teddy";}
  if (ID == "bea01"){return "Pinky";}
  if (ID == "bea02"){return "Curt";}
  if (ID == "bea03"){return "Chow";}
  if (ID == "bea04"){return "";}
  if (ID == "bea05"){return "Nate";}
  if (ID == "bea06"){return "Groucho";}
  if (ID == "bea07"){return "Tutu";}
  if (ID == "bea08"){return "Ursala";}
  if (ID == "bea09"){return "Grizzly";}
  if (ID == "bea10"){return "Paula";}
  if (ID == "bea11"){return "Ike";}
  if (ID == "bea12"){return "Charlise";}
  if (ID == "bea13"){return "Beardo";}
  if (ID == "bea14"){return "Klaus";}
  if (ID == "brd00"){return "Jay";}
  if (ID == "brd01"){return "Robin";}
  if (ID == "brd02"){return "Anchovy";}
  if (ID == "brd03"){return "Twiggy";}
  if (ID == "brd04"){return "Jitters";}
  if (ID == "brd05"){return "Piper";}
  if (ID == "brd06"){return "Admiral";}
  if (ID == "brd07"){return "";}
  if (ID == "brd08"){return "Midge";}
  if (ID == "brd09"){return "Ace";}
  if (ID == "brd10"){return "";}
  if (ID == "brd11"){return "Jacob";}
  if (ID == "brd12"){return "";}
  if (ID == "brd13"){return "";}
  if (ID == "brd14"){return "";}
  if (ID == "brd15"){return "Lucha";}
  if (ID == "brd16"){return "Jacques";}
  if (ID == "brd17"){return "Peck";}
  if (ID == "brd18"){return "Sparro";}
  if (ID == "bul00"){return "Angus";}
  if (ID == "bul01"){return "Rodeo";}
  if (ID == "bul02"){return "";}
  if (ID == "bul03"){return "Stu";}
  if (ID == "bul04"){return "";}
  if (ID == "bul05"){return "T-Bone";}
  if (ID == "bul06"){return "";}
  if (ID == "bul07"){return "Coach";}
  if (ID == "bul08"){return "Vic";}
  if (ID == "cat00"){return "Bob";}
  if (ID == "cat01"){return "Mitzi";}
  if (ID == "cat02"){return "Rosie";}
  if (ID == "cat03"){return "Olivia";}
  if (ID == "cat04"){return "Kiki";}
  if (ID == "cat05"){return "Tangy";}
  if (ID == "cat06"){return "Punchy";}
  if (ID == "cat07"){return "Purrl";}
  if (ID == "cat08"){return "Moe";}
  if (ID == "cat09"){return "Kabuki";}
  if (ID == "cat10"){return "Kid Cat";}
  if (ID == "cat11"){return "Monique";}
  if (ID == "cat12"){return "Tabby";}
  if (ID == "cat13"){return "Stinky";}
  if (ID == "cat14"){return "Kitty";}
  if (ID == "cat15"){return "Tom";}
  if (ID == "cat16"){return "Merry";}
  if (ID == "cat17"){return "Felicity";}
  if (ID == "cat18"){return "Lolly";}
  if (ID == "cat19"){return "Ankha";}
  if (ID == "cat20"){return "Rudy";}
  if (ID == "cat21"){return "Katt";}
  if (ID == "cbr00"){return "Bluebear";}
  if (ID == "cbr01"){return "Maple";}
  if (ID == "cbr02"){return "Poncho";}
  if (ID == "cbr03"){return "Pudge";}
  if (ID == "cbr04"){return "Kody";}
  if (ID == "cbr05"){return "Stitches";}
  if (ID == "cbr06"){return "Vladimir";}
  if (ID == "cbr07"){return "Murphy";}
  if (ID == "cbr08"){return "";}
  if (ID == "cbr09"){return "Olive";}
  if (ID == "cbr10"){return "Cheri";}
  if (ID == "cbr11"){return "";}
  if (ID == "cbr12"){return "";}
  if (ID == "cbr13"){return "June";}
  if (ID == "cbr14"){return "Pekoe";}
  if (ID == "cbr15"){return "Chester";}
  if (ID == "cbr16"){return "Barold";}
  if (ID == "cbr17"){return "Tammy";}
  if (ID == "chn00"){return "Goose";}
  if (ID == "chn01"){return "Benedict";}
  if (ID == "chn02"){return "Egbert";}
  if (ID == "chn03"){return "";}
  if (ID == "chn04"){return "";}
  if (ID == "chn05"){return "Ava";}
  if (ID == "chn06"){return "";}
  if (ID == "chn07"){return "";}
  if (ID == "chn08"){return "";}
  if (ID == "chn09"){return "Becky";}
  if (ID == "chn10"){return "Plucky";}
  if (ID == "chn11"){return "Knox";}
  if (ID == "chn12"){return "Broffina";}
  if (ID == "chn13"){return "Ken";}
  if (ID == "cow00"){return "Patty";}
  if (ID == "cow01"){return "Tipper";}
  if (ID == "cow02"){return "";}
  if (ID == "cow03"){return "";}
  if (ID == "cow04"){return "";}
  if (ID == "cow05"){return "";}
  if (ID == "cow06"){return "Norma";}
  if (ID == "cow07"){return "Naomi";}
  if (ID == "crd00"){return "Alfonso";}
  if (ID == "crd01"){return "Alli";}
  if (ID == "crd02"){return "Boots";}
  if (ID == "crd03"){return "";}
  if (ID == "crd04"){return "Del";}
  if (ID == "crd05"){return "Roswell";}
  if (ID == "crd06"){return "Sly";}
  if (ID == "crd07"){return "Gayle";}
  if (ID == "crd08"){return "Drago";}
  if (ID == "der00"){return "Fauna";}
  if (ID == "der01"){return "Bam";}
  if (ID == "der02"){return "Zell";}
  if (ID == "der03"){return "Bruce";}
  if (ID == "der04"){return "Deirdre";}
  if (ID == "der05"){return "Lopez";}
  if (ID == "der06"){return "Fuchsia";}
  if (ID == "der07"){return "Beau";}
  if (ID == "der08"){return "Diana";}
  if (ID == "der09"){return "Erik";}
  if (ID == "dog00"){return "Goldie";}
  if (ID == "dog01"){return "Butch";}
  if (ID == "dog02"){return "Lucky";}
  if (ID == "dog03"){return "Biskit";}
  if (ID == "dog04"){return "Bones";}
  if (ID == "dog05"){return "Portia";}
  if (ID == "dog06"){return "Walker";}
  if (ID == "dog07"){return "Daisy";}
  if (ID == "dog08"){return "Cookie";}
  if (ID == "dog09"){return "Maddie";}
  if (ID == "dog10"){return "Bea";}
  if (ID == "dog11"){return "Frett";}
  if (ID == "dog12"){return "";}
  if (ID == "dog13"){return "";}
  if (ID == "dog14"){return "Mac";}
  if (ID == "dog15"){return "Marcel";}
  if (ID == "dog16"){return "Benjamin";}
  if (ID == "dog17"){return "Cherry";}
  if (ID == "dog18"){return "Shep";}
  if (ID == "duk00"){return "Bill";}
  if (ID == "duk01"){return "Joey";}
  if (ID == "duk02"){return "Pate";}
  if (ID == "duk03"){return "Maelle";}
  if (ID == "duk04"){return "Deena";}
  if (ID == "duk05"){return "Pompom";}
  if (ID == "duk06"){return "Mallary";}
  if (ID == "duk07"){return "Freckles";}
  if (ID == "duk08"){return "Derwin";}
  if (ID == "duk09"){return "Drake";}
  if (ID == "duk10"){return "Scoot";}
  if (ID == "duk11"){return "Weber";}
  if (ID == "duk12"){return "Miranda";}
  if (ID == "duk13"){return "Ketchup";}
  if (ID == "duk14"){return "";}
  if (ID == "duk15"){return "Gloria";}
  if (ID == "duk16"){return "Molly";}
  if (ID == "duk17"){return "Quillson";}
  if (ID == "elp00"){return "Opal";}
  if (ID == "elp01"){return "Dizzy";}
  if (ID == "elp02"){return "Big Top";}
  if (ID == "elp03"){return "Eloise";}
  if (ID == "elp04"){return "Margie";}
  if (ID == "elp05"){return "Paolo";}
  if (ID == "elp06"){return "Axel";}
  if (ID == "elp07"){return "Ellie";}
  if (ID == "elp08"){return "";}
  if (ID == "elp09"){return "Tucker";}
  if (ID == "elp10"){return "Tia";}
  if (ID == "flg00"){return "Lily";}
  if (ID == "flg01"){return "Ribbot";}
  if (ID == "flg02"){return "Frobert";}
  if (ID == "flg03"){return "Camofrog";}
  if (ID == "flg04"){return "Drift";}
  if (ID == "flg05"){return "Wart Jr.";}
  if (ID == "flg06"){return "Puddles";}
  if (ID == "flg07"){return "Jeremiah";}
  if (ID == "flg08"){return "";}
  if (ID == "flg09"){return "Tad";}
  if (ID == "flg10"){return "Cousteau";}
  if (ID == "flg11"){return "Huck";}
  if (ID == "flg12"){return "Prince";}
  if (ID == "flg13"){return "Jambette";}
  if (ID == "flg14"){return "";}
  if (ID == "flg15"){return "Raddle";}
  if (ID == "flg16"){return "Gigi";}
  if (ID == "flg17"){return "Croque";}
  if (ID == "flg18"){return "Diva";}
  if (ID == "flg19"){return "Henry";}
  if (ID == "goa00"){return "Chevre";}
  if (ID == "goa01"){return "Nan";}
  if (ID == "goa02"){return "Billy";}
  if (ID == "goa03"){return "";}
  if (ID == "goa04"){return "Gruff";}
  if (ID == "goa05"){return "";}
  if (ID == "goa06"){return "Velma";}
  if (ID == "goa07"){return "Kidd";}
  if (ID == "goa08"){return "Pashmina";}
  if (ID == "gor00"){return "Cesar";}
  if (ID == "gor01"){return "Peewee";}
  if (ID == "gor02"){return "Boone";}
  if (ID == "gor03"){return "";}
  if (ID == "gor04"){return "Louie";}
  if (ID == "gor05"){return "Boyd";}
  if (ID == "gor06"){return "";}
  if (ID == "gor07"){return "Violet";}
  if (ID == "gor08"){return "Al";}
  if (ID == "gor09"){return "Rocket";}
  if (ID == "gor10"){return "Hans";}
  if (ID == "ham00"){return "Hamlet";}
  if (ID == "ham01"){return "Apple";}
  if (ID == "ham02"){return "Graham";}
  if (ID == "ham03"){return "Rodney";}
  if (ID == "ham04"){return "Soleil";}
  if (ID == "ham05"){return "Clay";}
  if (ID == "ham06"){return "Flurry";}
  if (ID == "ham07"){return "Hamphrey";}
  if (ID == "hip00"){return "Rocco";}
  if (ID == "hip01"){return "";}
  if (ID == "hip02"){return "Bubbles";}
  if (ID == "hip03"){return "Bertha";}
  if (ID == "hip04"){return "Biff";}
  if (ID == "hip05"){return "Bitty";}
  if (ID == "hip06"){return "";}
  if (ID == "hip07"){return "";}
  if (ID == "hip08"){return "Harry";}
  if (ID == "hip09"){return "Hippeux";}
  if (ID == "hrs00"){return "Buck";}
  if (ID == "hrs01"){return "Victoria";}
  if (ID == "hrs02"){return "Savannah";}
  if (ID == "hrs03"){return "Elmer";}
  if (ID == "hrs04"){return "Roscoe";}
  if (ID == "hrs05"){return "Winnie";}
  if (ID == "hrs06"){return "Ed";}
  if (ID == "hrs07"){return "Cleo";}
  if (ID == "hrs08"){return "Peaches";}
  if (ID == "hrs09"){return "Annalise";}
  if (ID == "hrs10"){return "Clyde";}
  if (ID == "hrs11"){return "Colton";}
  if (ID == "hrs12"){return "Papi";}
  if (ID == "hrs13"){return "Julian";}
  if (ID == "kal00"){return "Yuka";}
  if (ID == "kal01"){return "Alice";}
  if (ID == "kal02"){return "Melba";}
  if (ID == "kal03"){return "Sydney";}
  if (ID == "kal04"){return "Gonzo";}
  if (ID == "kal05"){return "Ozzie";}
  if (ID == "kal06"){return "";}
  if (ID == "kal07"){return "Faith";}
  if (ID == "kal08"){return "Canberra";}
  if (ID == "kal09"){return "Lyman";}
  if (ID == "kal10"){return "Eugene";}
  if (ID == "kgr00"){return "Kitt";}
  if (ID == "kgr01"){return "Mathilda";}
  if (ID == "kgr02"){return "Carrie";}
  if (ID == "kgr03"){return "";}
  if (ID == "kgr04"){return "";}
  if (ID == "kgr05"){return "Astrid";}
  if (ID == "kgr06"){return "Sylvia";}
  if (ID == "kgr07"){return "";}
  if (ID == "kgr08"){return "Walt";}
  if (ID == "kgr09"){return "Rooney";}
  if (ID == "kgr10"){return "Marcie";}
  if (ID == "lon00"){return "Bud";}
  if (ID == "lon01"){return "Elvis";}
  if (ID == "lon02"){return "Rex";}
  if (ID == "lon03"){return "";}
  if (ID == "lon04"){return "Leopold";}
  if (ID == "lon05"){return "";}
  if (ID == "lon06"){return "Mott";}
  if (ID == "lon07"){return "Rory";}
  if (ID == "lon08"){return "Lionel";}
  if (ID == "mnk00"){return "";}
  if (ID == "mnk01"){return "Nana";}
  if (ID == "mnk02"){return "Simon";}
  if (ID == "mnk03"){return "Tammi";}
  if (ID == "mnk04"){return "Monty";}
  if (ID == "mnk05"){return "Elise";}
  if (ID == "mnk06"){return "Flip";}
  if (ID == "mnk07"){return "Shari";}
  if (ID == "mnk08"){return "Deli";}
  if (ID == "mus00"){return "Dora";}
  if (ID == "mus01"){return "Limberg";}
  if (ID == "mus02"){return "Bella";}
  if (ID == "mus03"){return "Bree";}
  if (ID == "mus04"){return "Samson";}
  if (ID == "mus05"){return "Rod";}
  if (ID == "mus06"){return "";}
  if (ID == "mus07"){return "";}
  if (ID == "mus08"){return "Candi";}
  if (ID == "mus09"){return "Rizzo";}
  if (ID == "mus10"){return "Anicotti";}
  if (ID == "mus11"){return "";}
  if (ID == "mus12"){return "Broccolo";}
  if (ID == "mus13"){return "";}
  if (ID == "mus14"){return "Moose";}
  if (ID == "mus15"){return "Bettina";}
  if (ID == "mus16"){return "Greta";}
  if (ID == "mus17"){return "Penelope";}
  if (ID == "mus18"){return "Chadder";}
  if (ID == "ocp00"){return "Octavian";}
  if (ID == "ocp01"){return "Marina";}
  if (ID == "ocp02"){return "Zucker";}
  if (ID == "ost00"){return "Queenie";}
  if (ID == "ost01"){return "Gladys";}
  if (ID == "ost02"){return "Sandy";}
  if (ID == "ost03"){return "Sprocket";}
  if (ID == "ost04"){return "Rio";}
  if (ID == "ost05"){return "Julia";}
  if (ID == "ost06"){return "Cranston";}
  if (ID == "ost07"){return "Phil";}
  if (ID == "ost08"){return "Blanche";}
  if (ID == "ost09"){return "Flora";}
  if (ID == "ost10"){return "Phoebe";}
  if (ID == "pbr00"){return "Apollo";}
  if (ID == "pbr01"){return "Amelia";}
  if (ID == "pbr02"){return "Pierce";}
  if (ID == "pbr03"){return "Buzz";}
  if (ID == "pbr04"){return "";}
  if (ID == "pbr05"){return "Avery";}
  if (ID == "pbr06"){return "Frank";}
  if (ID == "pbr07"){return "Sterling";}
  if (ID == "pbr08"){return "Keaton";}
  if (ID == "pbr09"){return "Celia";}
  if (ID == "pgn00"){return "Aurora";}
  if (ID == "pgn01"){return "Roald";}
  if (ID == "pgn02"){return "Cube";}
  if (ID == "pgn03"){return "Hopper";}
  if (ID == "pgn04"){return "Friga";}
  if (ID == "pgn05"){return "Gwen";}
  if (ID == "pgn06"){return "Puck";}
  if (ID == "pgn07"){return "Chabwick";}
  if (ID == "pgn08"){return "";}
  if (ID == "pgn09"){return "Wade";}
  if (ID == "pgn10"){return "Boomer";}
  if (ID == "pgn11"){return "Iggly";}
  if (ID == "pgn12"){return "Tex";}
  if (ID == "pgn13"){return "Flo";}
  if (ID == "pgn14"){return "Sprinkle";}
  if (ID == "pig00"){return "Curly";}
  if (ID == "pig01"){return "Truffles";}
  if (ID == "pig02"){return "Rasher";}
  if (ID == "pig03"){return "Hugh";}
  if (ID == "pig04"){return "Lucy";}
  if (ID == "pig05"){return "Spork";}
  if (ID == "pig06"){return "";}
  if (ID == "pig07"){return "";}
  if (ID == "pig08"){return "Cobb";}
  if (ID == "pig09"){return "Boris";}
  if (ID == "pig10"){return "Maggie";}
  if (ID == "pig11"){return "Peggy";}
  if (ID == "pig12"){return "";}
  if (ID == "pig13"){return "Gala";}
  if (ID == "pig14"){return "Chops";}
  if (ID == "pig15"){return "Kevin";}
  if (ID == "pig16"){return "Pancetti";}
  if (ID == "pig17"){return "Agnes";}
  if (ID == "rbt00"){return "Bunnie";}
  if (ID == "rbt01"){return "Dotty";}
  if (ID == "rbt02"){return "Coco";}
  if (ID == "rbt03"){return "Snake";}
  if (ID == "rbt04"){return "Gaston";}
  if (ID == "rbt05"){return "Gabi";}
  if (ID == "rbt06"){return "Pippy";}
  if (ID == "rbt07"){return "Tiffany";}
  if (ID == "rbt08"){return "Genji";}
  if (ID == "rbt09"){return "Ruby";}
  if (ID == "rbt10"){return "Doc";}
  if (ID == "rbt11"){return "Claude";}
  if (ID == "rbt12"){return "Francine";}
  if (ID == "rbt13"){return "Chrissy";}
  if (ID == "rbt14"){return "Hopkins";}
  if (ID == "rbt15"){return "O'Hare";}
  if (ID == "rbt16"){return "Carmen";}
  if (ID == "rbt17"){return "Bonbon";}
  if (ID == "rbt18"){return "Cole";}
  if (ID == "rbt19"){return "Mira";}
  if (ID == "rhn00"){return "Tank";}
  if (ID == "rhn01"){return "Rhonda";}
  if (ID == "rhn02"){return "Spike";}
  if (ID == "rhn03"){return "";}
  if (ID == "rhn04"){return "Hornsby";}
  if (ID == "rhn05"){return "Azalea";}
  if (ID == "rhn06"){return "";}
  if (ID == "rhn07"){return "Merengue";}
  if (ID == "rhn08"){return "Renée";}
  if (ID == "shp00"){return "Vesta";}
  if (ID == "shp01"){return "Baabara";}
  if (ID == "shp02"){return "Eunice";}
  if (ID == "shp03"){return "Stella";}
  if (ID == "shp04"){return "Cashmere";}
  if (ID == "shp05"){return "";}
  if (ID == "shp06"){return "";}
  if (ID == "shp07"){return "Willow";}
  if (ID == "shp08"){return "Curlos";}
  if (ID == "shp09"){return "Wendy";}
  if (ID == "shp10"){return "Timbra";}
  if (ID == "shp11"){return "Frita";}
  if (ID == "shp12"){return "Muffy";}
  if (ID == "shp13"){return "Pietro";}
  if (ID == "squ00"){return "Peanut";}
  if (ID == "squ01"){return "Blaire";}
  if (ID == "squ02"){return "Filbert";}
  if (ID == "squ03"){return "Pecan";}
  if (ID == "squ04"){return "Nibbles";}
  if (ID == "squ05"){return "Agent S";}
  if (ID == "squ06"){return "Caroline";}
  if (ID == "squ07"){return "Sally";}
  if (ID == "squ08"){return "Static";}
  if (ID == "squ09"){return "Mint";}
  if (ID == "squ10"){return "Ricky";}
  if (ID == "squ11"){return "Cally";}
  if (ID == "squ12"){return "";}
  if (ID == "squ13"){return "Tasha";}
  if (ID == "squ14"){return "Sylvana";}
  if (ID == "squ15"){return "Poppy";}
  if (ID == "squ16"){return "Sheldon";}
  if (ID == "squ17"){return "Marshal";}
  if (ID == "squ18"){return "Hazel";}
  if (ID == "tig00"){return "Rolf";}
  if (ID == "tig01"){return "Rowan";}
  if (ID == "tig02"){return "Tybalt";}
  if (ID == "tig03"){return "Bangle";}
  if (ID == "tig04"){return "Leonardo";}
  if (ID == "tig05"){return "Claudia";}
  if (ID == "tig06"){return "Bianca";}
  if (ID == "wol00"){return "Chief";}
  if (ID == "wol01"){return "Lobo";}
  if (ID == "wol02"){return "Wolfgang";}
  if (ID == "wol03"){return "Whitney";}
  if (ID == "wol04"){return "Dobie";}
  if (ID == "wol05"){return "Freya";}
  if (ID == "wol06"){return "Fang";}
  if (ID == "wol07"){return "";}
  if (ID == "wol08"){return "Vivian";}
  if (ID == "wol09"){return "Skye";}
  if (ID == "wol10"){return "Kyle";}
  if (ID == "end03"){return "DJ KK";}
  if (ID == "elp11"){return "Chai";}
  if (ID == "gor11"){return "Rilla";}
  if (ID == "cbr18"){return "Marty";}
  if (ID == "der10"){return "Chelsea";}
  if (ID == "rbt20"){return "Toby";}
  if (ID == "shp14"){return "Étoile";}
  if (ID == "bea15"){return "Megan";}
  if (ID == "cat23"){return "Raymond";}
  if (ID == "cbr19"){return "Judy";}
  if (ID == "elp12"){return "Cyd";}
  if (ID == "goa09"){return "Sherb";}
  if (ID == "hrs16"){return "Reneigh";}
  if (ID == "shp15"){return "Dom";}
  if (ID == "wol12"){return "Audie";}
  if (ID == "boc00"){return "Daisy Mae";}
  if (ID == "gst00"){return "Wisp";}
  if (ID == "bey00"){return "C.J.";}
  if (ID == "chy00"){return "Flick";}
  if (ID == "spn00"){return "Harvey";}
  if (ID == "der11"){return "Shino";}
  if (ID == "ham09"){return "Marlo";}
  if (ID == "mnk09"){return "Tiansheng";}
  if (ID == "mus19"){return "Petri";}
  if (ID == "ocp04"){return "Cephalobot";}
  if (ID == "pbr10"){return "Quinn";}
  if (ID == "rbt21"){return "Sasha";}
  if (ID == "squ21"){return "Ione";}
  if (ID == "doc00"){return "Wilbur";}
  if (ID == "dod00"){return "Orville";}
  return "";
}


/// Right rotate function. Shifts bytes off the least significant end, wrapping them to the most significant end.
static inline uint32_t rr(uint32_t x, uint32_t c){
  return ((x << (32 - c)) | ((x & 0xFFFFFFFF) >> c));
}

/// Adds 64 bytes of data to the current SHA256 hash.
/// hash is the current hash, represented by 8 unsigned longs.
/// data is the 64 bytes of data that need to be added.
static inline void sha256_add64(uint32_t *hash, const unsigned char *data){
  // Inspired by the pseudocode as available on Wikipedia on March 3rd, 2015.
  uint32_t w[64];
  for (unsigned int i = 0; i < 16; ++i){
    w[i] = (uint32_t)data[(i << 2) + 3] | ((uint32_t)data[(i << 2) + 2] << 8) |
           ((uint32_t)data[(i << 2) + 1] << 16) | ((uint32_t)data[(i << 2) + 0] << 24);
  }

  for (unsigned int i = 16; i < 64; ++i){
    uint32_t s0 = rr(w[i - 15], 7) ^ rr(w[i - 15], 18) ^ ((w[i - 15] & 0xFFFFFFFF) >> 3);
    uint32_t s1 = rr(w[i - 2], 17) ^ rr(w[i - 2], 19) ^ ((w[i - 2] & 0xFFFFFFFF) >> 10);
    w[i] = w[i - 16] + s0 + w[i - 7] + s1;
  }

  static uint32_t k[] ={0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1,
                         0x923f82a4, 0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
                         0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786,
                         0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
                         0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147,
                         0x06ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
                         0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b,
                         0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
                         0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a,
                         0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
                         0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2};
  uint32_t a = hash[0];
  uint32_t b = hash[1];
  uint32_t c = hash[2];
  uint32_t d = hash[3];
  uint32_t e = hash[4];
  uint32_t f = hash[5];
  uint32_t g = hash[6];
  uint32_t h = hash[7];
  for (unsigned int i = 0; i < 64; ++i){
    uint32_t temp1 = h + (rr(e, 6) ^ rr(e, 11) ^ rr(e, 25)) + (g ^ (e & (f ^ g))) + k[i] + w[i];
    uint32_t temp2 = (rr(a, 2) ^ rr(a, 13) ^ rr(a, 22)) + ((a & b) | (c & (a | b)));
    h = g;
    g = f;
    f = e;
    e = d + temp1;
    d = c;
    c = b;
    b = a;
    a = temp1 + temp2;
  }
  hash[0] += a;
  hash[1] += b;
  hash[2] += c;
  hash[3] += d;
  hash[4] += e;
  hash[5] += f;
  hash[6] += g;
  hash[7] += h;
}

/// Calculates a SHA256 digest as per NSAs SHA-2, returning it as binary.
/// Assumes output is big enough to contain 32 bytes of data.
void sha256bin(const unsigned char *input, const unsigned int in_len, unsigned char *output){
  // Initialize the hash, according to MD5 spec.
  uint32_t hash[] ={0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
                     0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19};
  // Add as many whole blocks of 64 bytes as possible from the input, until < 64 are left.
  unsigned int offset = 0;
  while (offset + 64 <= in_len){
    sha256_add64(hash, input + offset);
    offset += 64;
  }
  // now, copy the remainder to a 64 byte buffer.
  unsigned char buffer[64];
  memcpy(buffer, input + offset, in_len - offset);
  // Calculate how much we've filled in that buffer
  offset = in_len - offset;
  // We know at least 1 byte must be empty, so we can safely do this
  buffer[offset] = 0x80; // append 0x80
  // fill to the end of the buffer with zeroes
  memset(buffer + offset + 1, 0, 64 - offset - 1);
  if (offset > 55){
    // There's no space for the length, add what we have and zero it
    sha256_add64(hash, buffer);
    memset(buffer, 0, 64);
  }
  unsigned long long bit_len = in_len << 3;
  // Write the length into the last 8 bytes
  buffer[56] = (bit_len >> 54) & 0xff;
  buffer[57] = (bit_len >> 48) & 0xff;
  buffer[58] = (bit_len >> 40) & 0xff;
  buffer[59] = (bit_len >> 32) & 0xff;
  buffer[60] = (bit_len >> 24) & 0xff;
  buffer[61] = (bit_len >> 16) & 0xff;
  buffer[62] = (bit_len >> 8) & 0xff;
  buffer[63] = (bit_len >> 0) & 0xff;
  // Add the last bit of buffer
  sha256_add64(hash, buffer);
  // Write result to output
  output[3] = hash[0] & 0xff;
  output[2] = (hash[0] >> 8) & 0xff;
  output[1] = (hash[0] >> 16) & 0xff;
  output[0] = (hash[0] >> 24) & 0xff;
  output[7] = hash[1] & 0xff;
  output[6] = (hash[1] >> 8) & 0xff;
  output[5] = (hash[1] >> 16) & 0xff;
  output[4] = (hash[1] >> 24) & 0xff;
  output[11] = hash[2] & 0xff;
  output[10] = (hash[2] >> 8) & 0xff;
  output[9] = (hash[2] >> 16) & 0xff;
  output[8] = (hash[2] >> 24) & 0xff;
  output[15] = hash[3] & 0xff;
  output[14] = (hash[3] >> 8) & 0xff;
  output[13] = (hash[3] >> 16) & 0xff;
  output[12] = (hash[3] >> 24) & 0xff;
  output[19] = hash[4] & 0xff;
  output[18] = (hash[4] >> 8) & 0xff;
  output[17] = (hash[4] >> 16) & 0xff;
  output[16] = (hash[4] >> 24) & 0xff;
  output[23] = hash[5] & 0xff;
  output[22] = (hash[5] >> 8) & 0xff;
  output[21] = (hash[5] >> 16) & 0xff;
  output[20] = (hash[5] >> 24) & 0xff;
  output[27] = hash[6] & 0xff;
  output[26] = (hash[6] >> 8) & 0xff;
  output[25] = (hash[6] >> 16) & 0xff;
  output[24] = (hash[6] >> 24) & 0xff;
  output[31] = hash[7] & 0xff;
  output[30] = (hash[7] >> 8) & 0xff;
  output[29] = (hash[7] >> 16) & 0xff;
  output[28] = (hash[7] >> 24) & 0xff;
}

/// Calculates a SHA256 digest as per NSAs SHA-2, returning it as a hexadecimal alphanumeric string.
std::string sha256(const unsigned char *input, const size_t in_len){
  unsigned char output[32];
  sha256bin(input, in_len, output);
  std::stringstream outStr;
  for (unsigned int i = 0; i < 32; ++i){
    outStr << std::hex << std::setw(2) << std::setfill('0') << (unsigned int)(output[i] & 0xff);
  }
  return outStr.str();
}

/// Calculates a SHA256 digest as per NSAs SHA-2, returning it as a hexadecimal alphanumeric string.
std::string sha256(std::string input){return sha256((unsigned char *)input.data(), input.size());}

uint32_t ntohl(uint32_t in){
  unsigned char * v = (unsigned char*)&in;
  return ((uint32_t)v[0] << 24) | ((uint32_t)v[1] << 16) | ((uint32_t)v[2] << 8) | (uint32_t)v[3];
}

uint64_t ntohll(uint64_t in){
  return ((uint64_t)ntohl(*(uint32_t*)&in) << 32) | (uint64_t)ntohl(*(uint32_t*)(((char*)&in)+4));
}

std::string getFBStr(char * ptr){
  uint32_t offset = *(uint32_t*)ptr;
  return std::string(ptr+offset+4, *(uint32_t*)(ptr+offset));
}

int main(int argc, char ** argv){
  if (argc < 2){
    std::cout << "Usage: " << argv[0] << " <input_file> [<output_file> [options]]" << std::endl;
    std::cout << "Options:" << std::endl;
    std::cout << "  --tokens=AMOUNT - Sets leaf tokens to given number (prefix number with - or + to remove/add)" << std::endl;
    std::cout << "  --bells=AMOUNT - Sets bells to given number (prefix number with - or + to remove/add)" << std::endl;
    std::cout << "  --decrypted - Don't re-encrypt output file" << std::endl;
    return 1;
  }
  
  std::string infile, outfile;
  bool re_encrypt = true, set_tokens = false, add_tokens = false, set_bells = false, add_bells = false;
  int32_t token_target = 0, bell_target = 0;
  size_t nonopt_count = 0;
  for (size_t n = 1; n < argc; ++n){
    if (!strncmp(argv[n], "--tokens=", 9) && strlen(argv[n]) > 9){
      if (argv[n][9] == '-' || argv[n][9] == '+'){
        add_tokens = true;
        token_target = atol(argv[n] + 10);
        if (argv[n][9] == '-'){token_target *= -1;}
        std::cout << "Will add " << token_target << " to Leaf Tokens" << std::endl;
      }else{
        set_tokens = true;
        token_target = atol(argv[n] + 9);
        std::cout << "Will set Leaf Tokens to " << token_target << std::endl;
      }
      continue;
    }
    if (!strncmp(argv[n], "--bells=", 8) && strlen(argv[n]) > 8){
      if (argv[n][8] == '-' || argv[n][8] == '+'){
        add_bells = true;
        bell_target = atol(argv[n] + 9);
        if (argv[n][9] == '-'){bell_target *= -1;}
        std::cout << "Will add " << bell_target << " to Bells" << std::endl;
      }else{
        set_bells = true;
        bell_target = atol(argv[n] + 8);
        std::cout << "Will set Bells to " << bell_target << std::endl;
      }
      continue;
    }
    if (argv[n] == std::string("--decrypted")){
      re_encrypt = false;
      continue;
    }
    if (nonopt_count == 0){
      infile = argv[n];
      nonopt_count++;
      continue;
    }
    if (nonopt_count == 1){
      outfile = argv[n];
      nonopt_count++;
      continue;
    }
  }

  if (!infile.size()){
    std::cout << "No input file - aborting!" << std::endl;
    return 1;
  }


  std::cout << "Reading save from " << infile << "..." << std::endl;
  std::ifstream iFile(infile.c_str(), std::ios::binary);
  std::string dec;
  size_t i = 0;
  while (iFile.good()){
    uint8_t iChar = iFile.get();
    if (iFile.eof()){break;}
    dec += (char)(iChar ^ xorkey[i++ % 999]);
  }

  if (memcmp(dec.data(), "C4FH", 4)){
    std::cout << "Not a ACPC save file or decryption failed. Aborting as a precaution!" << std::endl;
    return 2;
  }

  std::string calcedHash = sha256((unsigned char*)dec.data()+68, dec.size() - 68);
  if (dec.substr(4, 64) != calcedHash){
    std::cout << "Hash mismatch! Aborting as a precaution." << std::endl;
    std::cout << "Hash       = " << dec.substr(4, 64) << std::endl;
    std::cout << "Calculated = " << calcedHash << std::endl;
    return 2;
  }

  std::cout << "Version: " << ntohl(*(uint32_t*)(dec.data() + 72)) << std::endl;
  std::cout << "# of keys: " << ntohl(*(uint32_t*)(dec.data() + 76)) << std::endl;

  uint64_t profileSize = 0, profileOffset = 0;

  size_t offset = 80;
  i = 0;
  while (offset + 24 <= dec.size()){
    if (dec.substr(offset, 4) != "C4SI"){break;}
    size_t keyLen = ntohl(*(uint32_t*)(dec.data() + offset + 4));
    if (offset + 24 + keyLen > dec.size()){break;}
    std::string keyName = dec.substr(offset + 8, keyLen);
    uint64_t binSize = ntohll(*(uint64_t*)(dec.data() + offset + 8 + keyLen));
    uint64_t binOffset = ntohll(*(uint64_t*)(dec.data() + offset + 8 + keyLen + 8));
    std::cout << "Key #" << i << ": " << keyName << " is " << binSize << "b at offset " << binOffset << std::endl;
    if (false){
      std::cout << "Dumping: " << std::endl;
      for (size_t i = 0; i < binSize; ++i){
        std::cout << std::hex << std::setw(2) << std::setfill('0') << ((int)*(uint8_t*)(dec.data()+binOffset+i) & 0xff);
      }
      std::cout << std::dec << std::endl;
    }
    if (keyName == "UserProfile_1"){
      profileSize = binSize;
      profileOffset = binOffset;
    }
    if (keyName.size() >= 23 && keyName.substr(0, 23) == "UserItemStockOneSlotSet"){
      char * binPtr = dec.data()+binOffset;
      char * rootTable = binPtr + *(uint32_t*)binPtr;
      uint16_t * vTable = (uint16_t*)(rootTable - *(int32_t*)rootTable);
      size_t entryCount = (vTable[0] / 2) - 2;
      if (entryCount >= 1 && vTable[2]){std::cout << "  ID = " << *(uint32_t*)(rootTable + vTable[2]) << std::endl;}
      if (entryCount >= 2 && vTable[3]){
        uint32_t* entryVector = (uint32_t*)(rootTable + vTable[3] + *(uint32_t*)(rootTable + vTable[3]));
        std::cout << "  " << entryVector[0] <<  " entries:" << std::endl;
        for (size_t e = 0; e < entryVector[0]; ++e){
          char * eTable = ((char*)&(entryVector[e+1])) + entryVector[e+1];
          uint16_t * eVTable = (uint16_t*)(eTable - *(int32_t*)eTable);
          size_t eeCount = (eVTable[0] / 2) - 2;
          std::cout << "   Entry " << (e+1) << ":" << std::endl;
          if (eeCount >= 1 && eVTable[2]){std::cout << "    ID = " << *(uint32_t*)(eTable + eVTable[2]) << std::endl;}
          if (eeCount >= 2 && eVTable[3]){
            std::cout << "    Item ID = " << *(uint32_t*)(eTable + eVTable[3]);
            std::string item_name = item_lookup(*(uint32_t*)(eTable + eVTable[3]));
            if (item_name.size()){std::cout << " (" << item_name << ")";}
            std::cout << std::endl;

          }
          if (eeCount >= 3 && eVTable[4]){std::cout << "    Date = " << *(uint32_t*)(eTable + eVTable[4]) << std::endl;}
          if (eeCount >= 4 && eVTable[5]){std::cout << "    Is Checked = " << (int)*(uint8_t*)(eTable + eVTable[5]) << std::endl;}
          if (eeCount >= 5 && eVTable[6]){std::cout << "    Num = " << *(uint16_t*)(eTable + eVTable[6]) << std::endl;}
          if (eeCount >= 6 && eVTable[7]){std::cout << "    GUID = " << getFBStr(eTable + eVTable[7]) << std::endl;}
          if (eeCount >= 7 && eVTable[8]){std::cout << "    Put place = " << (int)*(uint8_t*)(eTable + eVTable[8]) << std::endl;}
          if (eeCount >= 8 && eVTable[9]){std::cout << "    Is lock = " << (int)*(uint8_t*)(eTable + eVTable[9]) << std::endl;}
        }
      }
    }
    if (keyName.size() >= 25 && keyName.substr(0, 25) == "UserPresentBalloonOneSlot"){
      char * binPtr = dec.data()+binOffset;
      char * rootTable = binPtr + *(uint32_t*)binPtr;
      uint16_t * vTable = (uint16_t*)(rootTable - *(int32_t*)rootTable);
      size_t entryCount = (vTable[0] / 2) - 2;
      if (entryCount >= 1 && vTable[2]){std::cout << "  ID = " << *(uint32_t*)(rootTable + vTable[2]) << std::endl;}
      if (entryCount >= 2 && vTable[3]){std::cout << "  Enabled = " << (int)*(uint8_t*)(rootTable + vTable[3]) << std::endl;}
      if (entryCount >= 3 && vTable[4]){
        std::cout << "  NPC Label = " << getFBStr(rootTable + vTable[4]) << " (" << npc_lookup(getFBStr(rootTable + vTable[4])) << ")" << std::endl;
      }
      if (entryCount >= 4 && vTable[5]){std::cout << "  Rarity = " << *(uint32_t*)(rootTable + vTable[5]) << std::endl;}
      if (entryCount >= 5 && vTable[6]){std::cout << "  Position ID = " << (int)*(uint8_t*)(rootTable + vTable[6]) << std::endl;}
      if (entryCount >= 6 && vTable[7]){
        uint32_t* entryVector = (uint32_t*)(rootTable + vTable[7] + *(uint32_t*)(rootTable + vTable[7]));
        std::cout << "  " << entryVector[0] <<  " entries:" << std::endl;
        for (size_t e = 0; e < entryVector[0]; ++e){
          char * eTable = ((char*)&(entryVector[e+1])) + entryVector[e+1];
          uint16_t * eVTable = (uint16_t*)(eTable - *(int32_t*)eTable);
          size_t eeCount = (eVTable[0] / 2) - 2;
          std::cout << "   Entry " << (e+1) << ":" << std::endl;
          if (eeCount >= 1 && eVTable[2]){std::cout << "    Label = " << getFBStr(eTable + eVTable[2]) << std::endl;}
          if (eeCount >= 2 && eVTable[3]){std::cout << "    Num = " << *(uint16_t*)(eTable + eVTable[3]) << std::endl;}
          if (eeCount >= 3 && eVTable[4]){std::cout << "    Campaign ID = " << *(uint32_t*)(eTable + eVTable[4]) << std::endl;}
        }
      }
    }
    if (keyName.size() >= 18 && keyName.substr(0, 18) == "UserPresentBoxData"){
      char * binPtr = dec.data()+binOffset;
      char * rootTable = binPtr + *(uint32_t*)binPtr;
      uint16_t * vTable = (uint16_t*)(rootTable - *(int32_t*)rootTable);
      size_t entryCount = (vTable[0] / 2) - 2;
      if (entryCount >= 1 && vTable[2]){std::cout << "  ID = " << *(uint32_t*)(rootTable + vTable[2]) << std::endl;}
      if (entryCount >= 2 && vTable[3]){std::cout << "  Expired at = " << *(uint32_t*)(rootTable + vTable[3]) << std::endl;}
      if (entryCount >= 3 && vTable[4]){std::cout << "  Inventory Data ID = " << getFBStr(rootTable + vTable[4]) << std::endl;}
      if (entryCount >= 4 && vTable[5]){std::cout << "  Opened at = " << *(uint32_t*)(rootTable + vTable[5]) << std::endl;}
      if (entryCount >= 5 && vTable[6]){std::cout << "  Route = " << *(uint32_t*)(rootTable + vTable[6]) << std::endl;}
      if (entryCount >= 6 && vTable[7]){std::cout << "  Route Option = " << getFBStr(rootTable + vTable[7]) << std::endl;}
      if (entryCount >= 7 && vTable[8]){std::cout << "  Item Label = " << getFBStr(rootTable + vTable[8]) << std::endl;}
      if (entryCount >= 8 && vTable[9]){std::cout << "  Item Amount = " << *(uint32_t*)(rootTable + vTable[9]) << std::endl;}
      if (entryCount >= 9 && vTable[10]){std::cout << "  Item Option = " << getFBStr(rootTable + vTable[10]) << std::endl;}
    }
    offset += 24 + keyLen;
    ++i;
  }

  if (profileSize){
    std::cout << "User Profile: " << std::endl;

    //for (size_t i = 0; i < profileSize; ++i){
    //  std::cout << std::hex << std::setw(2) << std::setfill('0') << ((int)*(uint8_t*)(dec.data()+profileOffset+i) & 0xff);
    //}
    //std::cout << std::endl;

    char * profilePtr = dec.data()+profileOffset;
    char * rootTable = profilePtr + *(uint32_t*)profilePtr;
    uint16_t * vTable = (uint16_t*)(rootTable - *(int32_t*)rootTable);
    size_t entryCount = (vTable[0] / 2) - 2;
    if (entryCount >= 1 && vTable[2]){std::cout << "  ID = " << *(uint32_t*)(rootTable + vTable[2]) << std::endl;}
    if (entryCount >= 2 && vTable[3]){std::cout << "  Birthday = " << *(uint32_t*)(rootTable + vTable[3]) << std::endl;}
    if (entryCount >= 3 && vTable[4]){
      std::cout << "  Bells = " << *(uint32_t*)(rootTable + vTable[4]) << std::endl;
      if (add_bells){
        *(uint32_t*)(rootTable + vTable[4]) += bell_target;
        std::cout << "Adding " << bell_target << " extra tokens..." << std::endl;
      }
      if (set_bells){
        *(uint32_t*)(rootTable + vTable[4]) = bell_target;
        std::cout << "Setting token count to " << bell_target << "..." << std::endl;
      }
    }
    if (entryCount >= 4 && vTable[5]){std::cout << "  Exp = " << *(uint32_t*)(rootTable + vTable[5]) << std::endl;}
    if (entryCount >= 5 && vTable[6]){std::cout << "  RegisteredAt = " << *(uint32_t*)(rootTable + vTable[6]) << std::endl;}
    if (entryCount >= 6 && vTable[7]){std::cout << "  DealerCarLimit = " << *(uint32_t*)(rootTable + vTable[7]) << std::endl;}
    if (entryCount >= 7 && vTable[8]){std::cout << "  MagicNumber = " << *(uint32_t*)(rootTable + vTable[8]) << std::endl;}
    if (entryCount >= 8 && vTable[9]){
      std::cout << "  Leaf Tokens = " << *(uint32_t*)(rootTable + vTable[9]) << std::endl;
      if (add_tokens){
        *(uint32_t*)(rootTable + vTable[9]) += token_target;
        std::cout << "Adding " << token_target << " extra tokens..." << std::endl;
      }
      if (set_tokens){
        *(uint32_t*)(rootTable + vTable[9]) = token_target;
        std::cout << "Setting token count to " << token_target << "..." << std::endl;
      }
    }
  }

  if (!outfile.size()){
    std::cout << "No output file. Exiting because we're done." << std::endl;
    return 0;
  }
  std::cout << "Patching hash..." << std::endl;
  std::string newHash = sha256((unsigned char*)dec.data()+68, dec.size() - 68);
  memcpy(dec.data()+4, newHash.data(), 64);

  if (re_encrypt){
    std::cout << "Re-encrypting..." << std::endl;
    for (i = 0; i < dec.size(); ++i){dec[i] ^= xorkey[i % 999];}
  }

  std::ofstream oFile(outfile.c_str(), std::ios::binary);
  oFile.write(dec.data(), dec.size());
  std::cout << "Written new (" << (re_encrypt?"encrypted":"decrypted") << ") save to " << outfile << "!" << std::endl;
  return 0;
}
