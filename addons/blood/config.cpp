class CfgPatches
{
	class Incon_Blood_A3
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.6;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Data_F_ParticleEffects"
		};
	};
};
class CfgCloudlets
{
	class Blood;
	class BloodMist: Blood
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=4;
		particleFSFrameCount=1;
		particleFSLoop=0;
		lifeTime=0.2;
		lifeTimeVar=0.02;
		moveVelocity[]=
		{
			"(+ inDirX * 2 - surfNormalX / 4) * inSpeed / 250 * 1",
			"( + inDirY * 2 - surfNormalY / 4) * inSpeed / 250 * 1",
			"( + inDirZ * 2 - surfNormalZ / 4) * inSpeed / 250 * 1"
		};
		moveVelocityVar[]=
		{
			"(+ inDirX * 2 - surfNormalX / 4) * inSpeed / 200 * 0.1",
			"( + inDirY * 2 - surfNormalY / 4) * inSpeed / 200 * 0.1",
			"( + inDirZ * 2 - surfNormalZ / 4) * inSpeed / 200 * 0.1"
		};
		rubbing=0.40000001;
		size[]=
		{
			"(hit/120 + 0.05)",
			"2*(hit/60 + 0.15)"
		};
		sizeVar=0;
		color[]=
		{
			{1,0.25,0.25,0.079999998},
			{1,0.44999999,0.44999999,9.9999997e-005}
		};
		colorVar[]={0,0.1,0.1,0.1};
		rotationVelocityVar=0.2;
		randomDirectionPeriod=0.10000001;
		randomDirectionIntensity=0.30000001;
		weight=0.15000001;
	};
};
class ImpactEffectsBlood
{
	class BloodMist
	{
		simulation="particles";
		type="BloodMist";
		position[]={0,0,0.2};
		intensity=0.5;
		interval=1;
		lifeTime=0.69999999;
		moveVelocity[]=
		{
			"(+ inDirX * 2 - surfNormalX / 4) * inSpeed / 200 * 0.05",
			"( + inDirY * 2 - surfNormalY / 4) * inSpeed / 200 * 0.05",
			"( + inDirZ * 2 - surfNormalZ / 4) * inSpeed / 200 * 0.05"
		};
		MoveVelocityVar[]={0.1,0.1,0.1};
	};
	class Blood
	{
		simulation="particles";
		type="Blood";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=0.1;
		size[]=
		{
			"(hit/200 + 0.01)",
			"2*(hit/100 + 0.01)"
		};
		MoveVelocityVar[]={2,2,2};
	};
	class Blood1
	{
		simulation="particles";
		type="Blood1";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=0.14999998;
		size[]=
		{
			"(hit/200 + 0.01)",
			"2*(hit/100 + 0.01)"
		};
		color[]=
		{
			{1,0.050000001,0.050000001,0.079999998},
			{1,0.34999999,0.34999999,9.9999997e-005}
		};
	};
	class Blood2
	{
		simulation="particles";
		type="Blood2";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=0.10000001;
		size[]=
		{
			"(hit/200 + 0.01)",
			"2*(hit/200 + 0.05)"
		};
		color[]=
		{
			{1,0.050000001,0.050000001,0.079999998},
			{1,0.34999999,0.34999999,9.9999997e-005}
		};
	};
	class Blood3
	{
		simulation="particles";
		type="Blood3";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=0.10000001;
		size[]=
		{
			"(hit/400 + 0.01)",
			"2*(hit/200 + 0.05)"
		};
		color[]=
		{
			{1,0.050000001,0.050000001,0.079999998},
			{1,0.34999999,0.34999999,9.9999997e-005}
		};
	};
	class BloodUnderwater1
	{
		simulation="particles";
		type="BloodUnderwater1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
};
