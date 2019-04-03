class CfgPatches
{
	class Incon_Physx_A3
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.6;
		requiredAddons[]=
		{
			"A3_Data_F_ParticleEffects"
		};
	};
};
class PhysXParams
{
	ragdollUnderwaterBuoyancyCoef=9.6999998;
	ragdollUnderwaterResistanceCoef=0.0049999999;
	ragdollOnCollideVehicleImpulseCoef=2;
	ragdollUnconsciousSleepCoef=1.2;
	ragdollVehicleCollision=0;
	epeImpulseDamageCoef=30;
	impulseForceRagdollCoef="200f";
	impulseTorqueRagdollCoef="75f";
	impulseSpeedRagdollCoef="3f";
	maxRagdollImpulseForceMagnitude="900f";
	maxRagdollImpulseTorqueMagnitude="400f";
	ragdollUnderwaterForceCoef="9.6f";
	ragdollUnderwaterInitImpulseCoef="0.98f";
	ragdollOnCollideSpeedLimit="4f";
	ragdollOnCollideMassLimit="200f";
	ragdollOnCollideForceCoef="0.1f";
	ragdollOnCollideMaxForce="5f";
	ragdollOnCollideMaxOffset="10f";
	ragdollOnCollideMaxOffsetSpeed="100f";
	ragdollHitTime="0.01f";
	ragdollHitForceCoef="3f";
	ragdollHitDmgLimit="0.01f";
};
class RagDollDefaultLimit
{
	value=30;
	restitution="0.25f";
	hardness=1;
};
class RagDollDefaultSpring
{
	enabled=1;
	value=1;
	damper=1;
	targetValue=0;
};
class RagDollSphericalJoint
{
	class TwistLimitLow: RagDollDefaultLimit
	{
	};
	class TwistLimitHigh: RagDollDefaultLimit
	{
	};
	class SwingLimit: RagDollDefaultLimit
	{
	};
	class TwistSpring: RagDollDefaultSpring
	{
		enabled=1;
	};
	class SwingSpring: RagDollDefaultSpring
	{
		enabled=1;
		damper=2;
	};
	class JointSpring: RagDollDefaultSpring
	{
		enabled=1;
	};
	type="spherical";
	enableCollision=0;
	projectionDistance=0.050000001;
	projectionMode="point";
};
class RagDollRevoluteJoint
{
	class LimitLow: RagDollDefaultLimit
	{
	};
	class LimitHigh: RagDollDefaultLimit
	{
	};
	class Spring: RagDollDefaultSpring
	{
		enabled=1;
	};
	type="revolute";
	enableCollision=0;
	projectionDistance=0.050000001;
	projectionMode="point";
};
class RagDollD6Joint_PX3
{
	driveLinearVelocity[]={0,0,0};
	driveAngularVelocity[]={0,0,0};
	type="D6";
	enableCollision=0;
	projectionDistance=0.050000001;
	projectionMode="point";
	swingLimitY="0.0f";
	swingLimitZ="0.0f";
	swingSpring="0.00f";
	swingDamping="0.0f";
	swingRestitution="0.3f";
	swingContactDistance="0.05f";
	twistLimitLower="0.0f";
	twistLimitUpper="0.0f";
	twistSpring="0.00f";
	twistDamping="0.0f";
	twistRestitution="0.4f";
	twistContactDistance="0.05f";
	driveSpring="550.0f";
	driveDamping="100.0f";
	driveMaxForce="100.0f";
	driveUseAcceleration=1;
};
class CfgRagDollSkeletons
{
	class BaseRagdoll
	{
		idleAnim="";
		networkBonePrimary="";
		networkBoneSecondary="";
		primaryWeaponBone="";
		secondaryWeaponBone="";
		weaponSleepLinearVelocity=0.1;
		weaponSleepAngularVelocity=0.1;
		weaponDropMinTime=0.0099999998;
		weaponDropMaxTime=0.029999999;
		weaponDistanceLimit="0.1f";
		weaponDistanceLimitTime="2f";
		sleepLinearVelocity=0.1;
		sleepAngularVelocity=0.1;
		simulateMinTime="3.5f";
		simulateMaxTime=3;
		simulateDistanceLimit="0.5f";
		simulateDistanceLimitTime="2f";
		recoveryBlendTime="0.01f";
		recoveryCosLimit="-1f";
		recoveryDistLimit="100f";
		animBlendTime="0.00f";
	};
	class Soldier: BaseRagdoll
	{
		networkBonePrimary="chest";
		networkBoneSecondary="pelvis";
		hitMaskUnderwater="hitUnderwater";
		class WeaponLinkBones
		{
			class LinkBone1
			{
				bone="leftHand";
				canBeDropped=1;
				prefference="1.0f";
			};
			class LinkBone2
			{
				bone="rightHand";
				canBeDropped=1;
				prefference="1.0f";
			};
			class LinkBone3
			{
				bone="chest";
				canBeDropped=1;
				prefference="2.0f";
			};
		};
		class Masks
		{
			class DraggingMask
			{
				mask[]=
				{

					{
						"pelvis",
						0,
						1
					},

					{
						"chest",
						0,
						1
					},

					{
						"head",
						1,
						0
					},

					{
						"leftArm",
						1,
						0
					},

					{
						"leftForeArm",
						1,
						0
					},

					{
						"leftHand",
						1,
						0
					},

					{
						"rightArm",
						1,
						0
					},

					{
						"rightForeArm",
						1,
						0
					},

					{
						"rightHand",
						1,
						0
					},

					{
						"leftUpLeg",
						1,
						0
					},

					{
						"leftLeg",
						1,
						0
					},

					{
						"leftFoot",
						1,
						0
					},

					{
						"rightUpLeg",
						1,
						0
					},

					{
						"rightLeg",
						1,
						0
					},

					{
						"rightFoot",
						1,
						0
					},

					{
						"weapon",
						0.2,
						1
					},

					{
						"launcher",
						0,
						1
					}
				};
				name="dragging";
			};
			class HitMask
			{
				mask[]=
				{

					{
						"pelvis",
						0,
						1
					},

					{
						"chest",
						1,
						0
					},

					{
						"head",
						1,
						0
					},

					{
						"leftArm",
						1,
						0
					},

					{
						"leftForeArm",
						1,
						0
					},

					{
						"leftHand",
						1,
						0
					},

					{
						"rightArm",
						1,
						0
					},

					{
						"rightForeArm",
						1,
						0
					},

					{
						"rightHand",
						1,
						0
					},

					{
						"leftUpLeg",
						0,
						1
					},

					{
						"leftLeg",
						0,
						1
					},

					{
						"leftFoot",
						0,
						1
					},

					{
						"rightUpLeg",
						0,
						1
					},

					{
						"rightLeg",
						0,
						1
					},

					{
						"rightFoot",
						0,
						1
					},

					{
						"weapon",
						0,
						1
					},

					{
						"launcher",
						0,
						1
					}
				};
				name="hit";
			};
			class HitMaskUnderwater
			{
				name="hitUnderwater";
				mask[]=
				{

					{
						"pelvis",
						1,
						1
					},

					{
						"chest",
						1,
						1
					},

					{
						"head",
						1,
						0
					},

					{
						"leftArm",
						1,
						0
					},

					{
						"leftForeArm",
						1,
						0
					},

					{
						"leftHand",
						1,
						0
					},

					{
						"rightArm",
						1,
						0
					},

					{
						"rightForeArm",
						1,
						0
					},

					{
						"rightHand",
						1,
						0
					},

					{
						"leftUpLeg",
						1,
						0
					},

					{
						"leftLeg",
						1,
						0
					},

					{
						"leftFoot",
						1,
						0
					},

					{
						"rightUpLeg",
						1,
						0
					},

					{
						"rightLeg",
						1,
						0
					},

					{
						"rightFoot",
						1,
						0
					},

					{
						"weapon",
						1,
						0
					},

					{
						"launcher",
						1,
						0
					}
				};
			};
		};
		class BaseRagdollBone
		{
			childrenUseIdleAnim=0;
			material="Ragdoll";
			childrenUseStartTrans=1;
		};
		class Bones
		{
			class Pelvis: BaseRagdollBone
			{
				radius=0.12;
				networkType="root";
				name="pelvis";
				type="box";
				size[]={0.12,0.13,0.22};
				startBone="pelvis";
				endBone="spine2";
				mass=36;
			};
			class Chest: BaseRagdollBone
			{
				radius=0.16;
				name="chest";
				startBone="spine2";
				endBone="head";
				type="box";
				size[]={0.12,0.15000001,0.2};
				mass=20;
			};
			class Head: BaseRagdollBone
			{
				name="head";
				type="sphere";
				startBone="head";
				offset[]={0,-0.1,0};
				mass=9.75;
				radius=0.12;
			};
			class LeftArm: BaseRagdollBone
			{
				name="leftArm";
				type="capsule";
				startBone="leftArm";
				endBone="leftForeArm";
				mass=9.75;
			};
			class LeftForeArm: BaseRagdollBone
			{
				name="leftForeArm";
				type="capsule";
				startBone="leftForeArm";
				endBone="leftHand";
				mass=12;
			};
			class LeftHand: BaseRagdollBone
			{
				childrenUseIdleAnim=1;
				networkType="leftHand";
				name="leftHand";
				type="sphere";
				startBone="leftHand";
				mass=6;
				radius=0.079999998;
				childrenUseStartTrans=0;
			};
			class RightArm: BaseRagdollBone
			{
				name="rightArm";
				type="capsule";
				startBone="rightArm";
				endBone="rightForeArm";
				mass=9.75;
			};
			class RightForeArm: BaseRagdollBone
			{
				name="rightForeArm";
				type="capsule";
				startBone="rightForeArm";
				endBone="rightHand";
				mass=12;
			};
			class RightHand: BaseRagdollBone
			{
				childrenUseIdleAnim=1;
				networkType="rightHand";
				name="rightHand";
				type="sphere";
				startBone="rightHand";
				mass=4;
				radius=0.079999998;
				childrenUseStartTrans=0;
			};
			class LeftUpLeg: BaseRagdollBone
			{
				name="leftUpLeg";
				type="capsule";
				startBone="leftUpLeg";
				endBone="leftLeg";
				mass=25.5;
			};
			class LeftLeg: BaseRagdollBone
			{
				name="leftLeg";
				type="capsule";
				startBone="leftLeg";
				endBone="leftFoot";
				mass=13;
			};
			class LeftFoot: BaseRagdollBone
			{
				size[]={0.15000001,0.050000001,0.07};
				networkType="leftFoot";
				name="leftFoot";
				type="box";
				startBone="leftFoot";
				mass=2.3;
			};
			class RightUpLeg: BaseRagdollBone
			{
				name="rightUpLeg";
				type="capsule";
				startBone="rightUpLeg";
				endBone="rightLeg";
				mass=25.5;
			};
			class RightLeg: BaseRagdollBone
			{
				name="rightLeg";
				type="capsule";
				startBone="rightLeg";
				endBone="rightFoot";
				mass=13;
			};
			class RightFoot: BaseRagdollBone
			{
				size[]={0.15000001,0.050000001,0.07};
				networkType="rightFoot";
				name="rightFoot";
				type="box";
				startBone="rightFoot";
				mass=2.3;
			};
			class Weapon: BaseRagdollBone
			{
				endPosRelToStart[]={0,0,0.40000001};
				name="weapon";
				type="weapon";
				startBone="weapon";
				mass=4;
			};
			class Launcher: BaseRagdollBone
			{
				endPosRelToStart[]={0,0,0.40000001};
				name="launcher";
				type="weapon";
				startBone="launcher";
				mass=9;
			};
		};
		class JointsPX2
		{
			class Pelvis_Chest_PX2: RagDollSphericalJoint
			{
				name="pelvis_chest";
				bone1="pelvis";
				bone2="chest";
				axis[]={0,1,0.30000001};
				class SwingLimit: SwingLimit
				{
					value=12.5;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value=-7.5;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value=12;
				};
			};
			class Chest_Head_PX2: RagDollSphericalJoint
			{
				name="chest_head";
				bone1="chest";
				bone2="head";
				class SwingLimit: SwingLimit
				{
					value=10;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value=-7.5;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value=7.5;
				};
			};
			class Chest_LeftArm_PX2: RagDollSphericalJoint
			{
				name="chest_leftArm";
				bone1="chest";
				bone2="leftArm";
				axis[]={-1,0,0.5};
				enableCollision=1;
				class SwingLimit: SwingLimit
				{
					value=30;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value=-10;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value=10;
				};
			};
			class LeftArm_LeftForeArm_PX2: RagDollRevoluteJoint
			{
				name="leftArm_leftForeArm";
				bone1="leftArm";
				bone2="leftForeArm";
				axis[]={1,-1,0.2};
				class LimitLow: LimitLow
				{
					value=-1;
				};
				class LimitHigh: LimitHigh
				{
					value=30;
				};
			};
			class LeftForeArm_LeftHand_PX2: RagDollSphericalJoint
			{
				name="leftForeArm_leftHand";
				bone1="leftForeArm";
				bone2="leftHand";
				class SwingLimit: SwingLimit
				{
					value=10;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value=-2;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value=2;
				};
			};
			class Chest_RightArm_PX2: RagDollSphericalJoint
			{
				name="chest_rightArm";
				bone1="chest";
				bone2="rightArm";
				axis[]={1,0,0.5};
				enableCollision=1;
				class SwingLimit: SwingLimit
				{
					value=30;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value=-10;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value=10;
				};
			};
			class RightArm_RightForeArm_PX2: RagDollRevoluteJoint
			{
				name="rightArm_rightForeArm";
				bone1="rightArm";
				bone2="rightForeArm";
				axis[]={1,1,-0.2};
				class LimitLow: LimitLow
				{
					value=-1;
				};
				class LimitHigh: LimitHigh
				{
					value=30;
				};
			};
			class RightForeArm_RightHand_PX2: RagDollSphericalJoint
			{
				name="rightForeArm_rightHand";
				bone1="rightForeArm";
				bone2="rightHand";
				class SwingLimit: SwingLimit
				{
					value=10;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value=-2;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value=2;
				};
			};
			class Pelvis_LeftUpLeg_PX2: RagDollSphericalJoint
			{
				name="pelvis_leftUpLeg";
				bone1="pelvis";
				bone2="leftUpLeg";
				axis[]={-1.5,-1.1,2};
				enableCollision=1;
				class SwingLimit: SwingLimit
				{
					value=25;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value=-5;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value=10;
				};
			};
			class LeftUpLeg_LeftLeg_PX2: RagDollRevoluteJoint
			{
				name="leftUpLeg_leftLeg";
				bone1="leftUpLeg";
				bone2="leftLeg";
				axis[]={-1,0,0};
				class LimitLow: LimitLow
				{
					value=-1;
				};
				class LimitHigh: LimitHigh
				{
					value=50;
				};
			};
			class LeftLeg_LeftFoot_PX2: RagDollRevoluteJoint
			{
				name="leftLeg_leftFoot";
				bone1="leftLeg";
				bone2="leftFoot";
				axis[]={-1,0,0};
				class LimitLow: LimitLow
				{
					value=-7.5;
				};
				class LimitHigh: LimitHigh
				{
					value=25;
				};
			};
			class Pelvis_RightUpLeg_PX2: RagDollSphericalJoint
			{
				name="pelvis_rightUpLeg";
				bone1="pelvis";
				bone2="rightUpLeg";
				axis[]={1.5,-1.1,2};
				enableCollision=1;
				class SwingLimit: SwingLimit
				{
					value=25;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value=-5;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value=10;
				};
			};
			class RightUpLeg_RightLeg_PX2: RagDollRevoluteJoint
			{
				name="rightUpLeg_rightLeg";
				bone1="rightUpLeg";
				bone2="rightLeg";
				axis[]={-1,0,0};
				class LimitLow: LimitLow
				{
					value=-2;
				};
				class LimitHigh: LimitHigh
				{
					value=55;
				};
			};
			class RightLeg_RightFoot_PX2: RagDollRevoluteJoint
			{
				name="rightLeg_rightFoot";
				bone1="rightLeg";
				bone2="rightFoot";
				axis[]={-1,0,0};
				class LimitLow: LimitLow
				{
					value=-15;
				};
				class LimitHigh: LimitHigh
				{
					value=25;
				};
			};
		};
		class JointsPX3
		{
			class Pelvis_Chest_PX3: RagDollD6Joint_PX3
			{
				name="pelvis_chest";
				bone1="pelvis";
				bone2="chest";
				axis[]={0,1,0.30000001};
				enableCollision=0;
				swingLimitY=30;
				swingLimitZ=30;
				twistLimitLower=-25;
				twistLimitUpper=25;
				driveSpring=30;
				driveDamping=30;
				driveSpringWater=5;
				driveDampingWater=5;
			};
			class Chest_Head_PX3: RagDollD6Joint_PX3
			{
				name="chest_head";
				bone1="chest";
				bone2="head";
				swingLimitY=45;
				swingLimitZ=45;
				twistLimitLower=-40;
				twistLimitUpper=40;
				driveSpring=15;
				driveDamping=30;
				driveSpringWater=1.5;
				driveDampingWater=3;
				twistSpring=15;
				twistDamping=30;
			};
			class Chest_LeftArm_PX3: RagDollD6Joint_PX3
			{
				name="chest_leftArm";
				bone1="chest";
				bone2="leftArm";
				enableCollision=1;
				swingLimitY=5;
				swingLimitZ=15;
				twistLimitLower=-50;
				twistLimitUpper=50;
				swingSpring="25f";
				swingDamping="25.0f";
				twistSpring="1.0f";
				twistDamping="25.0f";
				driveSpring=15;
				driveDamping=30;
				driveSpringWater=3;
				driveDampingWater=3;
			};
			class LeftArm_LeftForeArm_PX3: RagDollD6Joint_PX3
			{
				axis[]={-1,1,-0.2};
				name="leftArm_leftForeArm";
				bone1="leftArm";
				bone2="leftForeArm";
				swingLimitY=10;
				swingLimitZ=10;
				twistLimitLower=-5;
				twistLimitUpper=150;
				driveSpring=10;
				driveDamping=10;
				driveSpringWater=1;
				driveDampingWater=1;
			};
			class LeftForeArm_LeftHand_PX3: RagDollD6Joint_PX3
			{
				name="leftForeArm_leftHand";
				bone1="leftForeArm";
				bone2="leftHand";
				swingLimitY=10;
				swingLimitZ=10;
				twistLimitLower=-20;
				twistLimitUpper=20;
				driveSpring=10;
				driveDamping=10;
				driveSpringWater=1;
				driveDampingWater=1;
			};
			class Chest_RightArm_PX3: RagDollD6Joint_PX3
			{
				name="chest_rightArm";
				bone1="chest";
				bone2="rightArm";
				enableCollision=1;
				swingLimitY=15;
				swingLimitZ=15;
				twistLimitLower=-50;
				twistLimitUpper=50;
				swingSpring="25f";
				swingDamping="25.0f";
				twistSpring="1.0f";
				twistDamping="25.0f";
				driveSpring=15;
				driveDamping=30;
				driveSpringWater=3;
				driveDampingWater=3;
			};
			class RightArm_RightForeArm_PX3: RagDollD6Joint_PX3
			{
				axis[]={-1,-1,0.2};
				name="rightArm_rightForeArm";
				bone1="rightArm";
				bone2="rightForeArm";
				swingLimitY=10;
				swingLimitZ=10;
				twistLimitLower=-5;
				twistLimitUpper=150;
				driveSpring=10;
				driveDamping=10;
				driveSpringWater=1;
				driveDampingWater=1;
			};
			class RightForeArm_RightHand_PX3: RagDollD6Joint_PX3
			{
				name="rightForeArm_rightHand";
				bone1="rightForeArm";
				bone2="rightHand";
				swingLimitY=10;
				swingLimitZ=10;
				twistLimitLower=-20;
				twistLimitUpper=20;
				driveSpring=10;
				driveDamping=10;
				driveSpringWater=1;
				driveDampingWater=1;
			};
			class Pelvis_LeftUpLeg_PX3: RagDollD6Joint_PX3
			{
				name="pelvis_leftUpLeg";
				bone1="pelvis";
				bone2="leftUpLeg";
				enableCollision=1;
				swingLimitY=1;
				swingLimitZ=1;
				twistLimitLower=-80;
				twistLimitUpper=80;
				swingSpring="5.0f";
				swingDamping="5.0f";
				twistSpring="5.0f";
				twistDamping="5.0f";
				driveSpring=550;
				driveDamping=130;
				driveSpringWater=3;
				driveDampingWater=3;
			};
			class LeftUpLeg_LeftLeg_PX3: RagDollD6Joint_PX3
			{
				axis[]={1,0,0};
				name="leftUpLeg_leftLeg";
				bone1="leftUpLeg";
				bone2="leftLeg";
				swingLimitY=1;
				swingLimitZ=0;
				twistLimitLower=0;
				twistLimitUpper=1;
				twistSpring="5.0f";
				twistDamping="15.0f";
				driveSpring=550;
				driveDamping=30;
				driveSpringWater=2;
				driveDampingWater=2;
			};
			class LeftLeg_LeftFoot_PX3: RagDollD6Joint_PX3
			{
				axis[]={1,0,0};
				name="leftLeg_leftFoot";
				bone1="leftLeg";
				bone2="leftFoot";
				enableCollision=1;
				swingLimitY=5;
				swingLimitZ=5;
				twistLimitLower=-15;
				twistLimitUpper=45;
				driveSpring=20;
				driveDamping=20;
				driveSpringWater=2;
				driveDampingWater=2;
			};
			class Pelvis_RightUpLeg_PX3: RagDollD6Joint_PX3
			{
				name="pelvis_rightUpLeg";
				bone1="pelvis";
				bone2="rightUpLeg";
				enableCollision=1;
				swingLimitY=1;
				swingLimitZ=1;
				twistLimitLower=-80;
				twistLimitUpper=80;
				swingSpring="1.0f";
				swingDamping="5.0f";
				twistSpring="5.0f";
				twistDamping="5.0f";
				driveSpring=550;
				driveDamping=130;
				driveSpringWater=3;
				driveDampingWater=3;
			};
			class RightUpLeg_RightLeg_PX3: RagDollD6Joint_PX3
			{
				axis[]={1,0,0};
				name="rightUpLeg_rightLeg";
				bone1="rightUpLeg";
				bone2="rightLeg";
				swingLimitY=1;
				swingLimitZ=0;
				twistLimitLower=0;
				twistLimitUpper=1;
				twistSpring="5.0f";
				twistDamping="15.0f";
				driveSpring=550;
				driveDamping=30;
				driveSpringWater=2;
				driveDampingWater=2;
			};
			class RightLeg_RightFoot_PX3: RagDollD6Joint_PX3
			{
				axis[]={1,0,0};
				name="rightLeg_rightFoot";
				bone1="rightLeg";
				bone2="rightFoot";
				enableCollision=1;
				swingLimitY=5;
				swingLimitZ=5;
				twistLimitLower=-15;
				twistLimitUpper=45;
				driveSpring=20;
				driveDamping=20;
				driveSpringWater=2;
				driveDampingWater=2;
			};
		};
		primaryWeaponBone="weapon";
		secondaryWeaponBone="launcher";
		draggingMask="dragging";
		hitMask="hit";
		idleAnim="A3\anims_f\data\Anim\sdr\ragdoll_fingers.rtm";
	};
};
