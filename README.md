# Incon-Effects-Mod

Inspired by the legendary Opticalsnare's hilarious Blastcore Physics and Lao Fei Mao's cool Blood Mist mods, here's my take on Arma 3's effects. Rather than go for comedic effect, I figured I'd aim for a bit more realism. So far I've focused on 3 things: 


Ragdoll Physics

In vanilla, it's pretty limited. This aims to give people a bit more of a chance of getting airborne if there's an explosion nearby. Unfortunately, most explosions have similar physics power so to give a GBU the right level of floaty people would mean making grenades look ridiculous. I've tried to strike a balance. 
Key difference vs vanilla: Bodies respond more to explosions and (every so slightly) more to weapon impacts. 


Muzzle Flash

In vanilla, when a soldier shoots, the area around his weapon is lit up for longer than there is actually fire coming from the barrel of the weapon. This was always a bit of a pet peeve of mine from when I first started playing Arma and looks silly in my opinion. I've tried to shorten the ambient light of muzzle flashes so they synchronise with the duration of the muzzle flash itself, giving a kind of strobe effect at night. It should work on modded weapons as long as they inherit from a base weapon class. 

Key difference vs vanilla: Ambient light from muzzle flashes doesn't last longer than the muzzle flash itself. 



Blood Mist / Hit Effects

When a bullet hits a body, it generally doesn't look like someone's been slapped with a handful of red chalk. "Pink mist" is often quite a subtle, short-lived affair. It also doesn't float around the body, instead shooting at speed out of the exit wound and possibly being blown away if there's wind. It will scale with caliber too; large caliber weapons will chuck out a fair bit of mist, smaller caliber weapons like pistols may not. This isn't finished and is still open to suggestions (please don't post any pictures or videos of people getting shot), but I've tried to get this as close as I can to reality. I suggest combining with Zooloo's Bloodlust for better realism. 

Key differences from vanilla:

1. Blood mist comes out of exit wounds rather than sitting around the entry wound

2. Blood mist size, colour and transparency has been tweaked to be more realistic (less of a bright red explosion and more like a fine mist)

3. Blood mist moves at speed in the direction of the bullet (as opposed to floating statically in the air)

4. Blood mist can be affected by wind, vanilla blood mist cannot


Notes

This should all work clientside and I've included a key for servers (if in doubt, remove the physx PBO). Effects are split into different obviously named PBOs so you can pick and choose which you would prefer. If using Steam, just make a local copy of the mod on your hard drive and delete any unwanted effects in the @InconEffects\addons folder. 


Mod compatibility:
Should be compatible with most mods (depending on whether config values are inherited from vanilla) but won't cause any problems if not. Any known incompatibilities will be listed as people let me know. 


Zooloo75's BloodLust: To get the blood mist working with Zooloo75's BloodLust mod, set "BloodLust_IsBloodSprayEnabled" to false in the BloodLust settings menu. 

Blastcore Pheonix (and variations of): To use with Blastcore, move "blastcoreCompat.PBO" from the optionals folder to the addons folder. This will overwrite Blastcore's blood effects with those from this mod. 

ASR AI: Apparently there's an incompatibility with the physx and ASR's wounded crawling feature. If you notice any glitches, removing the physx.pbo file from addons should solve this unless you'd prefer to disable the effect in ASR. Thanks to Riven Deckard for pointing that out. 


Thoughts, suggestions and wildly uncontrolled praise are all welcome. 
