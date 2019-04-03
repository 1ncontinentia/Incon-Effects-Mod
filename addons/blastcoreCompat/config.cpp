class CfgPatches
{
	class INCON_blood_Blastcore_Compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.6;
		requiredAddons[]=
		{
			"WarFXPE",
			"Blastcore_VEP"
		};
	};
};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase: BulletCore
	{
		class HitEffects
		{
			hitMan="ImpactEffectsBlood";
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
		lifeTime=0.25;
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
			{1,0.25,0.25,0.18000001},
			{1,0.44999999,0.44999999,9.9999997e-005}
		};
		colorVar[]={0,0.1,0.1,0.1};
		rotationVelocityVar=0.2;
		randomDirectionPeriod=0.10000001;
		randomDirectionIntensity=0.30000001;
		weight=0.15000001;
	};
	class Default
	{
	};
	class BlastcoreBlood: Default
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
	class BlastcoreBlood2: Default
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
	class BlastcoreBlood_Impact_01: Default
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
	class BlastcoreBlood_Impact_02: Default
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
			"2*(hit/60 + 0.25)"
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
class BlastcoreImpactEffectsBlood
{
	class BlastcoreBlood
	{
		simulation="particles";
		type="Blood";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=0.1;
		size[]=
		{
			"(hit/200 + 0.2)",
			"2*(hit/30 + 0.1)"
		};
		MoveVelocityVar[]={0.5,0.5,0.5};
	};
};
class ImpactEffectsBlood
{
	class BlastcoreBlood
	{
		simulation="particles";
		type="Blood";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=0.1;
		size[]=
		{
			"(hit/200 + 0.02)",
			"2*(hit/30 + 0.1)"
		};
		MoveVelocityVar[]={0.5,0.5,0.5};
	};
	class BlastcoreBlood2
	{
		simulation="particles";
		type="Blood";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=0.1;
		size[]=
		{
			"(hit/200 + 0.02)",
			"2*(hit/30 + 0.1)"
		};
		MoveVelocityVar[]={0.5,0.5,0.5};
	};
	class BloodMist
	{
		simulation="particles";
		type="BloodMist";
		position[]={0,0,0};
		intensity=0.5;
		interval=1;
		lifeTime=0.69999999;
		moveVelocity[]=
		{
			"(+ outDirX * 2 - surfNormalX / 4) * inSpeed / 250 * 0.05",
			"( + outDirY * 2 - surfNormalY / 4) * inSpeed / 250 * 0.05",
			"( + outDirZ * 2 - surfNormalZ / 4) * inSpeed / 250 * 0.05"
		};
		MoveVelocityVar[]={0,0,0};
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
			"(hit/200 + 0.02)",
			"2*(hit/30 + 0.1)"
		};
		MoveVelocityVar[]={0.5,0.5,0.5};
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
			"(hit/200 + 0.02)",
			"2*(hit/30 + 0.1)"
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
			"2*(hit/30 + 0.1)"
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
			"(hit/200 + 0.01)",
			"2*(hit/30 + 0.1)"
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
