---
title: yo
description: now do it without your mommy
---

<style>
.collapsible {
  background-color: #777;
  color: white;
  cursor: pointer;
  padding: 18px;
  width: 100%;
  border: none;
  text-align: left;
  outline: none;
  font-size: 15px;
}

.active, .collapsible:hover {
  background-color: #555;
}

.collapsible:after {
  content: '\002B';
  color: white;
  font-weight: bold;
  float: right;
  margin-left: 5px;
}

.active:after {
  content: "\2212";
}

.content {
  padding: 0 18px;
  max-height: 0;
  overflow: hidden;
  transition: max-height 0.2s ease-out;
  background-color: #f1f1f1;
}
</style>
</head>
<body>

# Animated Collapsibles

<p>A Collapsible:</p>
<button class="collapsible">Open Collapsible</button>
<div class="content">
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
</div>

<p>Collapsible Set:</p>
<button class="collapsible">Open Section 1</button>
<div class="content">
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
</div>
<button class="collapsible">Open Section 2</button>
<div class="content">
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
</div>
<button class="collapsible">Open Section 3</button>
<div class="content">
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
</div>

<script>
var coll = document.getElementsByClassName("collapsible");
var i;

for (i = 0; i < coll.length; i++) {
  coll[i].addEventListener("click", function() {
    this.classList.toggle("active");
    var content = this.nextElementSibling;
    if (content.style.maxHeight){
      content.style.maxHeight = null;
    } else {
      content.style.maxHeight = content.scrollHeight + "px";
    } 
  });
}
</script>

</body>

Table!?

<button class="collapsible">Table Section</button>
<div class="content">
  <p><table>
    <tr>
        <td>Song Name</td>
        <td>File Name</td>
    </tr>
    <tr>
        <td>Agent K.K.</td>
        <td>BGM_Live_068_Keiji</td>
    </tr>
    <tr>
        <td>Aloha K.K.</td>
        <td>BGM_Live_019_Aloha</td>
    </tr>
    <tr>
        <td>Animal City</td>
        <td>BGM_Live_092_Town</td>
    </tr>
    <tr>
        <td>Bubblegum K.K.</td>
        <td>BGM_Live_088_Idol</td>
    </tr>
    <tr>
        <td>Café K.K.</td>
        <td>BGM_Live_050_Paris</td>
    </tr>
    <tr>
        <td>Chillwave</td>
        <td>BGM_Live_100_Chillwave</td>
    </tr>
    <tr>
        <td>Comrade K.K.</td>
        <td>BGM_Live_044_Showakayo</td>
    </tr>
    <tr>
        <td>DJ K.K.</td>
        <td>BGM_Live_039_Eurobeat</td>
    </tr>
    <tr>
        <td>Drivin'</td>
        <td>BGM_Live_093_Drive</td>
    </tr>
    <tr>
        <td>Farewell</td>
        <td>BGM_Live_094_Sayonara</td>
    </tr>
    <tr>
        <td>Forest Life</td>
        <td>BGM_Live_057_Morinoseikatsu</td>
    </tr>
    <tr>
        <td>Go K.K. Rider</td>
        <td>BGM_Live_046_Kekerider</td>
    </tr>
    <tr>
        <td>Hidden Song 1</td>
        <td>BGM_Live_901_Hazure01</td>
    </tr>
    <tr>
        <td>Hidden Song 2</td>
        <td>BGM_Live_902_Hazure02</td>
    </tr>
    <tr>
        <td>Hidden Song 3</td>
        <td>BGM_Live_903_Hazure03</td>
    </tr>
    <tr>
        <td>Hypno K.K.</td>
        <td>BGM_Live_076_Utatanenoyume</td>
    </tr>
    <tr>
        <td>I Love You</td>
        <td>BGM_Live_054_Daisuki</td>
    </tr>
    <tr>
        <td>Imperial K.K.</td>
        <td>BGM_Live_023_China</td>
    </tr>
    <tr>
        <td>K.K. Adventure</td>
        <td>BGM_Live_080_Hollywood</td>
    </tr>
    <tr>
        <td>K.K. Aria</td>
        <td>BGM_Live_009_Maria</td>
    </tr>
    <tr>
        <td>K.K. Ballad</td>
        <td>BGM_Live_043_Ballad</td>
    </tr>
    <tr>
        <td>K.K. Bashment</td>
        <td>BGM_Live_103_Bashment</td>
    </tr>
    <tr>
        <td>K.K. Bazaar</td>
        <td>BGM_Live_082_Roma</td>
    </tr>
    <tr>
        <td>K.K. Birthday</td>
        <td>BGM_Live_091_Birthdaysong</td>
    </tr>
    <tr>
        <td>K.K. Blues</td>
        <td>BGM_Live_032_Blues</td>
    </tr>
    <tr>
        <td>K.K. Bossa</td>
        <td>BGM_Live_011_Bossa</td>
    </tr>
    <tr>
        <td>K.K. Break</td>
        <td>BGM_Live_105_Break</td>
    </tr>
    <tr>
        <td>K.K. Calypso</td>
        <td>BGM_Live_012_Caripso</td>
    </tr>
    <tr>
        <td>K.K. Casbah</td>
        <td>BGM_Live_024_Turkey</td>
    </tr>
    <tr>
        <td>K.K. Chorale</td>
        <td>BGM_Live_001_Sanbika</td>
    </tr>
    <tr>
        <td>K.K. Chorinho</td>
        <td>BGM_Live_099_Choro</td>
    </tr>
    <tr>
        <td>K.K. Condor</td>
        <td>BGM_Live_021_Peru</td>
    </tr>
    <tr>
        <td>K.K. Country</td>
        <td>BGM_Live_041_Country</td>
    </tr>
    <tr>
        <td>K.K. Cruisin'</td>
        <td>BGM_Live_035_Urban</td>
    </tr>
    <tr>
        <td>K.K. D&amp;B</td>
        <td>BGM_Live_037_Drumnbass</td>
    </tr>
    <tr>
        <td>K.K. Dirge</td>
        <td>BGM_Live_047_Kowaiuta</td>
    </tr>
    <tr>
        <td>K.K. Disco</td>
        <td>BGM_Live_090_Disco</td>
    </tr>
    <tr>
        <td>K.K. Dixie</td>
        <td>BGM_Live_060_Dixie</td>
    </tr>
    <tr>
        <td>K.K. Dub</td>
        <td>BGM_Live_101_Dub</td>
    </tr>
    <tr>
        <td>K.K. Étude</td>
        <td>BGM_Live_007_Etude</td>
    </tr>
    <tr>
        <td>K.K. Faire</td>
        <td>BGM_Live_018_Haisai</td>
    </tr>
    <tr>
        <td>K.K. Flamenco</td>
        <td>BGM_Live_086_Flamenco</td>
    </tr>
    <tr>
        <td>K.K. Folk</td>
        <td>BGM_Live_026_Minyo</td>
    </tr>
    <tr>
        <td>K.K. Fugue</td>
        <td>BGM_Live_096_Fugue</td>
    </tr>
    <tr>
        <td>K.K. Fusion</td>
        <td>BGM_Live_006_Fusion</td>
    </tr>
    <tr>
        <td>K.K. Groove</td>
        <td>BGM_Live_084_Raregroove</td>
    </tr>
    <tr>
        <td>K.K. Gumbo</td>
        <td>BGM_Live_030_Neworleans</td>
    </tr>
    <tr>
        <td>K.K. Hop</td>
        <td>BGM_Live_104_Hiphop</td>
    </tr>
    <tr>
        <td>K.K. House</td>
        <td>BGM_Live_074_House</td>
    </tr>
    <tr>
        <td>K.K. Island</td>
        <td>BGM_Live_078_Doubutsunoshima</td>
    </tr>
    <tr>
        <td>K.K. Jazz</td>
        <td>BGM_Live_005_Jazz</td>
    </tr>
    <tr>
        <td>K.K. Jongara</td>
        <td>BGM_Live_085_Jongara</td>
    </tr>
    <tr>
        <td>K.K. Khoomei</td>
        <td>BGM_Live_106_Khoomii</td>
    </tr>
    <tr>
        <td>K.K. Lament</td>
        <td>BGM_Live_045_Enka</td>
    </tr>
    <tr>
        <td>K.K. Love Song</td>
        <td>BGM_Live_036_Lovesong</td>
    </tr>
    <tr>
        <td>K.K. Lovers</td>
        <td>BGM_Live_102_Lovers</td>
    </tr>
    <tr>
        <td>K.K. Lullaby</td>
        <td>BGM_Live_008_Lullaby</td>
    </tr>
    <tr>
        <td>K.K. Mambo</td>
        <td>BGM_Live_014_Mambo</td>
    </tr>
    <tr>
        <td>K.K. Marathon</td>
        <td>BGM_Live_061_Gamelan</td>
    </tr>
    <tr>
        <td>K.K. March</td>
        <td>BGM_Live_002_March</td>
    </tr>
    <tr>
        <td>K.K. Mariachi</td>
        <td>BGM_Live_052_Senor</td>
    </tr>
    <tr>
        <td>K.K. Metal</td>
        <td>BGM_Live_070_Metal</td>
    </tr>
    <tr>
        <td>K.K. Milonga</td>
        <td>BGM_Live_083_Milonga</td>
    </tr>
    <tr>
        <td>K.K. Moody</td>
        <td>BGM_Live_087_Bolero</td>
    </tr>
    <tr>
        <td>K.K. Oasis</td>
        <td>BGM_Live_081_Maharaja</td>
    </tr>
    <tr>
        <td>K.K. Parade</td>
        <td>BGM_Live_051_Parade</td>
    </tr>
    <tr>
        <td>K.K. Polka</td>
        <td>BGM_Live_097_Polka</td>
    </tr>
    <tr>
        <td>K.K. Ragtime</td>
        <td>BGM_Live_029_Ragtime</td>
    </tr>
    <tr>
        <td>K.K. Rally</td>
        <td>BGM_Live_069_Ondo</td>
    </tr>
    <tr>
        <td>K.K. Reggae</td>
        <td>BGM_Live_015_Reggae</td>
    </tr>
    <tr>
        <td>K.K. Robot Synth</td>
        <td>BGM_Live_107_Android</td>
    </tr>
    <tr>
        <td>K.K. Rock</td>
        <td>BGM_Live_027_Rock</td>
    </tr>
    <tr>
        <td>K.K. Rockabilly</td>
        <td>BGM_Live_067_Kekebily</td>
    </tr>
    <tr>
        <td>K.K. Safari</td>
        <td>BGM_Live_025_Afro</td>
    </tr>
    <tr>
        <td>K.K. Salsa</td>
        <td>BGM_Live_013_Salsa</td>
    </tr>
    <tr>
        <td>K.K. Samba</td>
        <td>BGM_Live_010_Samba</td>
    </tr>
    <tr>
        <td>K.K. Ska</td>
        <td>BGM_Live_016_Ska</td>
    </tr>
    <tr>
        <td>K.K. Slack-Key</td>
        <td>BGM_Live_098_Slackkey</td>
    </tr>
    <tr>
        <td>K.K. Sonata</td>
        <td>BGM_Live_075_Sonata</td>
    </tr>
    <tr>
        <td>K.K. Song</td>
        <td>BGM_Live_053_Kekesong</td>
    </tr>
    <tr>
        <td>K.K. Soul</td>
        <td>BGM_Live_034_Soul</td>
    </tr>
    <tr>
        <td>K.K. Steppe</td>
        <td>BGM_Live_022_Cossack</td>
    </tr>
    <tr>
        <td>K.K. Stroll</td>
        <td>BGM_Live_077_Osanpo</td>
    </tr>
    <tr>
        <td>K.K. Swing</td>
        <td>BGM_Live_004_Swing</td>
    </tr>
    <tr>
        <td>K.K. Synth</td>
        <td>BGM_Live_089_Electronica</td>
    </tr>
    <tr>
        <td>K.K. Tango</td>
        <td>BGM_Live_017_Tango</td>
    </tr>
    <tr>
        <td>K.K. Technopop</td>
        <td>BGM_Live_038_Technobeat</td>
    </tr>
    <tr>
        <td>K.K. Waltz</td>
        <td>BGM_Live_003_Waltz</td>
    </tr>
    <tr>
        <td>K.K. Western</td>
        <td>BGM_Live_048_Western</td>
    </tr>
    <tr>
        <td>King K.K.</td>
        <td>BGM_Live_062_Daimyo</td>
    </tr>
    <tr>
        <td>Lucky K.K.</td>
        <td>BGM_Live_020_Irish</td>
    </tr>
    <tr>
        <td>Marine Song 2001</td>
        <td>BGM_Live_064_Hunauta2001</td>
    </tr>
    <tr>
        <td>Mountain Song</td>
        <td>BGM_Live_063_Alpine</td>
    </tr>
    <tr>
        <td>Mr. K.K.</td>
        <td>BGM_Live_049_Sensei</td>
    </tr>
    <tr>
        <td>My Place</td>
        <td>BGM_Live_056_Bokunobasho</td>
    </tr>
    <tr>
        <td>Neapolitan</td>
        <td>BGM_Live_065_Napolitan</td>
    </tr>
    <tr>
        <td>Only Me</td>
        <td>BGM_Live_040_Onlyme</td>
    </tr>
    <tr>
        <td>Pondering</td>
        <td>BGM_Live_059_Kangaechu</td>
    </tr>
    <tr>
        <td>Rockin' K.K.</td>
        <td>BGM_Live_028_Rocknroll</td>
    </tr>
    <tr>
        <td>Soulful K.K.</td>
        <td>BGM_Live_033_Gospel</td>
    </tr>
    <tr>
        <td>Space K.K.</td>
        <td>BGM_Live_079_Minimal</td>
    </tr>
    <tr>
        <td>Spring Blossoms</td>
        <td>BGM_Live_072_Harunokomorebi</td>
    </tr>
    <tr>
        <td>Stale Cupcakes</td>
        <td>BGM_Live_071_Blueonigiri</td>
    </tr>
    <tr>
        <td>Steep Hill</td>
        <td>BGM_Live_066_Nidanzaka</td>
    </tr>
    <tr>
        <td>Surfin' K.K.</td>
        <td>BGM_Live_042_Eleki</td>
    </tr>
    <tr>
        <td>The K. Funk</td>
        <td>BGM_Live_031_Funk</td>
    </tr>
    <tr>
        <td>To the Edge</td>
        <td>BGM_Live_058_Naminami</td>
    </tr>
    <tr>
        <td>Two Days Ago</td>
        <td>BGM_Live_055_Ototoi</td>
    </tr>
    <tr>
        <td>Wandering</td>
        <td>BGM_Live_073_Horo</td>
    </tr>
    <tr>
        <td>Welcome Horizons</td>
        <td>BGM_Live_095_Minnaatsumare</td>
    </tr>
</table></p>
</div>