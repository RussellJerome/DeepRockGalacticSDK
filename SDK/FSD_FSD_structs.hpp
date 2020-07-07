#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic.hpp"
#include "FSD_FSDMixer_classes.hpp"
#include "FSD_SlateCore_classes.hpp"
#include "FSD_Engine_classes.hpp"
#include "FSD_CoreUObject_classes.hpp"
#include "FSD_GameplayTags_classes.hpp"
#include "FSD_UMG_classes.hpp"
#include "FSD_InputCore_classes.hpp"
#include "FSD_AIModule_classes.hpp"
#include "FSD_OnlineSubsystemUtils_classes.hpp"
#include "FSD_Slate_classes.hpp"
#include "FSD_AnimationSharing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FSD.EDrinkableAlcoholStrength
enum class EDrinkableAlcoholStrength : uint8_t
{
	NonAlcoholic                   = 0,
	Light                          = 1,
	Regular                        = 2,
	Strong                         = 3,
	VeryStrong                     = 4,
	InstantPassout                 = 5,
	EDrinkableAlcoholStrength_MAX  = 6
};


// Enum FSD.EIntoxicationState
enum class EIntoxicationState : uint8_t
{
	NotIntoxicated                 = 0,
	Intoxicated                    = 1,
	PassOut                        = 2,
	EIntoxicationState_MAX         = 3
};


// Enum FSD.ECharacterState
enum class ECharacterState : uint8_t
{
	Walking                        = 0,
	Downed                         = 1,
	Dead                           = 2,
	Falling                        = 3,
	Paralyzed                      = 4,
	Using                          = 5,
	ZipLine                        = 6,
	NoMovement                     = 7,
	Grabbed                        = 8,
	Flying                         = 9,
	Frozen                         = 10,
	PassedOut                      = 11,
	Photography                    = 12,
	Piloting                       = 13,
	Attached                       = 14,
	ECharacterState_MAX            = 15
};


// Enum FSD.ECharacterCameraMode
enum class ECharacterCameraMode : uint8_t
{
	FirstPerson                    = 0,
	ThirdPerson                    = 1,
	Follow                         = 2,
	DownCamera                     = 3,
	TerrainScanner                 = 4,
	PhotographyMode                = 5,
	FirstPersonHeadOnly            = 6,
	ECharacterCameraMode_MAX       = 7
};


// Enum FSD.EPlayerTemperatureState
enum class EPlayerTemperatureState : uint8_t
{
	Normal                         = 0,
	Frozen                         = 1,
	Overheated                     = 2,
	EPlayerTemperatureState_MAX    = 3
};


// Enum FSD.EGroundLeechState
enum class EGroundLeechState : uint8_t
{
	Idle                           = 0,
	Tracking                       = 1,
	Pulling                        = 2,
	Retracting                     = 3,
	Dying                          = 4,
	Dead                           = 5,
	EGroundLeechState_MAX          = 6
};


// Enum FSD.EChatSenderType
enum class EChatSenderType : uint8_t
{
	NormalUser                     = 0,
	DeluxUser                      = 1,
	Developer                      = 2,
	Streamer                       = 3,
	EChatSenderType_MAX            = 4
};


// Enum FSD.EChatMessageType
enum class EChatMessageType : uint8_t
{
	ES_Chat                        = 0,
	ES_Game                        = 1,
	ES_MAX                         = 2
};


// Enum FSD.ECharselectionCameraLocation
enum class ECharselectionCameraLocation : uint8_t
{
	Selection                      = 0,
	Customization                  = 1,
	Crafting                       = 2,
	ViewWeapon                     = 3,
	EndScreen                      = 4,
	Forge                          = 5,
	Pickaxe                        = 6,
	ECharselectionCameraLocation_MAX = 7
};


// Enum FSD.EMinersManualSection
enum class EMinersManualSection : uint8_t
{
	FrontPage                      = 0,
	Hints                          = 1,
	Combat                         = 2,
	Creatures                      = 3,
	Biomes                         = 4,
	Missions                       = 5,
	Resources                      = 6,
	EMinersManualSection_MAX       = 7
};


// Enum FSD.ESteamSearchRegion
enum class ESteamSearchRegion : uint8_t
{
	Close                          = 0,
	Medium                         = 1,
	Far                            = 2,
	World                          = 3,
	ESteamSearchRegion_MAX         = 4
};


// Enum FSD.ESteamServerJoinStatus
enum class ESteamServerJoinStatus : uint8_t
{
	Open                           = 0,
	PasswordRequired               = 1,
	ESteamServerJoinStatus_MAX     = 2
};


// Enum FSD.EAlwaysLoadedWorlds
enum class EAlwaysLoadedWorlds : uint8_t
{
	CharacterViewer                = 0,
	LoaderNormal                   = 1,
	LoaderDeepDive                 = 2,
	EAlwaysLoadedWorlds_MAX        = 3
};


// Enum FSD.EDisconnectReason
enum class EDisconnectReason : uint8_t
{
	None                           = 0,
	Kicked_HaveMyReasons           = 1,
	Kicked_ShouldBePrivate         = 2,
	Kicked_AFK                     = 3,
	Banned                         = 4,
	ServerQuit                     = 5,
	Disconnected                   = 6,
	SignInChange                   = 7,
	JoinSessionFail_SessionIsFull  = 8,
	JoinSessionFail_SessionDoesNotExist = 9,
	JoinSessionFail_Other          = 10,
	JoinSessionFail_Privilege      = 11,
	NetworkError                   = 12,
	SignOutComplete                = 13,
	WrongPassword                  = 14,
	DeepDiveLateJoin               = 15,
	MissionStarting                = 16,
	EDisconnectReason_MAX          = 17
};


// Enum FSD.EInputSource
enum class EInputSource : uint8_t
{
	None                           = 0,
	MouseAndKeyboard               = 1,
	Controller                     = 2,
	EInputSource_MAX               = 3
};


// Enum FSD.EKeyboardLayout
enum class EKeyboardLayout : uint8_t
{
	QWERTY                         = 0,
	AZERTY                         = 1,
	QWERTZ                         = 2,
	EKeyboardLayout_MAX            = 3
};


// Enum FSD.EHUDVisibilityReason
enum class EHUDVisibilityReason : uint8_t
{
	UserChoice                     = 0,
	StandDown                      = 1,
	MenuActive                     = 2,
	Photography                    = 3,
	EHUDVisibilityReason_MAX       = 4
};


// Enum FSD.ECarveFilterType
enum class ECarveFilterType : uint8_t
{
	ReplaceAll                     = 0,
	ReplaceEmpty                   = 1,
	ReplaceSolid                   = 2,
	ECarveFilterType_MAX           = 3
};


// Enum FSD.CarveOptionsCellSize
enum class ECarveOptionsCellSize : uint8_t
{
	CARVE_CELL_SIZE                = 0,
	CARVE_CELL_SIZE01              = 1,
	CARVE_CELL_SIZE02              = 2,
	CARVE_CELL_SIZE03              = 3,
	CARVE_CELL_SIZE_MAX            = 4
};


// Enum FSD.EPreciousMaterialOptions
enum class EPreciousMaterialOptions : uint8_t
{
	TurnIntoGems                   = 0,
	LeaveUntouched                 = 1,
	Ignore                         = 2,
	EPreciousMaterialOptions_MAX   = 3
};


// Enum FSD.ESpacerigStartType
enum class ESpacerigStartType : uint8_t
{
	PlayerHub                      = 0,
	Medbay                         = 1,
	ESpacerigStartType_MAX         = 2
};


// Enum FSD.EItemCategory
enum class EItemCategory : uint8_t
{
	PrimaryWeapon                  = 0,
	SecondaryWeapon                = 1,
	TraversalTool                  = 2,
	ClassTool                      = 3,
	Grenade                        = 4,
	Flare                          = 5,
	MiningTool                     = 6,
	Armor                          = 7,
	EItemCategory_MAX              = 8
};


// Enum FSD.EFSDFaction
enum class EFSDFaction : uint8_t
{
	NoFaction                      = 0,
	CaveCrawlers                   = 1,
	MightyMiners                   = 2,
	DirtDiggers                    = 3,
	EFSDFaction_MAX                = 4
};


// Enum FSD.EKeyBindingAxis
enum class EKeyBindingAxis : uint8_t
{
	None                           = 0,
	Positive                       = 1,
	Negative                       = 2,
	EKeyBindingAxis_MAX            = 3
};


// Enum FSD.EHUDVisibilityMode
enum class EHUDVisibilityMode : uint8_t
{
	Visible                        = 0,
	Dynamic                        = 1,
	Hidden                         = 2,
	EHUDVisibilityMode_MAX         = 3
};


// Enum FSD.EVanitySlot
enum class EVanitySlot : uint8_t
{
	Head                           = 0,
	Beard                          = 1,
	Armor                          = 2,
	BeardColor                     = 3,
	SkinColor                      = 4,
	Moustache                      = 5,
	Eyebrows                       = 6,
	Sideburns                      = 7,
	ArmorMaterial                  = 8,
	Count                          = 9,
	EVanitySlot_MAX                = 10
};


// Enum FSD.ECampaignType
enum class ECampaignType : uint8_t
{
	Normal                         = 0,
	Weekly                         = 1,
	MatrixCoreHunt                 = 2,
	ECampaignType_MAX              = 3
};


// Enum FSD.EItemPreviewStatus
enum class EItemPreviewStatus : uint8_t
{
	Normal                         = 0,
	Upgraded                       = 1,
	Previewed                      = 2,
	PreviewReduced                 = 3,
	UpgradedAndPreviewReduced      = 4,
	EItemPreviewStatus_MAX         = 5
};


// Enum FSD.EUpgradeCalucationType
enum class EUpgradeCalucationType : uint8_t
{
	Additive                       = 0,
	Multiplicative                 = 1,
	EUpgradeCalucationType_MAX     = 2
};


// Enum FSD.EUpgradeClass
enum class EUpgradeClass : uint8_t
{
	Class_A                        = 0,
	Class_B                        = 1,
	Gear_A                         = 2,
	Gear_B                         = 3,
	Armor                          = 4,
	Pickaxe                        = 5,
	Class_Bosco                    = 6,
	EUpgradeClass_MAX              = 7
};


// Enum FSD.EUpgradeTiers
enum class EUpgradeTiers : uint8_t
{
	Tier                           = 0,
	Tier01                         = 1,
	Tier02                         = 2,
	Tier03                         = 3,
	Tier04                         = 4,
	Tier_MAX                       = 5
};


// Enum FSD.EDroneAIState
enum class EDroneAIState : uint8_t
{
	Follow                         = 0,
	Mine                           = 1,
	Fight                          = 2,
	Revive                         = 3,
	Light                          = 4,
	GoToPlayer                     = 5,
	Salute                         = 6,
	CarryGem                       = 7,
	UseAbillity                    = 8,
	EDroneAIState_MAX              = 9
};


// Enum FSD.EEnemyHealthScaling
enum class EEnemyHealthScaling : uint8_t
{
	SmallEnemy                     = 0,
	LargeEnemy                     = 1,
	ExtraLargeEnemy                = 2,
	ExtraLargeEnemyB               = 3,
	ExtraLargeEnemyC               = 4,
	ExtraLargeEnemyD               = 5,
	NoScaling                      = 6,
	EEnemyHealthScaling_MAX        = 7
};


// Enum FSD.EHealthbarType
enum class EHealthbarType : uint8_t
{
	None                           = 0,
	MainLife                       = 1,
	Shield                         = 2,
	EHealthbarType_MAX             = 3
};


// Enum FSD.EMissionStatType
enum class EMissionStatType : uint8_t
{
	Float                          = 0,
	Integer                        = 1,
	Time                           = 2,
	Distance                       = 3,
	EMissionStatType_MAX           = 4
};


// Enum FSD.EFrozenBitsSize
enum class EFrozenBitsSize : uint8_t
{
	Tiny                           = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Huge                           = 4,
	EFrozenBitsSize_MAX            = 5
};


// Enum FSD.EUseRestriction
enum class EUseRestriction : uint8_t
{
	Free                           = 0,
	DepositOnly                    = 1,
	Repair                         = 2,
	Zipline                        = 3,
	BlockAll                       = 4,
	PickupItem                     = 5,
	EUseRestriction_MAX            = 6
};


// Enum FSD.ESchematicState
enum class ESchematicState : uint8_t
{
	NotOwned                       = 0,
	OwnedCannotBuild               = 1,
	OwnedCanBuild                  = 2,
	OwnedBuilt                     = 3,
	ESchematicState_MAX            = 4
};


// Enum FSD.ESchematicType
enum class ESchematicType : uint8_t
{
	Overclock                      = 0,
	Vanity                         = 1,
	Resource                       = 2,
	Blank                          = 3,
	ESchematicType_MAX             = 4
};


// Enum FSD.EHUDVisibilityPresets
enum class EHUDVisibilityPresets : uint8_t
{
	AllVisible                     = 0,
	Recommended                    = 1,
	Minimal                        = 2,
	AllHidden                      = 3,
	EHUDVisibilityPresets_MAX      = 4
};


// Enum FSD.EHUDVisibilityGroups
enum class EHUDVisibilityGroups : uint8_t
{
	OnScreenHelp                   = 0,
	EnemyHealth                    = 1,
	RadarAndDepth                  = 2,
	PlayerHealthShield             = 3,
	PlayerNameClassIcon            = 4,
	PlayerItems                    = 5,
	PlayerResources                = 6,
	WeaponInfo                     = 7,
	Grenades                       = 8,
	FlashLight                     = 9,
	Flares                         = 10,
	Crosshair                      = 11,
	Objectives                     = 12,
	TeamDisplay                    = 13,
	SentryGunDisplay               = 14,
	EHUDVisibilityGroups_MAX       = 15
};


// Enum FSD.ELaserPointerTargetType
enum class ELaserPointerTargetType : uint8_t
{
	Chunkable                      = 0,
	Dirt                           = 1,
	Player                         = 2,
	Enemy                          = 3,
	EmbeddedGem                    = 4,
	Other                          = 5,
	ELaserPointerTargetType_MAX    = 6
};


// Enum FSD.ELineRotation
enum class ELineRotation : uint8_t
{
	None                           = 0,
	Yaw                            = 1,
	Pitch                          = 2,
	Roll                           = 3,
	ELineRotation_MAX              = 4
};


// Enum FSD.EImpactDecalSize
enum class EImpactDecalSize : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	None                           = 3,
	EImpactDecalSize_MAX           = 4
};


// Enum FSD.ERecallableActorState
enum class ERecallableActorState : uint8_t
{
	Idle                           = 0,
	RelocateRequested              = 1,
	Relocating                     = 2,
	ReturnRequested                = 3,
	Returning                      = 4,
	Home                           = 5,
	ERecallableActorState_MAX      = 6
};


// Enum FSD.ERedeployableSentryGunState
enum class ERedeployableSentryGunState : uint8_t
{
	Deploying                      = 0,
	Deployed                       = 1,
	Dismantling                    = 2,
	Dismantled                     = 3,
	ERedeployableSentryGunState_MAX = 4
};


// Enum FSD.EItemSkinType
enum class EItemSkinType : uint8_t
{
	Color                          = 0,
	Mesh                           = 1,
	EItemSkinType_MAX              = 2
};


// Enum FSD.EThrownGrenadeItemState
enum class EThrownGrenadeItemState : uint8_t
{
	NotEquipped                    = 0,
	Cooking                        = 1,
	Throwing                       = 2,
	EThrownGrenadeItemState_MAX    = 3
};


// Enum FSD.EFriendOnlineStatusEnum
enum class EFriendOnlineStatusEnum : uint8_t
{
	Online                         = 0,
	Offline                        = 1,
	Away                           = 2,
	EFriendOnlineStatusEnum_MAX    = 3
};


// Enum FSD.EDeepMovementState
enum class EDeepMovementState : uint8_t
{
	Stationary                     = 0,
	Controlled                     = 1,
	Moving                         = 2,
	WaitingForPath                 = 3,
	AttackStance                   = 4,
	FakePhysics                    = 5,
	EDeepMovementState_MAX         = 6
};


// Enum FSD.EFSDTargetPlatform
enum class EFSDTargetPlatform : uint8_t
{
	Steam                          = 0,
	UWPBox                         = 1,
	XboxOne                        = 2,
	Oddish                         = 3,
	PFP                            = 4,
	EFSDTargetPlatform_MAX         = 5
};


// Enum FSD.ECreatureSize
enum class ECreatureSize : uint8_t
{
	Tiny                           = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Huge                           = 4,
	ECreatureSize_MAX              = 5
};


// Enum FSD.EAmmoWeaponState
enum class EAmmoWeaponState : uint8_t
{
	Equipping                      = 0,
	Ready                          = 1,
	Cycling                        = 2,
	Reloading                      = 3,
	BurstCycling                   = 4,
	EAmmoWeaponState_MAX           = 5
};


// Enum FSD.EAsyncLoadPriority
enum class EAsyncLoadPriority : uint8_t
{
	Normal                         = 0,
	High                           = 1,
	Low                            = 2,
	EAsyncLoadPriority_MAX         = 3
};


// Enum FSD.EAsyncPersistence
enum class EAsyncPersistence : uint8_t
{
	Manual                         = 0,
	Level                          = 1,
	Permanent                      = 2,
	EAsyncPersistence_MAX          = 3
};


// Enum FSD.EAutoMiningState
enum class EAutoMiningState : uint8_t
{
	Equipping                      = 0,
	Idle                           = 1,
	Mining                         = 2,
	Overheated                     = 3,
	EAutoMiningState_MAX           = 4
};


// Enum FSD.EPlatformRestriction
enum class EPlatformRestriction : uint8_t
{
	Editor                         = 0,
	Steam                          = 1,
	Oddish                         = 2,
	UniversalWindowsPlatform       = 3,
	XBoxOne                        = 4,
	PS4                            = 5,
	EPlatformRestriction_MAX       = 6
};


// Enum FSD.EBuildTypeRestriction
enum class EBuildTypeRestriction : uint8_t
{
	Development                    = 0,
	Shipping                       = 1,
	EBuildTypeRestriction_MAX      = 2
};


// Enum FSD.ECampaignMutators
enum class ECampaignMutators : uint8_t
{
	NotAllowed                     = 0,
	Allowed                        = 1,
	Preffered                      = 2,
	ECampaignMutators_MAX          = 3
};


// Enum FSD.ECellCategory
enum class ECellCategory : uint8_t
{
	Cave                           = 0,
	Tunnel                         = 1,
	ECellCategory_MAX              = 2
};


// Enum FSD.ECaveLeechState
enum class ECaveLeechState : uint8_t
{
	Idle                           = 0,
	Tracking                       = 1,
	Pulling                        = 2,
	Retracting                     = 3,
	Dying                          = 4,
	Dead                           = 5,
	Frozen                         = 6,
	ECaveLeechState_MAX            = 7
};


// Enum FSD.EFSDChromaEffect
enum class EFSDChromaEffect : uint8_t
{
	HealthDamage                   = 0,
	ShieldDamage                   = 1,
	Flare                          = 2,
	MissionSuccess                 = 3,
	None                           = 4,
	EFSDChromaEffect_MAX           = 5
};


// Enum FSD.EExampleEnum
enum class EExampleEnum : uint8_t
{
	FirstName                      = 0,
	SecondName                     = 1,
	EExampleEnum_MAX               = 2
};


// Enum FSD.EShoutType
enum class EShoutType : uint8_t
{
	Attention                      = 0,
	Follow                         = 1,
	StandingDown                   = 2,
	Downed                         = 3,
	RequestRevive                  = 4,
	Revived                        = 5,
	Resupply                       = 6,
	FriendlyFire                   = 7,
	KillCry                        = 8,
	Dead                           = 9,
	Cheating                       = 10,
	ResourceFull                   = 11,
	ResourceFullNoDonkey           = 12,
	CallDonkey                     = 13,
	Depositing                     = 14,
	DepositingNoDonkey             = 15,
	OutOfAmmo                      = 16,
	Reloading                      = 17,
	CharacterSelected              = 18,
	UpgradeBought                  = 19,
	WaitingInDropPod               = 20,
	Carrying                       = 21,
	EShoutType_MAX                 = 22
};


// Enum FSD.ECommunityGoalTier
enum class ECommunityGoalTier : uint8_t
{
	Bronze                         = 0,
	Silver                         = 1,
	Gold                           = 2,
	ECommunityGoalTier_MAX         = 3
};


// Enum FSD.ECommunityGoalType
enum class ECommunityGoalType : uint8_t
{
	Float                          = 0,
	Integer                        = 1,
	Time                           = 2,
	Distance                       = 3,
	ECommunityGoalType_MAX         = 4
};


// Enum FSD.ECommunityUIState
enum class ECommunityUIState : uint8_t
{
	Loading                        = 0,
	SelectFaction                  = 1,
	Progress                       = 2,
	Recruitment                    = 3,
	Reward                         = 4,
	Invalid                        = 5,
	ECommunityUIState_MAX          = 6
};


// Enum FSD.ERobotState
enum class ERobotState : uint8_t
{
	Enemy                          = 0,
	Friendly                       = 1,
	PoweredDown                    = 2,
	ERobotState_MAX                = 3
};


// Enum FSD.EDamageComponentType
enum class EDamageComponentType : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	EDamageComponentType_MAX       = 2
};


// Enum FSD.EDashPointsGenerationMode
enum class EDashPointsGenerationMode : uint8_t
{
	Surround                       = 0,
	Forward                        = 1,
	EDashPointsGenerationMode_MAX  = 2
};


// Enum FSD.EDebrisOrientation
enum class EDebrisOrientation : uint8_t
{
	Random                         = 0,
	RandomXY                       = 1,
	AlignToSurfaceNormal           = 2,
	Fixed                          = 3,
	EDebrisOrientation_MAX         = 4
};


// Enum FSD.EDebrisMeshShadows
enum class EDebrisMeshShadows : uint8_t
{
	Never                          = 0,
	High                           = 1,
	Always                         = 2,
	EDebrisMeshShadows_MAX         = 3
};


// Enum FSD.EDebrisMeshCollisionProfile
enum class EDebrisMeshCollisionProfile : uint8_t
{
	NoCollision                    = 0,
	HitOnly                        = 1,
	HitAndCollide                  = 2,
	EDebrisMeshCollisionProfile_MAX = 3
};


// Enum FSD.EDebrisColliderType
enum class EDebrisColliderType : uint8_t
{
	Object                         = 0,
	AirParticles                   = 1,
	ObjectB                        = 2,
	ObjectC                        = 3,
	EDebrisColliderType_MAX        = 4
};


// Enum FSD.EDebrisCarvedType
enum class EDebrisCarvedType : uint8_t
{
	Large                          = 0,
	Small                          = 1,
	EDebrisCarvedType_MAX          = 2
};


// Enum FSD.ELandscapeCellFilter
enum class ELandscapeCellFilter : uint8_t
{
	Any                            = 0,
	Empty                          = 1,
	Filled                         = 2,
	Diggable                       = 3,
	NotDiggable                    = 4,
	Collidable                     = 5,
	NotCollidable                  = 6,
	Rubble                         = 7,
	NotRubble                      = 8,
	ELandscapeCellFilter_MAX       = 9
};


// Enum FSD.EPathfinderResult
enum class EPathfinderResult : uint8_t
{
	Success                        = 0,
	Failed_StartingPointNotFound   = 1,
	Failed_EndPointNotFound        = 2,
	Failed_PointsNotConnected      = 3,
	Failed_UsedTooManyNodes        = 4,
	Failed_NotReady                = 5,
	Failed_UnknownError            = 6,
	EPathfinderResult_MAX          = 7
};


// Enum FSD.PFCollisionType
enum class EPFCollisionType : uint8_t
{
	SolidWalkable                  = 0,
	Block                          = 1,
	Danger                         = 2,
	PFCollisionType_MAX            = 3
};


// Enum FSD.DeepPathFinderPreference
enum class EDeepPathFinderPreference : uint8_t
{
	None                           = 0,
	Floor                          = 1,
	Walls                          = 2,
	Ceiling                        = 3,
	DeepPathFinderPreference_MAX   = 4
};


// Enum FSD.DeepPathFinderSize
enum class EDeepPathFinderSize : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	DeepPathFinderSize_MAX         = 3
};


// Enum FSD.DeepPathFinderType
enum class EDeepPathFinderType : uint8_t
{
	Walk                           = 0,
	Fly                            = 1,
	MAX                            = 2
};


// Enum FSD.EDeepMovementMode
enum class EDeepMovementMode : uint8_t
{
	Normal                         = 0,
	Flee                           = 1,
	Fly                            = 2,
	BackOff                        = 3,
	EDeepMovementMode_MAX          = 4
};


// Enum FSD.EDefendPointState
enum class EDefendPointState : uint8_t
{
	Idle                           = 0,
	Started                        = 1,
	Completed                      = 2,
	Failed                         = 3,
	EDefendPointState_MAX          = 4
};


// Enum FSD.EDialogRestriction
enum class EDialogRestriction : uint8_t
{
	None                           = 0,
	SinglePlayerOnly               = 1,
	MultiPlayerOnly                = 2,
	EDialogRestriction_MAX         = 3
};


// Enum FSD.EVeteranScaling
enum class EVeteranScaling : uint8_t
{
	NormalEnemy                    = 0,
	LargeEnemy                     = 1,
	EVeteranScaling_MAX            = 2
};


// Enum FSD.EEnemySignificance
enum class EEnemySignificance : uint8_t
{
	Swarmer                        = 0,
	Normal                         = 1,
	Critical                       = 2,
	Critter                        = 3,
	EEnemySignificance_MAX         = 4
};


// Enum FSD.EBoscoAbillityTargetPreference
enum class EBoscoAbillityTargetPreference : uint8_t
{
	Self                           = 0,
	SelectedTarget                 = 1,
	ClosestPlayer                  = 2,
	ClosestEnemy                   = 3,
	TargetLocation                 = 4,
	EBoscoAbillityTargetPreference_MAX = 5
};


// Enum FSD.EDroneActions
enum class EDroneActions : uint8_t
{
	Wandering                      = 0,
	Mining                         = 1,
	Fighting                       = 2,
	Lighting                       = 3,
	Reviving                       = 4,
	EDroneActions_MAX              = 5
};


// Enum FSD.EDropPodState
enum class EDropPodState : uint8_t
{
	WaitingToDrop                  = 0,
	Drilling                       = 1,
	Landed                         = 2,
	PrepTakeoff                    = 3,
	Departing                      = 4,
	EDropPodState_MAX              = 5
};


// Enum FSD.EEnemyFamily
enum class EEnemyFamily : uint8_t
{
	Glyphid                        = 0,
	Mactera                        = 1,
	Naedocyte                      = 2,
	Qronar                         = 3,
	Xynarch                        = 4,
	Nayaka                         = 5,
	Deeptora                       = 6,
	Korlok                         = 7,
	Automaton                      = 8,
	Unknown                        = 9,
	EEnemyFamily_MAX               = 10
};


// Enum FSD.EEnemyType
enum class EEnemyType : uint8_t
{
	Ground                         = 0,
	Flying                         = 1,
	Stationary                     = 2,
	EEnemyType_MAX                 = 3
};


// Enum FSD.EFSDAchievementType
enum class EFSDAchievementType : uint8_t
{
	NoStatUsed                     = 0,
	IncrementStatPerCall           = 1,
	SetStatIfHighscore             = 2,
	ForceNewStatEachCall           = 3,
	EFSDAchievementType_MAX        = 4
};


// Enum FSD.ETargetStateDamageBonusType
enum class ETargetStateDamageBonusType : uint8_t
{
	Frozen                         = 0,
	OnFire                         = 1,
	Fleeing                        = 2,
	Staggered                      = 3,
	ETargetStateDamageBonusType_MAX = 4
};


// Enum FSD.EPauseReason
enum class EPauseReason : uint8_t
{
	MenuActive                     = 0,
	ReconnectController            = 1,
	EPauseReason_MAX               = 2
};


// Enum FSD.EInputInteraction
enum class EInputInteraction : uint8_t
{
	Press                          = 0,
	Hold                           = 1,
	EInputInteraction_MAX          = 2
};


// Enum FSD.EVolumeType
enum class EVolumeType : uint8_t
{
	CharacterVoices                = 0,
	Master                         = 1,
	SFX                            = 2,
	Music                          = 3,
	VoiceChat                      = 4,
	MissionControl                 = 5,
	EVolumeType_MAX                = 6
};


// Enum FSD.EPostProcessingType
enum class EPostProcessingType : uint8_t
{
	GameWorld                      = 0,
	CharacterSelector              = 1,
	EPostProcessingType_MAX        = 2
};


// Enum FSD.EItemNotificationType
enum class EItemNotificationType : uint8_t
{
	NewOverclock                   = 0,
	EItemNotificationType_MAX      = 1
};


// Enum FSD.ESteamBranch
enum class ESteamBranch : uint8_t
{
	Main                           = 0,
	Experimental                   = 1,
	Internal_Testing               = 2,
	Other                          = 3,
	ESteamBranch_MAX               = 4
};


// Enum FSD.EMoveType
enum class EMoveType : uint8_t
{
	EaseIn                         = 0,
	EaseOut                        = 1,
	EMoveType_MAX                  = 2
};


// Enum FSD.EPingType
enum class EPingType : uint8_t
{
	EaseOut                        = 0,
	Bounce                         = 1,
	EPingType_MAX                  = 2
};


// Enum FSD.ECommunityGoalIndex
enum class ECommunityGoalIndex : uint8_t
{
	KillBroodNexus                 = 0,
	KillBulkDetonators             = 1,
	KillCaveLeeches                = 2,
	KillJellyBreeders              = 3,
	KillPretorians                 = 4,
	KillShellbacks                 = 5,
	KillSpitballers                = 6,
	CollectBittergem               = 7,
	CollectCompressedGold          = 8,
	CollectGold                    = 9,
	CollectCraftingMaterials       = 10,
	GainXP                         = 11,
	TestGoal                       = 12,
	Count                          = 13,
	ECommunityGoalIndex_MAX        = 14
};


// Enum FSD.EFSDGoogleAnalyticsProperties
enum class EFSDGoogleAnalyticsProperties : uint8_t
{
	DRG                            = 0,
	Discord                        = 1,
	CommunityGoals                 = 2,
	DRG_Discord                    = 3,
	All                            = 4,
	Other                          = 5,
	EFSDGoogleAnalyticsProperties_MAX = 6
};


// Enum FSD.EFlyingLifterSpeed
enum class EFlyingLifterSpeed : uint8_t
{
	Normal                         = 0,
	Chasing                        = 1,
	Grabbed                        = 2,
	EFlyingLifterSpeed_MAX         = 3
};


// Enum FSD.EGrabberState
enum class EGrabberState : uint8_t
{
	Chase                          = 0,
	Wander                         = 1,
	Carry                          = 2,
	Flee                           = 3,
	StandBy                        = 4,
	EGrabberState_MAX              = 5
};


// Enum FSD.EGrabbedStateCameraMode
enum class EGrabbedStateCameraMode : uint8_t
{
	FirstPerson                    = 0,
	ThirdPerson                    = 1,
	EGrabbedStateCameraMode_MAX    = 2
};


// Enum FSD.ERicochetBehavior
enum class ERicochetBehavior : uint8_t
{
	All                            = 0,
	PawnsOnly                      = 1,
	NotPawns                       = 2,
	ERicochetBehavior_MAX          = 3
};


// Enum FSD.ECharacterAnimSet
enum class ECharacterAnimSet : uint8_t
{
	Pistol                         = 0,
	Rifle                          = 1,
	HeavyLow                       = 2,
	NoHands                        = 3,
	HeavyDual                      = 4,
	DualPistol                     = 5,
	ECharacterAnimSet_MAX          = 6
};


// Enum FSD.EItemSkinCollectionType
enum class EItemSkinCollectionType : uint8_t
{
	PerCharacter                   = 0,
	PerItem                        = 1,
	EItemSkinCollectionType_MAX    = 2
};


// Enum FSD.EDetPackUpgrades
enum class EDetPackUpgrades : uint8_t
{
	CanPickUp                      = 0,
	CarveDiameter                  = 1,
	ExplodeOnDeath                 = 2,
	ExtraFearRadius                = 3,
	ExtraStaggerRadius             = 4,
	EDetPackUpgrades_MAX           = 5
};


// Enum FSD.EPlatformGunUpgrades
enum class EPlatformGunUpgrades : uint8_t
{
	BiggerPlatform                 = 0,
	LessFallDamage                 = 1,
	BugRepellant                   = 2,
	CubePlatform                   = 3,
	EPlatformGunUpgrades_MAX       = 4
};


// Enum FSD.EBoscoUpgrades
enum class EBoscoUpgrades : uint8_t
{
	MiningSpeedUpgrade             = 0,
	ExtraRevive                    = 1,
	ActiveLightRadius              = 2,
	Missile                        = 3,
	CryoGrenade                    = 4,
	SACooldownReduction            = 5,
	ExtraAbillityCharge            = 6,
	EBoscoUpgrades_MAX             = 7
};


// Enum FSD.EArmorUpgradeType
enum class EArmorUpgradeType : uint8_t
{
	RegenDelay                     = 0,
	RegenRate                      = 1,
	ReviveInvulnerability          = 2,
	EArmorUpgradeType_MAX          = 3
};


// Enum FSD.ETriggeredStatusEffectType
enum class ETriggeredStatusEffectType : uint8_t
{
	ShieldDestroyed                = 0,
	GrapplingHookReleased          = 1,
	NONE                           = 2,
	ETriggeredStatusEffectType_MAX = 3
};


// Enum FSD.EArmorRegeneratorUpgrades
enum class EArmorRegeneratorUpgrades : uint8_t
{
	Radius                         = 0,
	Duration                       = 1,
	DeployTime                     = 2,
	RechargeTime                   = 3,
	RechargeCount                  = 4,
	PushStatusEffect               = 5,
	EArmorRegeneratorUpgrades_MAX  = 6
};


// Enum FSD.ESentryGunUpgradeType
enum class ESentryGunUpgradeType : uint8_t
{
	MaxAmmo                        = 0,
	ReloadSpeed                    = 1,
	ExtraSentry                    = 2,
	AngleRestriction               = 3,
	ManualTargeting                = 4,
	MaxRange                       = 5,
	RotationSpeed                  = 6,
	BurstCooldown                  = 7,
	ESentryGunUpgradeType_MAX      = 8
};


// Enum FSD.EGrapplingHookUpgrade
enum class EGrapplingHookUpgrade : uint8_t
{
	MaxDistance                    = 0,
	MaxSpeed                       = 1,
	WindUpTime                     = 2,
	EGrapplingHookUpgrade_MAX      = 3
};


// Enum FSD.EZiplineGunUpgrades
enum class EZiplineGunUpgrades : uint8_t
{
	MaxAngle                       = 0,
	MaxDistance                    = 1,
	MovementSpeed                  = 2,
	FallDamageReduction            = 3,
	EZiplineGunUpgrades_MAX        = 4
};


// Enum FSD.EElectricalSMGUpgrades
enum class EElectricalSMGUpgrades : uint8_t
{
	AoEChance                      = 0,
	PlasmaBeam                     = 1,
	TurretEMPDischarge             = 2,
	EElectricalSMGUpgrades_MAX     = 3
};


// Enum FSD.EChargedProjectileUpgrades
enum class EChargedProjectileUpgrades : uint8_t
{
	ExplodesOnDamage               = 0,
	AoEDamageInFlight              = 1,
	PersistentExplosion            = 2,
	EChargedProjectileUpgrades_MAX = 3
};


// Enum FSD.EFlaregunProjectileUpgrades
enum class EFlaregunProjectileUpgrades : uint8_t
{
	Duration                       = 0,
	EFlaregunProjectileUpgrades_MAX = 1
};


// Enum FSD.EFlaregunUpgrades
enum class EFlaregunUpgrades : uint8_t
{
	AutoReload                     = 0,
	EFlaregunUpgrades_MAX          = 1
};


// Enum FSD.EProjectileUpgrade
enum class EProjectileUpgrade : uint8_t
{
	Velocity                       = 0,
	Bouncy                         = 1,
	Lifetime                       = 2,
	DoOnImpact                     = 3,
	DoOnImpact2                    = 4,
	EProjectileUpgrade_MAX         = 5
};


// Enum FSD.ELineCutterProjectileUpgradeType
enum class ELineCutterProjectileUpgradeType : uint8_t
{
	LineSize                       = 0,
	LineSizeMultiplier             = 1,
	ExplosiveRound                 = 2,
	SetDeployDelay                 = 3,
	AddDeployTime                  = 4,
	ExplodeOnNextProjectile        = 5,
	DoubleLine                     = 6,
	LineSizeAdd                    = 7,
	SetDeployTime                  = 8,
	RollUntilStop                  = 9,
	Yawing                         = 10,
	PlasmaTrail                    = 11,
	ELineCutterProjectileUpgradeType_MAX = 12
};


// Enum FSD.ELineCutterUpgradeType
enum class ELineCutterUpgradeType : uint8_t
{
	ReverseDirection               = 0,
	ExplodeLastProjectile          = 1,
	ELineCutterUpgradeType_MAX     = 2
};


// Enum FSD.EGrenadeUpgradeType
enum class EGrenadeUpgradeType : uint8_t
{
	MaxGrenades                    = 0,
	FuseTime                       = 1,
	EGrenadeUpgradeType_MAX        = 2
};


// Enum FSD.EFlareUpgradeType
enum class EFlareUpgradeType : uint8_t
{
	Duration                       = 0,
	MaxFlares                      = 1,
	ProductionTime                 = 2,
	EFlareUpgradeType_MAX          = 3
};


// Enum FSD.ESingleUsableUpgradeType
enum class ESingleUsableUpgradeType : uint8_t
{
	UseDuration                    = 0,
	ESingleUsableUpgradeType_MAX   = 1
};


// Enum FSD.EExplosionUpgrade
enum class EExplosionUpgrade : uint8_t
{
	NOTUSED                        = 0,
	EExplosionUpgrade_MAX          = 1
};


// Enum FSD.EDamageUpgrade
enum class EDamageUpgrade : uint8_t
{
	Damage                         = 0,
	WeakpointDamageMultiplier      = 1,
	StaggerChance                  = 2,
	StaggerDuration                = 3,
	RadialDamage                   = 4,
	RadialRange                    = 5,
	ArmorDamageMultiplier          = 6,
	FearFactor                     = 7,
	RadialRangeMultiplier          = 8,
	StaggerOnWeakpointOnly         = 9,
	EDamageUpgrade_MAX             = 10
};


// Enum FSD.EHitScanBaseUpgradeType
enum class EHitScanBaseUpgradeType : uint8_t
{
	MaxVerticalSpread              = 0,
	MaxHorizontalSpread            = 1,
	MaxPenetrations                = 2,
	WeaponAccuracySpreadMultiplier = 3,
	SpreadPerShot                  = 4,
	MinSpreadWhileMoving           = 5,
	SpreadRecoveryMultiplier       = 6,
	MinSpreadWhileSprinting        = 7,
	MaxSpread                      = 8,
	RicochetChance                 = 9,
	RicochetOnWeakspotOnly         = 10,
	RicochetBehaviourAll           = 11,
	RicochetBehaviourPawnsOnly     = 12,
	RicochetBehaviourNotPawns      = 13,
	EHitScanBaseUpgradeType_MAX    = 14
};


// Enum FSD.EMultiHitscanUpgradeType
enum class EMultiHitscanUpgradeType : uint8_t
{
	BulletsPerShot                 = 0,
	EMultiHitscanUpgradeType_MAX   = 1
};


// Enum FSD.EInventoryItemUpgradeType
enum class EInventoryItemUpgradeType : uint8_t
{
	MovementSpeedWhileUsing        = 0,
	CooldownRate                   = 1,
	UnJamDuration                  = 2,
	EInventoryItemUpgradeType_MAX  = 3
};


// Enum FSD.EAutoMinerUpgradeType
enum class EAutoMinerUpgradeType : uint8_t
{
	MiningRate                     = 0,
	MaxFuel                        = 1,
	HeatRemovalOnKill              = 2,
	HeatRemovalOnDamage            = 3,
	MovementPenalty                = 4,
	EAutoMinerUpgradeType_MAX      = 5
};


// Enum FSD.EFlameThrowerUpgradeType
enum class EFlameThrowerUpgradeType : uint8_t
{
	StickyFlameDuration            = 0,
	LongReach                      = 1,
	AoEHeat                        = 2,
	KilledTargetsExplodeChance     = 3,
	EFlameThrowerUpgradeType_MAX   = 4
};


// Enum FSD.EManualMiningUpgradeType
enum class EManualMiningUpgradeType : uint8_t
{
	RockMining                     = 0,
	OneHitMineralMining            = 1,
	ReceiveBonusMineralNitra       = 2,
	ReceiveBonusMineralGold        = 3,
	EnablePowerAttack              = 4,
	PowerAttackCoolDown            = 5,
	EManualMiningUpgradeType_MAX   = 6
};


// Enum FSD.ECryoSprayUpgrades
enum class ECryoSprayUpgrades : uint8_t
{
	PressureDropMultiplier         = 0,
	PressureGainMultiplier         = 1,
	ChargeupTime                   = 2,
	RePressurisationTime           = 3,
	FrozenTargetsCanShatter        = 4,
	AoECold                        = 5,
	LongReach                      = 6,
	ECryoSprayUpgrades_MAX         = 7
};


// Enum FSD.ERevolerUpgrades
enum class ERevolerUpgrades : uint8_t
{
	OnKillFearFactor               = 0,
	ERevolerUpgrades_MAX           = 1
};


// Enum FSD.EBasicPistol
enum class EBasicPistol : uint8_t
{
	ConsecutiveHitsDamageBonus     = 0,
	EBasicPistol_MAX               = 1
};


// Enum FSD.EAutoShotgunUpgrades
enum class EAutoShotgunUpgrades : uint8_t
{
	TurretSpecialAttackEnabled     = 0,
	RateOfFireAndAutoMatic         = 1,
	EAutoShotgunUpgrades_MAX       = 2
};


// Enum FSD.EBurstWeaponUpgrades
enum class EBurstWeaponUpgrades : uint8_t
{
	FullBurstHitBonusDamage        = 0,
	FullBurstStaggerDuraion        = 1,
	EBurstWeaponUpgrades_MAX       = 2
};


// Enum FSD.ESawedOffShotgunUpgrades
enum class ESawedOffShotgunUpgrades : uint8_t
{
	FearOnShoot                    = 0,
	ShockWave                      = 1,
	ShotgunJump                    = 2,
	ESawedOffShotgunUpgrades_MAX   = 3
};


// Enum FSD.EAutoCannonUpgrades
enum class EAutoCannonUpgrades : uint8_t
{
	FireTimeIncreaseScaleMultiplier = 0,
	DamageBonusAtFullROF           = 1,
	StatusEffectAtFullROF          = 2,
	StartingFireRate               = 3,
	MaxFireRate                    = 4,
	EAutoCannonUpgrades_MAX        = 5
};


// Enum FSD.EChargedWeaponUpgrades
enum class EChargedWeaponUpgrades : uint8_t
{
	ShotCostAtFullCharge           = 0,
	ChargeSpeed                    = 1,
	CoolingRate                    = 2,
	HeatPerSecondCharging          = 3,
	HeatPerSecondCharged           = 4,
	HeatPerChargedShot             = 5,
	HeatPerNormalShot              = 6,
	EChargedWeaponUpgrades_MAX     = 7
};


// Enum FSD.EDualMachinePistolsUpgrades
enum class EDualMachinePistolsUpgrades : uint8_t
{
	TriggerStatusEffectOnEmptyClip = 0,
	EDualMachinePistolsUpgrades_MAX = 1
};


// Enum FSD.EBoltActionRifleUpgrades
enum class EBoltActionRifleUpgrades : uint8_t
{
	FocusSpeed                     = 0,
	AimedShotStagger               = 1,
	AimedWeakShotKillFearFactor    = 2,
	FocusDamageBonus               = 3,
	UnZoomedAccuracySpread         = 4,
	FocusedWeakspotHitStatusEffect = 5,
	NoGravityOnFocus               = 6,
	KillReloadTimeBoost            = 7,
	EBoltActionRifleUpgrades_MAX   = 8
};


// Enum FSD.EAssaultRifleUpgrade
enum class EAssaultRifleUpgrade : uint8_t
{
	KillResetsSpread               = 0,
	KillTriggerStatusEffect        = 1,
	EAssaultRifleUpgrade_MAX       = 2
};


// Enum FSD.EGatlingGunUpgrade
enum class EGatlingGunUpgrade : uint8_t
{
	DamageMultiplierAtMaxStabilization = 0,
	HeatRemovedOnKill              = 1,
	CriticalOverheat               = 2,
	BarrelProximityDamage          = 3,
	EGatlingGunUpgrade_MAX         = 4
};


// Enum FSD.EBeltDrivenWeaponUpgrade
enum class EBeltDrivenWeaponUpgrade : uint8_t
{
	BarrelSpinupTime               = 0,
	BarrelSpinDownTime             = 1,
	EBeltDrivenWeaponUpgrade_MAX   = 2
};


// Enum FSD.EAmmoDrivenWeapnUpgradeType
enum class EAmmoDrivenWeapnUpgradeType : uint8_t
{
	MaxAmmo                        = 0,
	ClipSize                       = 1,
	RateOfFire                     = 2,
	ReloadSpeed                    = 3,
	RecoilMultiplier               = 4,
	BurstCount                     = 5,
	BurstRateOfFire                = 6,
	ActivateBurstFireMode          = 7,
	ActivateAutomaticFireMode      = 8,
	HeatUpRateModifier             = 9,
	AutoReloadDuration             = 10,
	RecoilMass                     = 11,
	EAmmoDrivenWeapnUpgradeType_MAX = 12
};


// Enum FSD.EManualMiningState
enum class EManualMiningState : uint8_t
{
	Equipping                      = 0,
	Mining                         = 1,
	PowerAttack                    = 2,
	End                            = 3,
	EManualMiningState_MAX         = 4
};


// Enum FSD.EMinersManualSinglePage
enum class EMinersManualSinglePage : uint8_t
{
	Mutators                       = 0,
	Warnings                       = 1,
	DamageTypes                    = 2,
	Weakpoints                     = 3,
	Armor                          = 4,
	Light                          = 5,
	Ammo                           = 6,
	Traversal                      = 7,
	Spacerig                       = 8,
	Upgrades                       = 9,
	Perks                          = 10,
	Bosco                          = 11,
	Assignments                    = 12,
	Navigation                     = 13,
	EMinersManualSinglePage_MAX    = 14
};


// Enum FSD.EArmorType
enum class EArmorType : uint8_t
{
	Light                          = 0,
	Heavy                          = 1,
	Unbreakable                    = 2,
	EArmorType_MAX                 = 3
};


// Enum FSD.EDamageType
enum class EDamageType : uint8_t
{
	Fire                           = 0,
	Cold                           = 1,
	Melee                          = 2,
	Kinetic                        = 3,
	Explosive                      = 4,
	Stun                           = 5,
	Electrocution                  = 6,
	Fear                           = 7,
	Radiation                      = 8,
	Pheromone                      = 9,
	Poison                         = 10,
	ArmorBreaking                  = 11,
	Push                           = 12,
	Grab                           = 13,
	None                           = 14,
	Slow                           = 15,
	Defense                        = 16,
	TemperatureShock               = 17,
	EDamageType_MAX                = 18
};


// Enum FSD.EEnemyAttackType
enum class EEnemyAttackType : uint8_t
{
	Melee                          = 0,
	Ranged                         = 1,
	Grab                           = 2,
	Area                           = 3,
	Move                           = 4,
	EEnemyAttackType_MAX           = 5
};


// Enum FSD.EMiningPodMission
enum class EMiningPodMission : uint8_t
{
	DropAndReturn                  = 0,
	Extraction                     = 1,
	DropFromSpacerig               = 2,
	EMiningPodMission_MAX          = 3
};


// Enum FSD.EMiningPodRampState
enum class EMiningPodRampState : uint8_t
{
	Closed                         = 0,
	Opening                        = 1,
	Open                           = 2,
	Closing                        = 3,
	EMiningPodRampState_MAX        = 4
};


// Enum FSD.EMiningPodState
enum class EMiningPodState : uint8_t
{
	Dropping                       = 0,
	Drilling                       = 1,
	Landed                         = 2,
	PrepTakeoff                    = 3,
	Departing                      = 4,
	WaitingForGameStart            = 5,
	InSpace                        = 6,
	Destroy                        = 7,
	WaitOnSpacerig                 = 8,
	ExitSpacerig                   = 9,
	Damaged                        = 10,
	PoweringUp                     = 11,
	PoweredUp                      = 12,
	DeepDiveDeparture              = 13,
	EMiningPodState_MAX            = 14
};


// Enum FSD.EMissionStructure
enum class EMissionStructure : uint8_t
{
	SingleMission                  = 0,
	DeepDive                       = 1,
	EMissionStructure_MAX          = 2
};


// Enum FSD.EOutline
enum class EOutline : uint8_t
{
	OL_NONE                        = 0,
	OL_FRIENDLY                    = 1,
	OL_NEUTRAL                     = 2,
	OL_ENEMY                       = 3,
	OL_ITEM                        = 4,
	EOutline_MAX                   = 5
};


// Enum FSD.EAfflictionSocket
enum class EAfflictionSocket : uint8_t
{
	CenterMass                     = 0,
	Feet                           = 1,
	Camera                         = 2,
	EAfflictionSocket_MAX          = 3
};


// Enum FSD.EPawnStatType
enum class EPawnStatType : uint8_t
{
	Multiplicative                 = 0,
	Additive                       = 1,
	EPawnStatType_MAX              = 2
};


// Enum FSD.EPerkSlotType
enum class EPerkSlotType : uint8_t
{
	Available                      = 0,
	LockedByPerk                   = 1,
	LockedByPromotion              = 2,
	EPerkSlotType_MAX              = 3
};


// Enum FSD.EPerkUsageType
enum class EPerkUsageType : uint8_t
{
	Passive                        = 0,
	Active                         = 1,
	EPerkUsageType_MAX             = 2
};


// Enum FSD.EPerkHUDActivationLocation
enum class EPerkHUDActivationLocation : uint8_t
{
	Main                           = 0,
	Down                           = 1,
	EPerkHUDActivationLocation_MAX = 2
};


// Enum FSD.EPerkTierState
enum class EPerkTierState : uint8_t
{
	Claimable                      = 0,
	Claimed                        = 1,
	Locked                         = 2,
	Unaffordable                   = 3,
	NotAvailable                   = 4,
	EPerkTierState_MAX             = 5
};


// Enum FSD.EPickaxePartLocation
enum class EPickaxePartLocation : uint8_t
{
	Head                           = 0,
	FrontBlade                     = 1,
	BackBlade                      = 2,
	Shaft                          = 3,
	Handle                         = 4,
	Pommel                         = 5,
	Material                       = 6,
	Count                          = 7,
	EPickaxePartLocation_MAX       = 8
};


// Enum FSD.EPickaxePart
enum class EPickaxePart : uint8_t
{
	Head                           = 0,
	Blade                          = 1,
	Shaft                          = 2,
	Handle                         = 3,
	Pommel                         = 4,
	Material                       = 5,
	EPickaxePart_MAX               = 6
};


// Enum FSD.ECharacterMoveDirection
enum class ECharacterMoveDirection : uint8_t
{
	None                           = 0,
	Forward                        = 1,
	Left                           = 2,
	Right                          = 3,
	Back                           = 4,
	ECharacterMoveDirection_MAX    = 5
};


// Enum FSD.EGameOwnerStatus
enum class EGameOwnerStatus : uint8_t
{
	Supporter                      = 0,
	ContentCreator                 = 1,
	Developer                      = 2,
	EGameOwnerStatus_Max           = 3
};


// Enum FSD.ESpawnSettings
enum class ESpawnSettings : uint8_t
{
	Normal                         = 0,
	NoSpawning                     = 1,
	SpawnAll                       = 2,
	ESpawnSettings_MAX             = 3
};


// Enum FSD.ETerrainPlacementBoxType
enum class ETerrainPlacementBoxType : uint8_t
{
	NoTerrain                      = 0,
	Terrain                        = 1,
	ETerrainPlacementBoxType_MAX   = 2
};


// Enum FSD.ERoomMirror
enum class ERoomMirror : uint8_t
{
	None                           = 0,
	MirrorX                        = 1,
	MirrorY                        = 2,
	ERoomMirror_MAX                = 3
};


// Enum FSD.ERoomMirroringSupport
enum class ERoomMirroringSupport : uint8_t
{
	NotAllowed                     = 0,
	MirrorAroundX                  = 1,
	MirrorAroundY                  = 2,
	MirrorBoth                     = 3,
	ERoomMirroringSupport_MAX      = 4
};


// Enum FSD.EItemAdjustmentType
enum class EItemAdjustmentType : uint8_t
{
	None                           = 0,
	Cieling                        = 1,
	Wall                           = 2,
	Floor                          = 3,
	EItemAdjustmentType_MAX        = 4
};


// Enum FSD.ECaveEntranceType
enum class ECaveEntranceType : uint8_t
{
	EntranceAndExit                = 0,
	Entrance                       = 1,
	Exit                           = 2,
	TreassureRoom                  = 3,
	ECaveEntranceType_MAX          = 4
};


// Enum FSD.ERoomType
enum class ERoomType : uint8_t
{
	Start                          = 0,
	End                            = 1,
	MainPath                       = 2,
	Gold                           = 3,
	ERoomType_MAX                  = 4
};


// Enum FSD.ERessuplyPodState
enum class ERessuplyPodState : uint8_t
{
	ReadyToDrop                    = 0,
	Dropping                       = 1,
	Landed                         = 2,
	ERessuplyPodState_MAX          = 3
};


// Enum FSD.EEnemyPlacementMask
enum class EEnemyPlacementMask : uint8_t
{
	Ground                         = 0,
	Spawner                        = 1,
	Cieling                        = 2,
	EEnemyPlacementMask_MAX        = 3
};


// Enum FSD.ERoomPieceSide
enum class ERoomPieceSide : uint8_t
{
	Up                             = 0,
	Down                           = 1,
	Forward                        = 2,
	Backward                       = 3,
	Right                          = 4,
	Left                           = 5,
	ERoomPieceSide_MAX             = 6
};


// Enum FSD.EServerSortOrder
enum class EServerSortOrder : uint8_t
{
	Mission                        = 0,
	Players                        = 1,
	Length                         = 2,
	Complexity                     = 3,
	Distance                       = 4,
	Time                           = 5,
	Difficulty                     = 6,
	EServerSortOrder_MAX           = 7
};


// Enum FSD.EServerDistance
enum class EServerDistance : uint8_t
{
	Close                          = 0,
	Medium                         = 1,
	Far                            = 2,
	World                          = 3,
	EServerDistance_MAX            = 4
};


// Enum FSD.EBPUWPMandatoryUpdateCheck
enum class EBPUWPMandatoryUpdateCheck : uint8_t
{
	NotStarted                     = 0,
	Waiting                        = 1,
	NoUpdates                      = 2,
	UpdateNeeded                   = 3,
	EBPUWPMandatoryUpdateCheck_MAX = 4
};


// Enum FSD.EUWPBPTrialCheck
enum class EUWPBPTrialCheck : uint8_t
{
	NotStarted                     = 0,
	Waiting                        = 1,
	Expired                        = 2,
	Valid                          = 3,
	EUWPBPTrialCheck_MAX           = 4
};


// Enum FSD.EFSDNATType
enum class EFSDNATType : uint8_t
{
	Open                           = 0,
	Moderate                       = 1,
	Strict                         = 2,
	Unknown                        = 3,
	EFSDNATType_MAX                = 4
};


// Enum FSD.EFSDMissionStatus
enum class EFSDMissionStatus : uint8_t
{
	SpaceRig                       = 0,
	InGame                         = 1,
	Starting                       = 2,
	EscapeSequence                 = 3,
	EFSDMissionStatus_MAX          = 4
};


// Enum FSD.ESharkEnemyState
enum class ESharkEnemyState : uint8_t
{
	Idle                           = 0,
	Circling                       = 1,
	Attacking                      = 2,
	Vulnerable                     = 3,
	Dive                           = 4,
	ESharkEnemyState_MAX           = 5
};


// Enum FSD.EShowroomScaling
enum class EShowroomScaling : uint8_t
{
	NoScaling                      = 0,
	EnemySmall                     = 1,
	EnemyMedium                    = 2,
	EnemyBig                       = 3,
	EnemyHuge                      = 4,
	EShowroomScaling_MAX           = 5
};


// Enum FSD.EMaggotAnimationState
enum class EMaggotAnimationState : uint8_t
{
	Idle                           = 0,
	Moving                         = 1,
	EMaggotAnimationState_MAX      = 2
};


// Enum FSD.EMoveDirection
enum class EMoveDirection : uint8_t
{
	None                           = 0,
	Forward                        = 1,
	Left                           = 2,
	Right                          = 3,
	Back                           = 4,
	EMoveDirection_MAX             = 5
};


// Enum FSD.EFSDSteelSeriesEffect
enum class EFSDSteelSeriesEffect : uint8_t
{
	HealthDamage                   = 0,
	ShieldDamage                   = 1,
	Flare                          = 2,
	MissionSuccess                 = 3,
	None                           = 4,
	EFSDSteelSeriesEffect_MAX      = 5
};


// Enum FSD.ETemperatureIntensity
enum class ETemperatureIntensity : uint8_t
{
	Cold3                          = 0,
	Cold2                          = 1,
	Cold1                          = 2,
	Heat1                          = 3,
	Heat2                          = 4,
	Heat3                          = 5,
	ETemperatureIntensity_MAX      = 6
};


// Enum FSD.ETreasureType
enum class ETreasureType : uint8_t
{
	WeaponSkin                     = 0,
	VictoryPose                    = 1,
	PickaxePart                    = 2,
	VanityItem                     = 3,
	ETreasureType_MAX              = 4
};


// Enum FSD.EItemUpgradeStatus
enum class EItemUpgradeStatus : uint8_t
{
	Locked                         = 0,
	AvailableCannotAfford          = 1,
	AvailableCanAfford             = 2,
	Owned                          = 3,
	Equipped                       = 4,
	EItemUpgradeStatus_MAX         = 5
};


// Enum FSD.EGeneratorIconType
enum class EGeneratorIconType : uint8_t
{
	Vanity                         = 0,
	PickaxePart                    = 1,
	EGeneratorIconType_MAX         = 2
};


// Enum FSD.EHeadVanityType
enum class EHeadVanityType : uint8_t
{
	HairOnly                       = 0,
	HeadGearOnly                   = 1,
	HeadGearOnly_UseArmorMaterial  = 2,
	HairAndHeadGear                = 3,
	HairAndHeadGear_UseArmorMaterial = 4,
	EHeadVanityType_MAX            = 5
};


// Enum FSD.EArmorSetLegs
enum class EArmorSetLegs : uint8_t
{
	Invalid                        = 0,
	LeftUpperLeg                   = 1,
	LeftLowerLeg                   = 2,
	LeftFoot                       = 3,
	LeftToe                        = 4,
	RightUpperLeg                  = 5,
	RightLowerLeg                  = 6,
	RightFoot                      = 7,
	RightToe                       = 8,
	EArmorSetLegs_MAX              = 9
};


// Enum FSD.EArmorSetTorso
enum class EArmorSetTorso : uint8_t
{
	Invalid                        = 0,
	UpperTorso                     = 1,
	MiddleTorso                    = 2,
	LowerTorso                     = 3,
	UpperBack                      = 4,
	MiddleBack                     = 5,
	LowerBack                      = 6,
	LeftHip                        = 7,
	RightHip                       = 8,
	FrontHip                       = 9,
	LeftUpperLeg                   = 10,
	LeftLowerLeg                   = 11,
	LeftFoot                       = 12,
	LeftToe                        = 13,
	RightUpperLeg                  = 14,
	RightLowerLeg                  = 15,
	RightFoot                      = 16,
	RightToe                       = 17,
	EArmorSetTorso_MAX             = 18
};


// Enum FSD.EArmorSetArms
enum class EArmorSetArms : uint8_t
{
	Invalid                        = 0,
	LeftShoulder                   = 1,
	RightShoulder                  = 2,
	LeftUpperArm                   = 3,
	LeftLowerArm1                  = 4,
	LeftLowerArm2                  = 5,
	LeftHand                       = 6,
	LeftHandAttach                 = 7,
	RightUpperArm                  = 8,
	RightLowerArm1                 = 9,
	RightLowerArm2                 = 10,
	RightHand                      = 11,
	RightHandAttach                = 12,
	EArmorSetArms_MAX              = 13
};


// Enum FSD.EVanityAquisitionType
enum class EVanityAquisitionType : uint8_t
{
	UnlockedFromStart              = 0,
	Purchased                      = 1,
	Schematic                      = 2,
	Treasure                       = 3,
	EVanityAquisitionType_MAX      = 4
};


// Enum FSD.EWoodLouseState
enum class EWoodLouseState : uint8_t
{
	Unfolded                       = 0,
	Folded                         = 1,
	Size                           = 2,
	EWoodLouseState_MAX            = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FSD.MissionShouts
// 0x0038
struct FMissionShouts
{
	class UDialogDataAsset*                            AfterDropPodExit;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnExitPodDescending;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnExitPodArrived;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnCompletion;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnDeepDiveExitPodDescending;                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnDeepDiveObjectiveCompletion;                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnDeepDiveAllReturnObjectivesCompleted;                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CreditsReward
// 0x0020
struct FCreditsReward
{
	struct FText                                       Description;                                              // 0x0000(0x0028) (Edit, BlueprintVisible)
	int                                                amount;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ObjectiveMissionIcon
// 0x0018
struct FObjectiveMissionIcon
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.HeroInfo
// 0x0080
struct FHeroInfo
{
	class FString                                      HeroAnalyticsID;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       HeroName;                                                 // 0x0010(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  HeroIcon;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SmallHeroIcon;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HeroFullSizeImage;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HeroColor;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       HeroShortDescription;                                     // 0x0050(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       HeroLongDescription;                                      // 0x0068(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSD.ScaledEffect
// 0x0010
struct FScaledEffect
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.AttachMeshesAfflictionItem
// 0x0018
struct FAttachMeshesAfflictionItem
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RandRange
// 0x0008
struct FRandRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FrozenAfflictionItem
// 0x0018
struct FFrozenAfflictionItem
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRandRange                                  MeshScale;                                                // 0x0008(0x0008) (Edit)
	EFrozenBitsSize                                    FrozenBitsSize;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ChanceToSpawn;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.QueuedMontage
// 0x0010
struct FQueuedMontage
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ForceUpdate;                                              // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.EnemyGroupDescriptorItem
// 0x0008
struct FEnemyGroupDescriptorItem
{
	class UEnemyDescriptor*                            EnemyDescriptor;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.IRandRange
// 0x0008
struct FIRandRange
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RandIntervalItem
// 0x000C
struct FRandIntervalItem
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FIRandRange                                 Range;                                                    // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSD.RandInterval
// 0x0010
struct FRandInterval
{
	TArray<struct FRandIntervalItem>                   Intervals;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.ItemLoadoutAnimations
// 0x0018
struct FItemLoadoutAnimations
{
	class UAnimMontage*                                Loadout;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequence*>                       Loadout_IdleBreaks;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.ItemAnimationItem
// 0x0018
struct FItemAnimationItem
{
	class UAnimMontage*                                FP_CharacterMontage;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TP_CharacterMontage;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ItemMontage;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RecoilSettings
// 0x0028
struct FRecoilSettings
{
	struct FRandRange                                  RecoilRoll;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRandRange                                  RecoilPitch;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRandRange                                  RecoilYaw;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               CanRecoilDown;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              SpringStiffness;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CriticalDampening;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DestructableBodypartItem
// 0x0018
struct FDestructableBodypartItem
{
	unsigned char                                      MaterialIndex;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               ArmorBones;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.ArmorHealthSubItem
// 0x0028
struct FArmorHealthSubItem
{
	float                                              Health;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FName>                               AdditionalBones;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FName                                       OptionalFXSocket;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ArmorHealthItem
// 0x0018
struct FArmorHealthItem
{
	unsigned char                                      MaterialIndex;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HealthIsBreakPercentage;                                  // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FArmorHealthSubItem>                 ArmorBones;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.CoolDownProgressStyle
// 0x0040
struct FCoolDownProgressStyle
{
	class UTexture2D*                                  Icon;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconTint;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0018(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UClass*                                      WidgetOverride;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   AudioCoolDownFinished;                                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.AttackerInfo
// 0x0010
struct FAttackerInfo
{
	TWeakObjectPtr<class AActor>                       Attacker;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PositionIndex;                                            // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AttackerRadius;                                           // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.AutoMinerDamageItem
// 0x0038
struct FAutoMinerDamageItem
{
	TWeakObjectPtr<class UPrimitiveComponent>          Target;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // 0x0008(0x000C) (Transient)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0014(0x000C) (Transient)
	class UFSDPhysicalMaterial*                        Material;                                                 // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      BoneIndex;                                                // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.HeatSource
// 0x0008
struct FHeatSource
{
	float                                              Temperature;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Intensity;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.BiomeDebrisInfluencerVariant
// 0x0010
struct FBiomeDebrisInfluencerVariant
{
	class UCaveInfluencer*                             Influencer;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomWeight;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.BiomeNoiseItem
// 0x0038
struct FBiomeNoiseItem
{
	class UFloodFillSettings*                          CeilingNoise;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDetailNoise*                                CeilingDetailNoise;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFloodFillSettings*                          WallNoise;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDetailNoise*                                WallDetailNoise;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFloodFillSettings*                          FloorNoise;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDetailNoise*                                FloorDetailNoise;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.RandFloatIntervalItem
// 0x000C
struct FRandFloatIntervalItem
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRandRange                                  Range;                                                    // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSD.RandFloatInterval
// 0x0010
struct FRandFloatInterval
{
	TArray<struct FRandFloatIntervalItem>              Intervals;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.ResourceSpawner
// 0x0018
struct FResourceSpawner
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRandFloatInterval                          AmountToSpawn;                                            // 0x0008(0x0010) (Edit)
};

// ScriptStruct FSD.BiomeEnemyEntry
// 0x0010
struct FBiomeEnemyEntry
{
	class UEnemyDescriptor*                            enemy;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsDistruptive;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.BoscoLightSetting
// 0x000C
struct FBoscoLightSetting
{
	struct FColor                                      Color;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.LaserPointerTarget
// 0x00B0
struct FLaserPointerTarget
{
	struct FHitResult                                  HitInfo;                                                  // 0x0000(0x0088) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ExtraTarget;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.RequiredMissionItem
// 0x0018
struct FRequiredMissionItem
{
	class UMissionTemplate*                            MissionTemplate;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionComplexity*                          Complexity;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMissionDuration*                            Duration;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.VeinResource
// 0x0028
struct FVeinResource
{
	class UVeinResourceCreator*                        ResourceCreator;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              VeinLengthToGenerate;                                     // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct FSD.CarvedResource
// 0x0010
struct FCarvedResource
{
	class UCarvedResourceCreator*                      ResourceCreator;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                amount;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Overflow;                                                 // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.GemResourceAmount
// 0x0010
struct FGemResourceAmount
{
	class UGemResourceCreator*                         GemCreator;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                amount;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.CollectableSpawnableItem
// 0x0010
struct FCollectableSpawnableItem
{
	class UCollectableResourceData*                    Resource;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                amount;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.RoomNodeBase
// 0x0001
struct FRoomNodeBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.RoomEntrance
// 0x0020
struct FRoomEntrance
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsBLocked;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ECaveEntranceType                                  EntranceType;                                             // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                PathObstacleID;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FSD.RoomLinePoint
// 0x0030
struct FRoomLinePoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HRange;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VRange;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CielingNoiseRange;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WallNoiseRange;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorNoiseRange;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Cielingheight;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightScale;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorDepth;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorAngle;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RoomLine
// 0x0040
struct FRoomLine
{
	class UFloodFillSettings*                          WallNoiseOverride;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UFloodFillSettings*                          CeilingNoiseOverride;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UFloodFillSettings*                          FloorNoiseOverride;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               UseDetailNoise;                                           // 0x0018(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FRoomLinePoint>                      Points;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FVector>                             RightVectors;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.WeightedLinePoint
// 0x001C
struct FWeightedLinePoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseRange;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkewFactor;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FillAmount;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.Pillar
// 0x0020
struct FPillar
{
	class UFloodFillSettings*                          NoiseOverride;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FWeightedLinePoint>                  Points;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              NoiseScale;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EndcapScale;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FSD.Rotator_NoQuantize
// 0x0000 (0x000C - 0x000C)
struct FRotator_NoQuantize : public FRotator
{

};

// ScriptStruct FSD.RoomBox
// 0x0030
struct FRoomBox
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator_NoQuantize                         Rotation;                                                 // 0x000C(0x000C) (Edit, EditConst)
	struct FVector                                     Extends;                                                  // 0x0018(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              NoiseRange;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UFloodFillSettings*                          Noise;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FSD.ResourceLocation
// 0x0020
struct FResourceLocation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UResourceData*                               Resource;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              BaseAmount;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.RoomItem
// 0x0020
struct FRoomItem
{
	class UClass*                                      Spawnable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator_NoQuantize                         Rotation;                                                 // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct FSD.TriggerItem
// 0x0050
struct FTriggerItem
{
	class UClass*                                      TriggerClass;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, EditConst, IsPlainOldData)
	struct FName                                       Message;                                                  // 0x0040(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.GeneratedRoom
// 0x0088
struct FGeneratedRoom
{
	class UTerrainMaterial*                            Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FRoomLine>                           Lines;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FPillar>                             Pillars;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FRoomBox>                            BoxCarvers;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FRoomBox>                            BoxFillers;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FResourceLocation>                   ResourceLocations;                                        // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FRoomEntrance>                       Entrances;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FRoomItem>                           RoomItems;                                                // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FTriggerItem>                        TriggerItems;                                             // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.RoomGeneratorItem
// 0x0018
struct FRoomGeneratorItem
{
	class URoomGeneratorBase*                          RoomGenerator;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.RoomNode
// 0x00DF (0x00E0 - 0x0001)
struct FRoomNode : public FRoomNodeBase
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	ERoomType                                          RoomType;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                CarvePass;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<int>                                        EntranceIDs;                                              // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	TArray<int>                                        ExitIDs;                                                  // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	TArray<struct FRoomEntrance>                       RoomEntrances;                                            // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	bool                                               CanHaveEnemies;                                           // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<struct FGeneratedRoom>                      Rooms;                                                    // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	float                                              ResourceMultiplier;                                       // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WeightedResourceAmount;                                   // 0x006C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FRoomGeneratorItem>                  RoomGenerators;                                           // 0x0070(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x60];                                      // 0x0080(0x0060) MISSED OFFSET
};

// ScriptStruct FSD.TunnelPath
// 0x0010
struct FTunnelPath
{
	TArray<struct FVector>                             Path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.TunnelNode
// 0x00BF (0x00C0 - 0x0001)
struct FTunnelNode : public FRoomNodeBase
{
	int                                                EntranceRoomID;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ExitRoomID;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRoomEntrance                               Entrance;                                                 // 0x0008(0x0020) (Edit, BlueprintVisible, EditConst)
	struct FRoomEntrance                               Exit;                                                     // 0x0028(0x0020) (Edit, BlueprintVisible, EditConst)
	struct FTunnelPath                                 Path;                                                     // 0x0048(0x0010) (Edit, BlueprintVisible, Transient, EditConst)
	int                                                ID;                                                       // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WeightedResourceAmount;                                   // 0x005C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0060(0x0060) MISSED OFFSET
};

// ScriptStruct FSD.CaveInfluence
// 0x0010
struct FCaveInfluence
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.GeneratedInfluenceSet
// 0x0020
struct FGeneratedInfluenceSet
{
	class UObject*                                     CaveInfluencer;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NetworkID;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FCaveInfluence>                      CaveInfluences;                                           // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.GeneratedInfluenceSets
// 0x0018
struct FGeneratedInfluenceSets
{
	TArray<struct FGeneratedInfluenceSet>              InfluenceSets;                                            // 0x0000(0x0010) (ZeroConstructor, Transient)
	bool                                               IsValid;                                                  // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.GeneratedInstantCarver
// 0x0020
struct FGeneratedInstantCarver
{
	class UClass*                                      Carver;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              RotationPitch;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationYaw;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationRoll;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GeneratedInstantCarverLists
// 0x0010
struct FGeneratedInstantCarverLists
{
	TArray<struct FGeneratedInstantCarver>             Carvers;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.MatrixWithExactSync
// 0x0040
struct FMatrixWithExactSync
{
	float                                              Values[0x10];                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.LevelGenerationCarver
// 0x0070
struct FLevelGenerationCarver
{
	struct FMatrixWithExactSync                        Transform;                                                // 0x0000(0x0040)
	class USTLMeshCarver*                              MeshCarver;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ConvexCarver;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMeshCarver*                           StaticMeshCarver;                                         // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ConvexExpensiveNoise;                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	ECarveOptionsCellSize                              CarveCellSize;                                            // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	class UTerrainMaterial*                            TerrainMaterial;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	ECarveFilterType                                   Filter;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.LevelGenerationCarverLists
// 0x0010
struct FLevelGenerationCarverLists
{
	TArray<struct FLevelGenerationCarver>              Carvers;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.GeneratedInstantCarvers
// 0x0028
struct FGeneratedInstantCarvers
{
	TArray<struct FGeneratedInstantCarverLists>        Carvers;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FLevelGenerationCarverLists>         levelCarvers;                                             // 0x0010(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.GeneratedDebris
// 0x0058
struct FGeneratedDebris
{
	TMap<class UDebrisBase*, class UObject*>           Debris;                                                   // 0x0000(0x0050) (ZeroConstructor, Transient)
	bool                                               IsValid;                                                  // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.PathObstacle
// 0x0010
struct FPathObstacle
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CaveInfluenceSet
// 0x0010
struct FCaveInfluenceSet
{
	TArray<struct FCaveInfluence>                      CaveInfluences;                                           // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.InfluenceMap
// 0x0050
struct FInfluenceMap
{
	TMap<class UObject*, struct FCaveInfluenceSet>     CaveInfluences;                                           // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.DebrisCapsule
// 0x0020
struct FDebrisCapsule
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Start;                                                    // 0x0004(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x0010(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Radius;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FSD.LerpingPercent
// 0x0008
struct FLerpingPercent
{
	unsigned char                                      TargetPercent;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.CountDownFloat
// 0x000C
struct FCountDownFloat
{
	float                                              CountDownDuration;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.ReplicatedCharacterData
// 0x0018
struct FReplicatedCharacterData
{
	TWeakObjectPtr<class AActor>                       Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TemperatureEffect;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanTakeDamage;                                           // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x000D(0x000B) MISSED OFFSET
};

// ScriptStruct FSD.ProjectileImpact
// 0x0030
struct FProjectileImpact
{
	struct FVector_NetQuantize                         Location;                                                 // 0x0000(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x000C(0x000C)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ClaimableRewardEntry
// 0x0058
struct FClaimableRewardEntry
{
	struct FText                                       Title;                                                    // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FText                                       Text;                                                     // 0x0018(0x0028) (Edit, BlueprintVisible)
	class UObject*                                     Image;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UReward*>                             Rewards;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	struct FGuid                                       SavegameID;                                               // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FSD.ClaimableRewardView
// 0x0070
struct FClaimableRewardView
{
	class UDialogDataAsset*                            MissionControlSpeak;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UClass>                       BackgroundWidgetClass;                                    // 0x0008(0x0028) (Edit, BlueprintVisible)
	TSoftObjectPtr<class USoundCue>                    FanfareAudio;                                             // 0x0030(0x0028) (Edit, BlueprintVisible)
	float                                              MoveInRewardsDelay;                                       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FClaimableRewardEntry>               RewardDisplays;                                           // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.CharacterShouts
// 0x00B0
struct FCharacterShouts
{
	class UDialogDataAsset*                            Attention;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Follow;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            standingDown;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Downed;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            RequestRevive;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Revived;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Resupply;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            FriendlyFire;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            KillCry;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Dead;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Cheating;                                                 // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            ResourceFull;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            ResourceFullNoDonkey;                                     // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            CallDonkey;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Depositing;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepositingNoDonkey;                                       // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OutOfAmmo;                                                // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Reloading;                                                // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            CharacterSelected;                                        // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            UpgradeBought;                                            // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            WaitingInDropPod;                                         // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Carrying;                                                 // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ActiveOutline
// 0x000C
struct FActiveOutline
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FSD.MissionShoutQueueItem
// 0x0010
struct FMissionShoutQueueItem
{
	class UDialogDataAsset*                            Shout;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.MixerAnnouncement
// 0x0028
struct FFSD_FMixerAnnouncement
{
	class FString                                      UserName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Text;                                                     // 0x0010(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct FSD.CommunityReward
// 0x0010
struct FCommunityReward
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.CommunityGoalStateData
// 0x0010
struct FCommunityGoalStateData
{
	bool                                               isGoal;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isRecruitment;                                            // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              TimeLeftSeconds;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentGoalPeriodID;                                      // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.CommunityFactionData
// 0x0038
struct FCommunityFactionData
{
	bool                                               IsValid;                                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class FString>                              Goals;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<float>                                      Values;                                                   // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<int>                                        Members;                                                  // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.CommunityRewardNotification
// 0x0040
struct FCommunityRewardNotification
{
	struct FText                                       Text;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      ID;                                                       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.InputTranslationEntry
// 0x0010
struct FInputTranslationEntry
{
	EInputInteraction                                  Interaction;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       InputName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Axis;                                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.InputTranslation
// 0x0024
struct FInputTranslation
{
	struct FInputTranslationEntry                      Default;                                                  // 0x0000(0x0010) (Edit)
	bool                                               bControllerOverride;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FInputTranslationEntry                      ControllerOverride;                                       // 0x0014(0x0010) (Edit)
};

// ScriptStruct FSD.InputTranslationTable
// 0x0050
struct FInputTranslationTable
{
	TMap<struct FName, struct FInputTranslation>       Entries;                                                  // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.ActionIconMapping
// 0x0028
struct FActionIconMapping
{
	struct FKey                                        ActionKey;                                                // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DoNotTint;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.CraftingCost
// 0x0010
struct FCraftingCost
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DecalData
// 0x0018
struct FDecalData
{
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalSize;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalDepth;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeDuration;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FSD.DamageMangerItem
// 0x0018
struct FDamageMangerItem
{
	class UDamageComponent*                            DamageComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.CellNoise
// 0x002C
struct FCellNoise
{
	int                                                Seed;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CellSize;                                                 // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumValues;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinCellValue;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCellValue;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.DebrisCellNoiseParameters
// 0x0010
struct FDebrisCellNoiseParameters
{
	class UDebrisCellNoise*                            Noise;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinCellValue;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCellValue;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.UDebrisCarveMesh
// 0x0010
struct FUDebrisCarveMesh
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probablity;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DebrisInfluence
// 0x0010
struct FDebrisInfluence
{
	class UObject*                                     CaveInfluencer;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DebrisItemActorItem
// 0x0010
struct FDebrisItemActorItem
{
	class UClass*                                      Actor;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DebrisStaticMesh
// 0x0030
struct FDebrisStaticMesh
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EDebrisMeshCollisionProfile                        CollisionProfile;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Probablity;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   DestroyedSound;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DestroyedParticles;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Fragile;                                                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDebrisMeshShadows                                 CastShadows;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Durable;                                                  // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnWhenCarving;                                         // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnlySpawnWhenCarving;                                     // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.UDebrisStaticCarveMesh
// 0x0010
struct FUDebrisStaticCarveMesh
{
	class UStaticMeshCarver*                           Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probablity;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DebrisWhenCarving
// 0x0030
struct FDebrisWhenCarving
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class UDebrisInstances*                            Debris;                                                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct FSD.GrenadeExplodeOperationData
// 0x0038
struct FGrenadeExplodeOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalOffset;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalSqueeze;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Noise;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BurnThickness;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseBulletBurntMaterial;                                   // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DissolvePlatforms;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	uint32_t                                           OverrideBurntMaterialHandle;                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CarveWithColliderOperationData
// 0x0068
struct FCarveWithColliderOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTerrainMaterial*                            Material;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ECarveFilterType                                   CarveFilter;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FMatrixWithExactSync                        Transform;                                                // 0x001C(0x0040) (Edit)
	float                                              ExpensiveNoise;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EPreciousMaterialOptions                           Precious;                                                 // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECarveOptionsCellSize                              CarveCellSize;                                            // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
};

// ScriptStruct FSD.CarveWithSTLMeshOperationData
// 0x0068
struct FCarveWithSTLMeshOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class USTLMeshCarver*                              STLMeshCarver;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMeshCarver*                           StaticMeshCarver;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTerrainMaterial*                            Material;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ECarveFilterType                                   CarveFilter;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPreciousMaterialOptions                           Precious;                                                 // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	struct FMatrixWithExactSync                        Transform;                                                // 0x0024(0x0040) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PickaxeDigOperationData
// 0x0028
struct FPickaxeDigOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dir;                                                      // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DigSize;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Miner;                                                    // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RemoveFloatingIslandOperationData
// 0x0004
struct FRemoveFloatingIslandOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DrillOperationData
// 0x002C
struct FDrillOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dir;                                                      // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CarveSize;                                                // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarveNoise;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MeltOperationData
// 0x0020
struct FMeltOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Points;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              Radius;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.TerrainLateJoinData
// 0x0098
struct FTerrainLateJoinData
{
	TArray<struct FGrenadeExplodeOperationData>        explosions;                                               // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FCarveWithColliderOperationData>     colliderCarves;                                           // 0x0010(0x0010) (ZeroConstructor, Transient)
	TArray<struct FCarveWithSTLMeshOperationData>      meshCarves;                                               // 0x0020(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPickaxeDigOperationData>            pickAxe;                                                  // 0x0030(0x0010) (ZeroConstructor, Transient)
	TArray<struct FRemoveFloatingIslandOperationData>  RemoveFloating;                                           // 0x0040(0x0010) (ZeroConstructor, Transient)
	TArray<struct FDrillOperationData>                 drills;                                                   // 0x0050(0x0010) (ZeroConstructor, Transient)
	TArray<struct FMeltOperationData>                  melts;                                                    // 0x0060(0x0010) (ZeroConstructor, Transient)
	TArray<int>                                        DebrisInstanceComponentPairs;                             // 0x0070(0x0010) (ZeroConstructor, Transient)
	TArray<uint32_t>                                   visibleChunks;                                            // 0x0080(0x0010) (ZeroConstructor, Transient)
	int                                                OperationCount;                                           // 0x0090(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EncodedChunkId
// 0x0004
struct FEncodedChunkId
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CSGRaycastHitInfo
// 0x001C
struct FCSGRaycastHitInfo
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Material;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DeepDiveTemplateItem
// 0x0018
struct FDeepDiveTemplateItem
{
	class UMissionTemplate*                            mission;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMissionDuration*>                    AllowedDurations;                                         // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.DeepDiveLoaderSequence
// 0x0028
struct FDeepDiveLoaderSequence
{
	TSoftObjectPtr<class ULevelSequence>               LevelSequence;                                            // 0x0000(0x0028) (Edit)
};

// ScriptStruct FSD.DeepDiveBank
// 0x0010
struct FDeepDiveBank
{
	class UDeepDive*                                   NormalDeepDive;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDeepDive*                                   HardDeepDive;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.DeepDiveRewardItem
// 0x0010
struct FDeepDiveRewardItem
{
	class USchematic*                                  Schematic;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Stage;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               WasAlreadyGiven;                                          // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.DeepRepPath
// 0x00D0
struct FDeepRepPath
{
	struct FVector                                     PathBase;                                                 // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      PathLength;                                               // 0x000C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDeepMovementState                                 State;                                                    // 0x000D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      StateBits;                                                // 0x000E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	struct FVector                                     PathOffsets[0x10];                                        // 0x0010(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.FakeMoverState
// 0x0060
struct FFakeMoverState
{
	float                                              TickRate;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TickTime;                                                 // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PrevPos;                                                  // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     NextPos;                                                  // 0x0014(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PrevSurfaceNormal;                                        // 0x0020(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     NextSurfaceNormal;                                        // 0x002C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatedTime;                                          // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0048(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               NearSurface;                                              // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              SignedDistToSurface;                                      // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DialogStruct
// 0x0050
struct FDialogStruct
{
	bool                                               Enabled;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	TSoftObjectPtr<class USoundBase>                   Audio;                                                    // 0x0020(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	EDialogRestriction                                 Restriction;                                              // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.VeteranComposition
// 0x0020
struct FVeteranComposition
{
	struct FRandFloatInterval                          Normal;                                                   // 0x0000(0x0010) (Edit)
	struct FRandFloatInterval                          Large;                                                    // 0x0010(0x0010) (Edit)
};

// ScriptStruct FSD.DiscordServerInviteData
// 0x0078
struct FDiscordServerInviteData
{
	class FString                                      code;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      serverID;                                                 // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      serverDescription;                                        // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      serverName;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                presenceCount;                                            // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                memberCount;                                              // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      iconKey;                                                  // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      bannerKey;                                                // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      splashKey;                                                // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.DiscordRewardNotification
// 0x0040
struct FDiscordRewardNotification
{
	struct FText                                       Text;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      ID;                                                       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.DiscordEoMData
// 0x0020
struct FDiscordEoMData
{
	class FString                                      nick;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      userId;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.DeathIntroSettings
// 0x0024
struct FDeathIntroSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              FirstPersonDuration;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeToBlackDelay;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeToBlackDuration;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeFromBlackDelay;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeFromBlackDuration;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZoomOutDuration;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZoomOutStartDistance;                                     // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0020(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.BarleySpawnItem
// 0x0010
struct FBarleySpawnItem
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EncounterRareCritterItem
// 0x0010
struct FEncounterRareCritterItem
{
	class URareCritterDescriptor*                      Critter;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EncounterSpecialItem
// 0x0010
struct FEncounterSpecialItem
{
	class UEnemyDescriptor*                            enemy;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BaseChance;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSpawnInDeepDive;                                       // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.ManagedEncounterItem
// 0x0010
struct FManagedEncounterItem
{
	class UEnemyDescriptor*                            Descriptor;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                amount;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PrePlacedEncounterItem
// 0x0050
struct FPrePlacedEncounterItem
{
	class UEnemyDescriptor*                            Descriptor;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Location;                                                 // 0x0010(0x0030) (Transient, IsPlainOldData)
	class AEncounterActor*                             EncounterActor;                                           // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.EncounterManagerItem
// 0x0030
struct FEncounterManagerItem
{
	TArray<struct FManagedEncounterItem>               ManagedEcnounterItems;                                    // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPrePlacedEncounterItem>             PrePlacedEncounterItems;                                  // 0x0010(0x0010) (ZeroConstructor, Transient)
	int                                                ID;                                                       // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsRoom;                                                   // 0x0024(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0025(0x000B) MISSED OFFSET
};

// ScriptStruct FSD.TestAnimInstanceProxy
// 0x0020 (0x06B0 - 0x0690)
struct FTestAnimInstanceProxy : public FAnimInstanceProxy
{
	bool                                               IsAlive;                                                  // 0x0690(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0691(0x0003) MISSED OFFSET
	float                                              RandomStartPosition;                                      // 0x0694(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Speed;                                                    // 0x0698(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x069C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x069D(0x0003) MISSED OFFSET
	float                                              WalkCyclePlayRate;                                        // 0x06A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x06A4(0x000C) MISSED OFFSET
};

// ScriptStruct FSD.EnemyDebris
// 0x0018
struct FEnemyDebris
{
	float                                              InfluenceRange;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UDebrisBase*>                         Debris;                                                   // 0x0008(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct FSD.SpawnRarityItem
// 0x0008
struct FSpawnRarityItem
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Rarity;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.EnemyAttackDescription
// 0x0020
struct FEnemyAttackDescription
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	EEnemyAttackType                                   Range;                                                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDamageType                                        DamageType;                                               // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct FSD.EnemyMinersManualStats
// 0x000C
struct FEnemyMinersManualStats
{
	int                                                Health;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Damage;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Speed;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.SpawnRarityModifierItem
// 0x0008
struct FSpawnRarityModifierItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.SpawnQueueItem
// 0x0080
struct FSpawnQueueItem
{
	TSoftObjectPtr<class UClass>                       enemyClass;                                               // 0x0000(0x0028) (Transient)
	class UEnemyDescriptor*                            enemy;                                                    // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // 0x0030(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct FSD.SpawnEffectItem
// 0x0030 (0x003C - 0x000C)
struct FSpawnEffectItem : public FFastArraySerializerItem
{
	ECreatureSize                                      CreatureSize;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector_NetQuantize                         Location;                                                 // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0028(0x0014) MISSED OFFSET
};

// ScriptStruct FSD.SpawnEffectsArray
// 0x0018 (0x00C8 - 0x00B0)
struct FSpawnEffectsArray : public FFastArraySerializer
{
	TArray<struct FSpawnEffectItem>                    Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.WaveEntry
// 0x0038
struct FWaveEntry
{
	class UClass*                                      WaveControllerLoaded;                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       WaveController;                                           // 0x0010(0x0028) (Edit)
};

// ScriptStruct FSD.FakeMoverPropulsion
// 0x0014
struct FFakeMoverPropulsion
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirAcceleration;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirDeceleration;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundAcceleration;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundDeceleration;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FakeMoverTarget
// 0x001C
struct FFakeMoverTarget
{
	float                                              InfluenceDistance;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetDistance;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GetCloserAirAcceleration;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GetAwayAirAcceleration;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GetCloserGroundAcceleration;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GetAwayGroundAcceleration;                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FakeMoveState
// 0x0024
struct FFakeMoveState
{
	struct FVector                                     Pos1;                                                     // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Pos2;                                                     // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Vel;                                                      // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.FlareMeta
// 0x0024
struct FFlareMeta
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Inhibit;                                                  // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              InvRadius;                                                // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Pos;                                                      // 0x0014(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Moving;                                                   // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.FloatPerkRank
// 0x0008
struct FFloatPerkRank
{
	int                                                Tier;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FloatPerkRankValue
// 0x0008
struct FFloatPerkRankValue
{
	int                                                RankIndex;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FloatPerkEffect
// 0x0030
struct FFloatPerkEffect
{
	class UFloatPerkActivation*                        PerkActivation;                                           // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       FormattedDescription;                                     // 0x0008(0x0028) (Edit)
	TArray<struct FFloatPerkRankValue>                 RankValues;                                               // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.LayeredNoise
// 0x0010
struct FLayeredNoise
{
	class UFloodFillSettings*                          Noise;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.FormationDataItem
// 0x0010
struct FFormationDataItem
{
	struct FVector                                     Direction;                                                // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              distance;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FSD.BlueprintFriend
// 0x0038
struct FBlueprintFriend
{
	class FString                                      DisplayName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      RealName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EFriendOnlineStatusEnum                            OnlineStatus;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class FString                                      UniqueNetId;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.PendingRewardsStats
// 0x00B0
struct FPendingRewardsStats
{
	TMap<class UResourceData*, float>                  AllResources;                                             // 0x0000(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TMap<class UResourceData*, float>                  CollectedResources;                                       // 0x0050(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               PrimaryObjectiveCompleted;                                // 0x00A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               SecondaryObjectiveCompleted;                              // 0x00A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	float                                              TimePlayed;                                               // 0x00A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                EnemiesKilled;                                            // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.XPReward
// 0x0020
struct FXPReward
{
	struct FText                                       Description;                                              // 0x0000(0x0028) (Edit, BlueprintVisible)
	int                                                XP;                                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PendingRewards
// 0x0190
struct FPendingRewards
{
	struct FPendingRewardsStats                        StartStats;                                               // 0x0000(0x00B0) (Transient)
	struct FPendingRewardsStats                        EndStats;                                                 // 0x00B0(0x00B0) (Transient)
	TArray<struct FCreditsReward>                      CreditsRewardEntries;                                     // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                CreditsReward;                                            // 0x0170(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	TArray<struct FXPReward>                           XPRewardEntries;                                          // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                XPReward;                                                 // 0x0188(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasData;                                                 // 0x018C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsRecording;                                             // 0x018D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasRewarded;                                             // 0x018E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x018F(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.GameStateSeamlessTravelStorage
// 0x0150
struct FGameStateSeamlessTravelStorage
{
	class UDifficultySetting*                          ChosenDifficulty;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<class UPlayer*, bool>                         PlayerShouldStartInMedbay;                                // 0x0008(0x0050) (ZeroConstructor, Transient)
	TMap<class UResourceData*, float>                  Resources;                                                // 0x0058(0x0050) (ZeroConstructor, Transient)
	float                                              MissionTime;                                              // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TMap<struct FName, float>                          StoredFloatValues;                                        // 0x00B0(0x0050) (ZeroConstructor, Transient)
	TMap<struct FName, int>                            StoredIntValues;                                          // 0x0100(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.BossFight
// 0x0018
struct FBossFight
{
	TWeakObjectPtr<class AActor>                       BossActor;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UEnemyComponent>              EnemyComponent;                                           // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UEnemyHealthComponent>        HealthComponent;                                          // 0x0010(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct FSD.FadeData
// 0x0048
struct FFadeData
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebugOutput;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UClass*                                      WidgetType;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UFSDLevelLoadingPersistentWidget> Widget;                                                   // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              CurrentFade;                                              // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetFade;                                               // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FadeSpeed;                                                // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Delay;                                                    // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFadeWorldOnly;                                           // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCapFramerate;                                            // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bToSpaceRig;                                              // 0x002A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	class UTexture*                                    loadingImage;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      DebugMsg;                                                 // 0x0038(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.SpaceRigNotification
// 0x0040
struct FSpaceRigNotification
{
	struct FText                                       Text;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.FSDServerSearchOptions
// 0x0038
struct FFSDServerSearchOptions
{
	ESteamServerJoinStatus                             JoinStatus;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESteamSearchRegion                                 SearchRegion;                                             // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<class UDifficultySetting*>                  Difficulties;                                             // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               DeepDive;                                                 // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class FString                                      SearchString;                                             // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                MissionSeed;                                              // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GlobalMissionSeed;                                        // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DiscordRichPresenceData
// 0x00B8
struct FDiscordRichPresenceData
{
	class FString                                      State;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      details;                                                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                startTimestamp;                                           // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                endTimestamp;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      largeImageKey;                                            // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      largeImageText;                                           // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      smallImageKey;                                            // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      smallImageText;                                           // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      partyId;                                                  // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                partySize;                                                // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                partyMax;                                                 // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      matchSecret;                                              // 0x0080(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      joinSecret;                                               // 0x0090(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      spectateSecret;                                           // 0x00A0(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               instance;                                                 // 0x00B0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.FSDChatMessage
// 0x0060
struct FFSDChatMessage
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EChatMessageType                                   MsgType;                                                  // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class FString                                      Sender;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EChatSenderType                                    SenderType;                                               // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class FString                                      Msg;                                                      // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FUniqueNetIdRepl                            SenderNetID;                                              // 0x0038(0x0028) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSD.GeneratedMissionGroup
// 0x0010
struct FGeneratedMissionGroup
{
	TArray<class UGeneratedMission*>                   AvailableMissions;                                        // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.FSDTagsAttitude
// 0x0018
struct FFSDTagsAttitude
{
	struct FGameplayTag                                Friendly;                                                 // 0x0000(0x0008) (Edit)
	struct FGameplayTag                                Neutral;                                                  // 0x0008(0x0008) (Edit)
	struct FGameplayTag                                Hostile;                                                  // 0x0010(0x0008) (Edit)
};

// ScriptStruct FSD.FSDTagsRoot
// 0x0018
struct FFSDTagsRoot
{
	struct FFSDTagsAttitude                            Attitude;                                                 // 0x0000(0x0018) (Edit)
};

// ScriptStruct FSD.ReplicatedObjectives
// 0x0018
struct FReplicatedObjectives
{
	bool                                               HasReplicated;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UObjective*>                          Objectives;                                               // 0x0008(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct FSD.GeneratedMissionSeed
// 0x0040
struct FGeneratedMissionSeed
{
	int                                                Seed;                                                     // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                GlobalSeed;                                               // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBiome*                                      Biome;                                                    // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMissionTemplate*                            Template;                                                 // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMissionComplexity*                          ComplexityLimit;                                          // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMissionDuration*                            DurationLimit;                                            // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMissionMutator*                             Mutator;                                                  // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMissionWarning*                             Warning;                                                  // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EMissionStructure                                  MissionStructure;                                         // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.FSDLocalizedChatMessage
// 0x0048
struct FFSDLocalizedChatMessage
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EChatMessageType                                   MsgType;                                                  // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class FString                                      Sender;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Msg;                                                      // 0x0020(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FText>                               Arguments;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.CustomizableKeyBinding
// 0x0028
struct FCustomizableKeyBinding
{
	struct FText                                       Description;                                              // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ActionName;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKeyBindingAxis                                    ActionAxis;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.HUDElementData
// 0x0008
struct FHUDElementData
{
	EHUDVisibilityMode                                 Mode;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Version;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.HUDElements
// 0x0078
struct FHUDElements
{
	struct FHUDElementData                             OnScreenHelp;                                             // 0x0000(0x0008)
	struct FHUDElementData                             EnemyHealth;                                              // 0x0008(0x0008)
	struct FHUDElementData                             RadarDepth;                                               // 0x0010(0x0008)
	struct FHUDElementData                             PlayerHealthShield;                                       // 0x0018(0x0008)
	struct FHUDElementData                             PlayerNameClassIcon;                                      // 0x0020(0x0008)
	struct FHUDElementData                             PlayerItems;                                              // 0x0028(0x0008)
	struct FHUDElementData                             PlayerResources;                                          // 0x0030(0x0008)
	struct FHUDElementData                             WeaponInfo;                                               // 0x0038(0x0008)
	struct FHUDElementData                             Grenades;                                                 // 0x0040(0x0008)
	struct FHUDElementData                             FlashLight;                                               // 0x0048(0x0008)
	struct FHUDElementData                             Flares;                                                   // 0x0050(0x0008)
	struct FHUDElementData                             Crosshair;                                                // 0x0058(0x0008)
	struct FHUDElementData                             Objectives;                                               // 0x0060(0x0008)
	struct FHUDElementData                             TeamDisplay;                                              // 0x0068(0x0008)
	struct FHUDElementData                             SentryGunDisplay;                                         // 0x0070(0x0008)
};

// ScriptStruct FSD.CharacterOptions
// 0x0001
struct FCharacterOptions
{
	bool                                               GrapplingHookAutoSwitch;                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CustomKeyBinding
// 0x0030
struct FCustomKeyBinding
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EKeyBindingAxis                                    ActionAxis;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible)
	int                                                Index;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ControllerSettings
// 0x000C
struct FControllerSettings
{
	float                                              AimInnerDeadZone;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AimSensitivity;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AimOuterAcceleration;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GeneratedDebrisItem
// 0x0010
struct FGeneratedDebrisItem
{
	class UDebrisBase*                                 Debris;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     Influencer;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PlayerProgress
// 0x0008
struct FPlayerProgress
{
	int                                                PlayerRank;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayerStars;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CharacterProgress
// 0x0020
struct FCharacterProgress
{
	class UClass*                                      CharacterClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentXP;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NextLevelXP;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TimesRetired;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EndMissionResult
// 0x0060
struct FEndMissionResult
{
	struct FPlayerProgress                             PreviousPlayerProgress;                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FPlayerProgress                             PlayerProgress;                                           // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FCharacterProgress                          PreviousCharacterProgress;                                // 0x0010(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FCharacterProgress                          CharacterProgress;                                        // 0x0030(0x0020) (BlueprintVisible, BlueprintReadOnly)
	class USchematic*                                  RewardedSchematic;                                        // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bReadyForUse;                                             // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.MissionStatCounter
// 0x0024
struct FMissionStatCounter
{
	struct FGuid                                       PlayerClassID;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MissionStatID;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MissionStatSave
// 0x0018
struct FMissionStatSave
{
	TArray<struct FMissionStatCounter>                 Counters;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bCharacterLevelUpFixed;                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bBoughtVanityItemsFixed;                                  // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bBoughtEquipmentUpgradesFixed;                            // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCampaignsCompletedFixed;                                 // 0x0013(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WeaponUpgradesFixed;                                      // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.MilestoneCounter
// 0x0014
struct FMilestoneCounter
{
	struct FGuid                                       KPIGuid;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MilestoneSave
// 0x0010
struct FMilestoneSave
{
	TArray<struct FMilestoneCounter>                   ClaimedKPIRewards;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.PerkClaimEntry
// 0x0014
struct FPerkClaimEntry
{
	struct FGuid                                       PerkID;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                currentRank;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PerkClaimsSave
// 0x0018
struct FPerkClaimsSave
{
	TArray<struct FPerkClaimEntry>                     PerkEntries;                                              // 0x0000(0x0010) (ZeroConstructor)
	bool                                               HasResetPerks2;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.PerkEquipEntry
// 0x0020
struct FPerkEquipEntry
{
	struct FGuid                                       characterID;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               PerkIDs;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.CharacterPerksSave
// 0x0010
struct FCharacterPerksSave
{
	TArray<struct FPerkEquipEntry>                     CharacterPerks;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.AchievementSaveEntry
// 0x0018
struct FAchievementSaveEntry
{
	struct FGuid                                       AchievementSaveID;                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              HighestSavedProgress;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentProgress;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.AchievementSave
// 0x0020
struct FAchievementSave
{
	TArray<class FString>                              OfflineAchievedAchievements;                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FAchievementSaveEntry>               AchievementEntries;                                       // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.SchematicSave
// 0x0038
struct FSchematicSave
{
	TArray<struct FGuid>                               ForgedSchematics;                                         // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       PendingReward;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               OwnedSchematics;                                          // 0x0020(0x0010) (ZeroConstructor)
	bool                                               bFirstSchematicMessageShown;                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.PromotionRewardsSave
// 0x0050
struct FPromotionRewardsSave
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty FSD.PromotionRewardsSave.ClaimedRewards
};

// ScriptStruct FSD.FSDEventRewardsSave
// 0x0050
struct FFSDEventRewardsSave
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty FSD.FSDEventRewardsSave.EventsSeen
};

// ScriptStruct FSD.GameDLCSave
// 0x0050
struct FGameDLCSave
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty FSD.GameDLCSave.AnnouncedIDs
};

// ScriptStruct FSD.UnLockedMissionParameters
// 0x0020
struct FUnLockedMissionParameters
{
	TArray<struct FGuid>                               UnLockedComplexities;                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               UnLockedDurations;                                        // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.ActiveCampaignItem
// 0x0014
struct FActiveCampaignItem
{
	struct FGuid                                       CampaignID;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                Progress;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.WeeklyCampaignItem
// 0x000C
struct FWeeklyCampaignItem
{
	int                                                LastCompletedWeek;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastStartedWeek;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RewardedProgress;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CampaignSave
// 0x0048
struct FCampaignSave
{
	struct FActiveCampaignItem                         ActiveCampaign;                                           // 0x0000(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FGuid>                               CompletedCampaigns;                                       // 0x0018(0x0010) (ZeroConstructor)
	int                                                ActiveCampaignWeek;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FWeeklyCampaignItem                         WeeklySave;                                               // 0x002C(0x000C)
	struct FWeeklyCampaignItem                         MaxtrixCoreHuntSave;                                      // 0x0038(0x000C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DeepDiveSaveRewardItem
// 0x0014
struct FDeepDiveSaveRewardItem
{
	struct FGuid                                       RewardID;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DeepDiveItem
// 0x0038
struct FDeepDiveItem
{
	int                                                Progress;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BestTime;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FDeepDiveSaveRewardItem>             Rewards;                                                  // 0x0010(0x0010) (ZeroConstructor)
	bool                                               HasEverCompleted;                                         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FGuid>                               RewardsGiven;                                             // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.DeepDiveSave
// 0x0070
struct FDeepDiveSave
{
	struct FDeepDiveItem                               NormalSave;                                               // 0x0000(0x0038)
	struct FDeepDiveItem                               EliteSave;                                                // 0x0038(0x0038)
};

// ScriptStruct FSD.CharacterVanityLoadout
// 0x0090
struct FCharacterVanityLoadout
{
	struct FGuid                                       EquippedHeadItemID;                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedBeardItemID;                                      // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedArmorItemID;                                      // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedArmorMaterialID;                                  // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedBeardColorItemID;                                 // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedSkinColorItemID;                                  // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedEyebrowsItemID;                                   // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedMoustacheItemID;                                  // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedSideburnsItemID;                                  // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CharacterVanitySave
// 0x0110
struct FCharacterVanitySave
{
	TArray<struct FCharacterVanityLoadout>             Loadouts;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               UnLockedVanityItemIDs;                                    // 0x0010(0x0010) (ZeroConstructor)
	struct FGuid                                       EquippedHeadItemID;                                       // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedBeardItemID;                                      // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedArmorItemID;                                      // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedArmorMaterialItemID;                              // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedBeardColorItemID;                                 // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedSkinColorItemID;                                  // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedEyebrowsItemID;                                   // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedMoustacheItemID;                                  // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedSideburnsItemID;                                  // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<class UVanityItem*>                         UnLockedVanityItems;                                      // 0x00B0(0x0010) (ZeroConstructor)
	TMap<EVanitySlot, struct FGuid>                    NewVanityItems;                                           // 0x00C0(0x0050) (ZeroConstructor)
};

// ScriptStruct FSD.ItemLoadout
// 0x0084
struct FItemLoadout
{
	struct FGuid                                       PrimaryWeapon;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SecondaryWeapon;                                          // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       TraversalTool;                                            // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ClassTool;                                                // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Armor;                                                    // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Flare;                                                    // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MiningTool;                                               // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Grenade;                                                  // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                IconIndex;                                                // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.VictoryPoseSave
// 0x0030
struct FVictoryPoseSave
{
	struct FGuid                                       EquippedVictoryPose;                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               UnlockedVictoryPoses;                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               EquippedVictoryPoses;                                     // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.CharacterSave
// 0x0208
struct FCharacterSave
{
	struct FGuid                                       SavegameID;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                XP;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               HasCompletedRetirementCampaign;                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                TimesRetired;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RetiredCharacterLevels;                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               HasSeenRetirementRewardScreen;                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UClass*                                      CharacterClass;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FCharacterVanitySave                        Vanity;                                                   // 0x0030(0x0110)
	int                                                SelectedLoadout;                                          // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FItemLoadout                                Loadout;                                                  // 0x0144(0x0084)
	TArray<struct FItemLoadout>                        Loadouts;                                                 // 0x01C8(0x0010) (ZeroConstructor)
	struct FVictoryPoseSave                            VictoryPose;                                              // 0x01D8(0x0030)
};

// ScriptStruct FSD.ForgingSave
// 0x0008
struct FForgingSave
{
	int                                                XP;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AwardsGiven;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DrinkSave
// 0x0058
struct FDrinkSave
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty FSD.DrinkSave.UnlockedDrinks
	bool                                               HasUnlockedSpecial;                                       // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.ItemUpgradeSelection
// 0x0078
struct FItemUpgradeSelection
{
	struct FGuid                                       WeaponID;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               EquippedUpgrades;                                         // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               PermanentUpgrades;                                        // 0x0020(0x0010) (ZeroConstructor)
	struct FGuid                                       EquippedOverclock;                                        // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               EquippedSkins;                                            // 0x0040(0x0010) (ZeroConstructor)
	bool                                               OverclockingUnlocked;                                     // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FGuid                                       EquippedSkinColor;                                        // 0x0054(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedSkinMesh;                                         // 0x0064(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.UpgradeLoadout
// 0x0050
struct FUpgradeLoadout
{
	TMap<struct FGuid, struct FItemUpgradeSelection>   Loadout;                                                  // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct FSD.ItemNotificationInfo
// 0x0004
struct FItemNotificationInfo
{
	int                                                NotificationFlags;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.SkinList
// 0x0050
struct FSkinList
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty FSD.SkinList.Skins
};

// ScriptStruct FSD.EventRewardSaveItem
// 0x0020
struct FEventRewardSaveItem
{
	struct FGuid                                       CategoryID;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               ClassOptions;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.EventRewardSave
// 0x0050
struct FEventRewardSave
{
	TMap<struct FGuid, struct FEventRewardSaveItem>    PendingRewards;                                           // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct FSD.UINotificationItem
// 0x0010
struct FUINotificationItem
{
	TArray<struct FGuid>                               NotificationIDs;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.ItemUINotifications
// 0x0068
struct FItemUINotifications
{
	TArray<struct FUINotificationItem>                 UINotifications;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty FSD.ItemUINotifications.UINotificationSet
	class UFSDSaveGame*                                SaveGame;                                                 // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.ResourcesSave
// 0x00A0
struct FResourcesSave
{
	TMap<struct FGuid, float>                          OwnedResources;                                           // 0x0000(0x0050) (ZeroConstructor)
	TMap<class UResourceData*, float>                  Resources;                                                // 0x0050(0x0050) (ZeroConstructor)
};

// ScriptStruct FSD.WatchedTutorial
// 0x0018
struct FWatchedTutorial
{
	class FString                                      TutorialName;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                count;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ConsoleOptionsInSaveGame
// 0x00D8
struct FConsoleOptionsInSaveGame
{
	struct FControllerSettings                         ControllerSettings;                                       // 0x0000(0x000C)
	struct FHUDElements                                HUDElements;                                              // 0x000C(0x0078)
	bool                                               SaveGameOptionsValid;                                     // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTutorialHintsEnabled;                                    // 0x0085(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowFPS;                                                 // 0x0086(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowNetInfo;                                             // 0x0087(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HeadbobbingScale;                                         // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeScale;                                         // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UIDPIScale;                                               // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              volumeCharacterVoice;                                     // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              volumeMaster;                                             // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              volumeSFX;                                                // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              volumeMusic;                                              // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               InvertMouse;                                              // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               PhotosensitiveMode;                                       // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	class FString                                      Language;                                                 // 0x00B0(0x0010) (ZeroConstructor)
	struct FCharacterOptions                           CharacterOptions;                                         // 0x00C0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	TArray<struct FCustomKeyBinding>                   CustomKeyBindings;                                        // 0x00C8(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.OptionsInSaveGame
// 0x0008
struct FOptionsInSaveGame
{
	bool                                               SaveGameOptionsValid;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ScreenMode;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ItemRefundResourceItem
// 0x0018
struct FItemRefundResourceItem
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              amount;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ItemRefundListItem
// 0x0068
struct FItemRefundListItem
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TMap<struct FGuid, struct FItemRefundResourceItem> Resources;                                                // 0x0010(0x0050) (Edit, ZeroConstructor, EditConst)
	float                                              CreditCost;                                               // 0x0060(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.NewPlayerMutator
// 0x0018
struct FNewPlayerMutator
{
	int                                                MinCampaignProgress;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCampaignProgress;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMutator*>                            Mutators;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.WidgetPing
// 0x0020
struct FWidgetPing
{
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FSD.WidgetFade
// 0x001C
struct FWidgetFade
{
	TWeakObjectPtr<class UUserWidget>                  Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0008(0x0014) MISSED OFFSET
};

// ScriptStruct FSD.WidgetTextCounter
// 0x001C
struct FWidgetTextCounter
{
	TWeakObjectPtr<class UTextBlock>                   Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0008(0x0014) MISSED OFFSET
};

// ScriptStruct FSD.CustomCounter
// 0x0028
struct FCustomCounter
{
	struct FScriptDelegate                             OnCount;                                                  // 0x0000(0x0014) (ZeroConstructor, InstancedReference)
	TWeakObjectPtr<class UObject>                      Owner;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.WidgetMover
// 0x0028
struct FWidgetMover
{
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct FSD.UpgradeCostItem
// 0x0010
struct FUpgradeCostItem
{
	TArray<int>                                        Amounts;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.GVisibilityGroups
// 0x0058
struct FGVisibilityGroups
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty FSD.GVisibilityGroups.AllGroups
	class UHUDVisibilityGroup*                         EnemyHealth;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GDMissionStats
// 0x00F0
struct FGDMissionStats
{
	class UMissionStat*                                TimePlayed;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DistanceTravelled;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                EnemiesKilled;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                MineralsMined;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                MissionCompleted;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                SoloMissionCompleted;                                     // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                SecondaryMissionCompleted;                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                CharacterLevelUp;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                VanityItemsBought;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                ItemUpgradesBought;                                       // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DrinkablesConsumed;                                       // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DrinkableRoundsOrdered;                                   // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                CampaignMissionsCompleted;                                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                CampaignsCompleted;                                       // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                TimesDowned;                                              // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                TimesPassedOut;                                           // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                WeaponsUnlockedStat;                                      // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DeepDivesCompleted;                                       // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                EliteDeepDivesCompleted;                                  // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                CosmeticsCrafted;                                         // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                WeaponSkinsCrafted;                                       // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                WeaponOverclocksCrafted;                                  // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                CraftingMasteryLevel;                                     // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DefendBlackBoxObjectivesCompleted;                        // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                RepairMiniMuleObjectivesCompleted;                        // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DeepDiveCompletedBestTime;                                // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                EliteDeepDiveCompletedBestTime;                           // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                SpecialBeersUnlocked;                                     // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMissionStat*>                        AllMissionStats;                                          // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.GDMilestones
// 0x0010
struct FGDMilestones
{
	TArray<class UMilestoneAsset*>                     Milestones;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.GDPerks
// 0x0090
struct FGDPerks
{
	TArray<class UPerkAsset*>                          PerkAssets;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        RequiredClaimsPerTier;                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
	class UFloatPerkAsset*                             IronWill;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             DashPerk;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             MarathonPerk;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             ShieldLink;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             Bezerk;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             JumpBoots;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             ImpactCompensators;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             BeastMaster;                                              // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             DownedBomb;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             FieldMedic;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             HeightenedSenses;                                         // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             HoverBoots;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             ActivePerkSlots;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFloatPerkAsset*                             PassivePerkSlots;                                         // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GDBarMenu
// 0x0010
struct FGDBarMenu
{
	TArray<class UDrinkableDataAsset*>                 Drinkables;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.GDItemCategoryIDs
// 0x0038
struct FGDItemCategoryIDs
{
	class UCategoryID*                                 OverclockID;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCategoryID*                                 ItemSkinID;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCategoryID*                                 VanityID;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCategoryID*                                 PickaxePartID;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCategoryID*                                 WeaponID;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCategoryID*                                 CraftingID;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCategoryID*                                 ForgeID;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GDDamageClasses
// 0x0040
struct FGDDamageClasses
{
	class UDamageClass*                                Falling;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Fire;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Heat;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Physical;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Kinetic;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Explosive;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Cold;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Ice;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GDStats
// 0x0128
struct FGDStats
{
	class UPawnStat*                                   MaxAmmo;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MaxShields;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   ShieldRegenerationRate;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MaxHealth;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   DamageResistance;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   FireResistance;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   ColdResistance;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MeleeAttackDamage;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MovementSpeed;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   SprintSpeed;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   CarryingSpeedModifier;                                    // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   ReviveSpeed;                                              // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   DepositSpeed;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   RessuplySpeed;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   RedSugarHeal;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   CarryingCapacity;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   ZiplineSpeed;                                             // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   ZiplineDownwardsBoost;                                    // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MaxAcceleration;                                          // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   GroundFriction;                                           // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   BreakingDeceleration;                                     // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   SlideDownIce;                                             // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   FriendlyFire;                                             // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   DamageFromPlayers;                                        // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   FlareThrowingStrength;                                    // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   CaveLeechSense;                                           // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MorkiteMining;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   GoldMining;                                               // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   RockMiningStrength;                                       // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   DirtMiningStrength;                                       // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   ResourceMiningStrength;                                   // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   PowerAttackCooldownRate;                                  // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   ImpactCompensation;                                       // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MovementSpeedPenalty;                                     // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MovementSpeedPenaltyReduction;                            // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   CarriableThrowing;                                        // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   HoverBootsDuration;                                       // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GDResources
// 0x00D8
struct FGDResources
{
	class UResourceData*                               CreditsResource;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               MOMResource;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               GoldResource;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               NitraResource;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               HollomiteResource;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               MagniteResource;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               NeromiteResource;                                         // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               QuantriteResource;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               UmaniteResource;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               CropaniteResource;                                        // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               DystrumResource;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               IronResource;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               EnorResource;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               BismorResource;                                           // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               Barly1;                                                   // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               Barly2;                                                   // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               Barly3;                                                   // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               Barly4;                                                   // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGemResourceData*                            JadizResource;                                            // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGemResourceData*                            BittergemResource;                                        // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGemResourceData*                            MotherlodeGemResource;                                    // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               RedSugarResource;                                         // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               BlankSchematics;                                          // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UResourceData*>                       CraftingResources;                                        // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class UResourceData*>                       AllResources;                                             // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.GDTerrainTypes
// 0x0010
struct FGDTerrainTypes
{
	class UTerrainType*                                Rock;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTerrainType*                                Dirt;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GDGameStatsTracking
// 0x0020
struct FGDGameStatsTracking
{
	struct FGameplayTagContainer                       TotalEnemyKillsFilter;                                    // 0x0000(0x0020) (Edit)
};

// ScriptStruct FSD.GDAudio
// 0x0040
struct FGDAudio
{
	TSoftObjectPtr<class USoundAttenuation>            FirstPersonHitscanAttenuationOverride;                    // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UClass*                                      ReverbActor;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmallCaveRadius;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MediumCaveRadius;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LargeCaveRadius;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.GDDifficulty
// 0x0010
struct FGDDifficulty
{
	TArray<class UDifficultySetting*>                  DifficultySettings;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.RetirementCostItem
// 0x0050
struct FRetirementCostItem
{
	TMap<class UResourceData*, int>                    RetirementCost;                                           // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.GDCharacterRetirement
// 0x00C0
struct FGDCharacterRetirement
{
	TMap<class UPlayerCharacterID*, class UClass*>     Campaigns;                                                // 0x0000(0x0050) (Edit, ZeroConstructor)
	TMap<class UPlayerCharacterID*, struct FRetirementCostItem> RetirementCost;                                           // 0x0050(0x0050) (Edit, ZeroConstructor)
	TArray<float>                                      CreditsCostMultipliers;                                   // 0x00A0(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ResourceCostMultipliers;                                  // 0x00B0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.GDPlayerAndCharacterProgression
// 0x00A0
struct FGDPlayerAndCharacterProgression
{
	TArray<TSoftObjectPtr<class UClass>>               RankedHeroClasses;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<TSoftObjectPtr<class UClass>>               TestHeroClasses;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              LoadedClasses;                                            // 0x0020(0x0010) (ZeroConstructor, Transient)
	TArray<struct FText>                               PlayerRankNames;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        CharacterXPLevels;                                        // 0x0040(0x0010) (Edit, ZeroConstructor)
	TMap<struct FGuid, class UPlayerCharacterID*>      PlayerCharacterIDs;                                       // 0x0050(0x0050) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.TrackPositionList
// 0x0038
struct FTrackPositionList
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Positions;                                                // 0x0008(0x0010) (ZeroConstructor)
	TArray<TWeakObjectPtr<class UGemTracker>>          Trackers;                                                 // 0x0018(0x0010) (ExportObject, ZeroConstructor)
	TArray<TWeakObjectPtr<class UMaterialInstanceDynamic>> DynamicMaterials;                                         // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.GMMutatorItem
// 0x0010
struct FGMMutatorItem
{
	TArray<class UMutator*>                            Mutators;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct FSD.PartyAnalyticsInformation
// 0x0014
struct FPartyAnalyticsInformation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct FSD.DeepDiveAnalyticsInformation
// 0x000C
struct FDeepDiveAnalyticsInformation
{
	bool                                               WasDeepDive;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LastDeepDiveStage;                                        // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EliteDeepDive;                                            // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsReplay;                                                 // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct FSD.StateStats
// 0x0014
struct FStateStats
{
	float                                              MaxAcceleration;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxPawnSpeed;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinSlowdownAngle;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSlowdownAngle;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxBreakingDeceleration;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.HealthBarLooks
// 0x0020
struct FHealthBarLooks
{
	struct FLinearColor                                HealthColor;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DamageColor;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.HUDVisibilityRegisteredWidget
// 0x000C
struct FHUDVisibilityRegisteredWidget
{
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.InputDisplay
// 0x0040
struct FInputDisplay
{
	EInputInteraction                                  Interaction;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       InputText;                                                // 0x0008(0x0028) (Edit, BlueprintVisible)
	struct FLinearColor                                TextTint;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IconTintable;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.ItemSkinOwners
// 0x0010
struct FItemSkinOwners
{
	TArray<class UItemID*>                             Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.ItemUpgradeStatText
// 0x0020
struct FItemUpgradeStatText
{
	struct FText                                       StatText;                                                 // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsAdventageous;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.UpgradeValues
// 0x001C
struct FUpgradeValues
{
	float                                              BaseValue;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpgradedValue;                                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpgradedPercentageValue;                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              OldUpgradedValue;                                         // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              OldUpgradedPercentageValue;                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentValue;                                             // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	EUpgradeCalucationType                             CalculationType;                                          // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EItemPreviewStatus                                 PreviewStatus;                                            // 0x0019(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
};

// ScriptStruct FSD.GearStatEntry
// 0x0068
struct FGearStatEntry
{
	struct FText                                       Text;                                                     // 0x0000(0x0028) (BlueprintVisible, Transient)
	struct FText                                       Value;                                                    // 0x0018(0x0028) (BlueprintVisible, Transient)
	struct FText                                       BaseValue;                                                // 0x0030(0x0028) (BlueprintVisible, Transient)
	struct FText                                       UpgradeValue;                                             // 0x0048(0x0028) (BlueprintVisible, Transient)
	EItemPreviewStatus                                 PreviewStatus;                                            // 0x0060(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.LineSegmentCarverPoint
// 0x0024
struct FLineSegmentCarverPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HRange;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VRange;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorAngle;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CielingNoiseRange;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WallNoiseRange;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorNoiseRange;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.LineSegmentFillerPoint
// 0x0024
struct FLineSegmentFillerPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRandRange                                  RandomRange;                                              // 0x000C(0x0008) (Edit)
	struct FRandRange                                  RandomNoiseRange;                                         // 0x0014(0x0008) (Edit)
	struct FRandRange                                  FillAmount;                                               // 0x001C(0x0008) (Edit)
};

// ScriptStruct FSD.LocalizedLanguageInfo
// 0x0038
struct FLocalizedLanguageInfo
{
	class FString                                      EnglishName;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      NativeName;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      CodeName;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               CommunityTranslated;                                      // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                TranslatedPercent;                                        // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FSDTranslationProgress
// 0x0018
struct FFSDTranslationProgress
{
	class FString                                      CodeName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                TranslatedPercent;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.TreasureWeight
// 0x0010
struct FTreasureWeight
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      RewarderClass;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PickaxeMeshInstance
// 0x0010
struct FPickaxeMeshInstance
{
	class UMeshComponent*                              FP_Mesh;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMeshComponent*                              TP_Mesh;                                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct FSD.MilestoneTier
// 0x0008
struct FMilestoneTier
{
	float                                              CompletionCount;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PerkPoints;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.SoftMinersManualDescription
// 0x0080
struct FSoftMinersManualDescription
{
	struct FText                                       Headline;                                                 // 0x0000(0x0028) (Edit)
	struct FText                                       RichDescription;                                          // 0x0018(0x0028) (Edit)
	TSoftObjectPtr<class UTexture2D>                   ImageFront;                                               // 0x0030(0x0028) (Edit)
	TSoftObjectPtr<class UTexture2D>                   ImageBackground;                                          // 0x0058(0x0028) (Edit)
};

// ScriptStruct FSD.SoftIconWithColor
// 0x0038
struct FSoftIconWithColor
{
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FLinearColor                                Tint;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DamageTypeDescription
// 0x0078
struct FDamageTypeDescription
{
	EDamageType                                        Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       RichDescription;                                          // 0x0020(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSoftIconWithColor                          Icon;                                                     // 0x0038(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              IconScale;                                                // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.SoftMissionStepDescription
// 0x0058
struct FSoftMissionStepDescription
{
	struct FText                                       Headline;                                                 // 0x0000(0x0028) (Edit)
	struct FText                                       RichDescription;                                          // 0x0018(0x0028) (Edit)
	TSoftObjectPtr<class UTexture2D>                   Image;                                                    // 0x0030(0x0028) (Edit)
};

// ScriptStruct FSD.MissionTypeDescription
// 0x0028
struct FMissionTypeDescription
{
	struct FText                                       InfoHeadline;                                             // 0x0000(0x0028) (Edit)
	TArray<struct FSoftMissionStepDescription>         Steps;                                                    // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.BiomeFeatures
// 0x0010
struct FBiomeFeatures
{
	class UMinersManualData*                           Descriptions[0x2];                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MissionStepDescription
// 0x0038
struct FMissionStepDescription
{
	struct FText                                       Headline;                                                 // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       RichDescription;                                          // 0x0018(0x0028) (BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Image;                                                    // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MiningPodDialogs
// 0x0050
struct FMiningPodDialogs
{
	class UDialogDataAsset*                            DepartingIn5Min;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn4Min;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn3Min;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn2Min;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn1Min;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn30Sec;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn10Sec;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn123Sec;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Departed;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DeepDiveDeparted;                                         // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MissionHazardSetting
// 0x0020
struct FMissionHazardSetting
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (Edit)
	float                                              HazardBonus;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MissionBiomeItem
// 0x0010
struct FMissionBiomeItem
{
	class UBiome*                                      Biome;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Rarity;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MissionTemplateItem
// 0x0010
struct FMissionTemplateItem
{
	class UMissionTemplate*                            Template;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Rarity;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MultiHitscanHit
// 0x0030
struct FMultiHitscanHit
{
	class UPrimitiveComponent*                         TargetCompoenent;                                         // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UFSDPhysicalMaterial>         PhysicalMaterial;                                         // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // 0x0010(0x000C) (Transient)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x001C(0x000C) (Transient)
	unsigned char                                      BoneIndex;                                                // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               PlayImpactSound;                                          // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               SpawnDecal;                                               // 0x002A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct FSD.OxygenCallback
// 0x0018
struct FOxygenCallback
{
	struct FScriptDelegate                             Delegate;                                                 // 0x0000(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.PawnAfflictionItem
// 0x0018
struct FPawnAfflictionItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UAfflictionEffect*>                   Afflictions;                                              // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.AfflictionEntry
// 0x000C (0x0018 - 0x000C)
struct FAfflictionEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UPawnAffliction*                             affliction;                                               // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.AfflictionEntriesArray
// 0x0018 (0x00C8 - 0x00B0)
struct FAfflictionEntriesArray : public FFastArraySerializer
{
	TArray<struct FAfflictionEntry>                    Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UPawnAfflictionComponent*                    Owner;                                                    // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct FSD.PawnStatEntry
// 0x0024 (0x0030 - 0x000C)
struct FPawnStatEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UPawnStat*                                   PawnStat;                                                 // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
	float                                              Value;                                                    // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PawnStatEntriesArray
// 0x0018 (0x00C8 - 0x00B0)
struct FPawnStatEntriesArray : public FFastArraySerializer
{
	TArray<struct FPawnStatEntry>                      Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UPawnStatsComponent*                         Owner;                                                    // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct FSD.PerkUsage
// 0x0018
struct FPerkUsage
{
	class UPerkAsset*                                  Perk;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                UsedCount;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct FSD.DefaultPickaxeParts
// 0x0050
struct FDefaultPickaxeParts
{
	TMap<EPickaxePartLocation, class UPickaxePart*>    parts;                                                    // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.PillarSegment
// 0x0008
struct FPillarSegment
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DownCameraSettings
// 0x0018
struct FDownCameraSettings
{
	TWeakObjectPtr<class APlayerCharacter>             Target;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                TargetIndex;                                              // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MinPitch;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitch;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmoothSpeed;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.HoldButton
// 0x0028
struct FHoldButton
{
	struct FText                                       HoldingText;                                              // 0x0000(0x0028) (Edit)
	float                                              HoldStartTime;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoldDuration;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.AnalogAimSettings
// 0x0040
struct FAnalogAimSettings
{
	bool                                               ShowDebugOutput;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0001(0x0013) MISSED OFFSET
	struct FVector2D                                   AimRate;                                                  // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SensitivityCurve;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LookAtStickyness;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StickynessRecoverySpeed;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StickynessMaxSensitivity;                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ThirdPersonLookRate;                                      // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.CameraSpringSettings
// 0x003C
struct FCameraSpringSettings
{
	bool                                               SpringEnabled;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StepThreshold;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpringExtend;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RetractStrength;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RetractDownReduction;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebug;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              LastSpeedZ;                                               // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x0020(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     StartSpringLocation;                                      // 0x002C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSpringInitialized;                                       // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.HealthRegenerationParams
// 0x0010
struct FHealthRegenerationParams
{
	bool                                               bIsRegenerating;                                          // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DelayAfterDamage;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealthPerSecond;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetHealthRatio;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PlayerSphere
// 0x0020
struct FPlayerSphere
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<TWeakObjectPtr<class APlayerCharacter>>     Players;                                                  // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.ProximityTriggerItem
// 0x0028
struct FProximityTriggerItem
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FScriptDelegate                             Callback;                                                 // 0x0018(0x0014) (ZeroConstructor, Transient, InstancedReference)
};

// ScriptStruct FSD.RejoinFloat
// 0x001C
struct FRejoinFloat
{
	struct FGuid                                       ItemKey;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ValueKey;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RejoinInt
// 0x001C
struct FRejoinInt
{
	struct FGuid                                       ItemKey;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ValueKey;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PostProcessingBlendable
// 0x0020
struct FPostProcessingBlendable
{
	TScriptInterface<class UBlendableInterface>        Blendable;                                                // 0x0000(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.ClaimableRewardArray
// 0x0010
struct FClaimableRewardArray
{
	TArray<struct FClaimableRewardEntry>               Entries;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.PromotionRewardsRank
// 0x0060
struct FPromotionRewardsRank
{
	TArray<struct FClaimableRewardEntry>               RewardsAllClasses;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class UPlayerCharacterID*, struct FClaimableRewardArray> RewardsCharacterSpecific;                                 // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.SentryGunMuzzleSetup
// 0x0010
struct FSentryGunMuzzleSetup
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FireMontage;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.InfluenceSphere
// 0x0010
struct FInfluenceSphere
{
	class UCaveInfluencer*                             Influencer;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ResourceDebris
// 0x0010
struct FResourceDebris
{
	float                                              InfluencerRange;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UDebrisBase*                                 Debris;                                                   // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct FSD.TextStyleOverride
// 0x0090
struct FTextStyleOverride
{
	bool                                               bOverrideFont;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0050) (Edit)
	bool                                               bOverrideColor;                                           // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FSlateColor                                 Color;                                                    // 0x0060(0x0028) (Edit)
	bool                                               bOverrideSize;                                            // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              SizeScale;                                                // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RandLinePoint
// 0x002C
struct FRandLinePoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRandRange                                  Range;                                                    // 0x000C(0x0008) (Edit)
	struct FRandRange                                  NoiseRange;                                               // 0x0014(0x0008) (Edit)
	struct FRandRange                                  SkewFactor;                                               // 0x001C(0x0008) (Edit)
	struct FRandRange                                  FillAmount;                                               // 0x0024(0x0008) (Edit)
};

// ScriptStruct FSD.RoomGeneratorGroupInstance
// 0x0010
struct FRoomGeneratorGroupInstance
{
	TArray<class URoomGenerator*>                      Rooms;                                                    // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.SaveGameSnapShot
// 0x00C8
struct FSaveGameSnapShot
{
	TWeakObjectPtr<class UFSDSaveGame>                 SaveGame;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      Filename;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               IsObsolete;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                VersionNumber;                                            // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Credits;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TMap<class UClass*, int>                           CharacterLevels;                                          // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TMap<class UClass*, int>                           Resources;                                                // 0x0078(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct FSD.SaveGameStatePerkItem
// 0x0010
struct FSaveGameStatePerkItem
{
	unsigned char                                      Rank;                                                     // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UPerkAsset*                                  Perk;                                                     // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.ActiveCampaingMission
// 0x000C
struct FActiveCampaingMission
{
	bool                                               HasMission;                                               // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                GlobalSeed;                                               // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MissionSeed;                                              // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.SchematicType
// 0x0070
struct FSchematicType
{
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                IconTint;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UTexture2D>                   Frame;                                                    // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                FrameTint;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FriendInfo
// 0x0038
struct FFriendInfo
{
	class FString                                      DisplayName;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      RealName;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsOnline;                                                 // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlaying;                                                // 0x0021(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayingThisGame;                                        // 0x0022(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsJoinable;                                               // 0x0023(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasVoiceSupport;                                          // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	class FString                                      PresenceStatus;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.RandomWalkCycleEntry
// 0x000C
struct FRandomWalkCycleEntry
{
	float                                              RandomSelectionWeight;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRandRange                                  Duration;                                                 // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSD.SoundMixManagerItem
// 0x0010
struct FSoundMixManagerItem
{
	class USoundMix*                                   mix;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.DrinkableBarSlot
// 0x0014
struct FDrinkableBarSlot
{
	struct FVector                                     WorldLocation;                                            // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class ADrinkableActor>              DrinkableActor;                                           // 0x000C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.DeepCSGNode
// 0x0004
struct FDeepCSGNode
{
	uint32_t                                           Val;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DeepCSGFloatPlane
// 0x0020
struct FDeepCSGFloatPlane
{
	struct FVector4                                    Plane;                                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FDeepCSGNode                                Top;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDeepCSGNode                                Bottom;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.DeepCSGFloatTree
// 0x0018
struct FDeepCSGFloatTree
{
	struct FDeepCSGNode                                Root;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FDeepCSGFloatPlane>                  planes;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.ActiveStatusEffect
// 0x0008
struct FActiveStatusEffect
{
	class AActor*                                      Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.ActiveStatusEffectBank
// 0x0040
struct FActiveStatusEffectBank
{
	class UStatusEffect*                               Key;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStatusEffect*                               ActiveEffect;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
	TArray<struct FActiveStatusEffect>                 Effects;                                                  // 0x0030(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.SteelSeriesLinearColor
// 0x0003
struct FSteelSeriesLinearColor
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.TerrainPlacementBox
// 0x001C
struct FTerrainPlacementBox
{
	struct FVector                                     Min;                                                      // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x000C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	ETerrainPlacementBoxType                           PlacementType;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.TextCounterEntry
// 0x0028
struct FTextCounterEntry
{
	class UTextBlock*                                  TextBlock;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       Format;                                                   // 0x0008(0x0028) (Edit, BlueprintVisible)
	int                                                Value;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.TrackBuilderPoint
// 0x0010
struct FTrackBuilderPoint
{
	struct FVector_NetQuantize                         Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible)
	float                                              Rotation;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.BumpPlayerHit
// 0x0018
struct FBumpPlayerHit
{
	struct FVector_NetQuantize                         force;                                                    // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class APlayerCharacter*                            Player;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.TunnelSettingItem
// 0x0010
struct FTunnelSettingItem
{
	class UTunnelSegmentSetting*                       SegmentSetting;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FInt32Interval                              SegmentSize;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.TutorialHint
// 0x0070
struct FTutorialHint
{
	struct FText                                       Text;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       TaskText;                                                 // 0x0018(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Title;                                                    // 0x0030(0x0028) (Edit)
	TSoftObjectPtr<class UTexture2D>                   Image;                                                    // 0x0048(0x0028) (Edit)
};

// ScriptStruct FSD.HeightenedSenseTracker
// 0x0020
struct FHeightenedSenseTracker
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UHealthComponentBase>         HealthComponent;                                          // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UAttackingPointInterface>   AttackingPoint;                                           // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.UpgradeTier
// 0x0018
struct FUpgradeTier
{
	TArray<class UItemUpgrade*>                        Upgrades;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                RequiredCharacterLevel;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RequiredPlayerRank;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MasteryItem
// 0x0018
struct FMasteryItem
{
	int                                                NeededMastery;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UUnlockReward*>                       Unlocks;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.GenerateIconInfo
// 0x0028
struct FGenerateIconInfo
{
	EGeneratorIconType                                 IconType;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UPickaxePart*                                PickaxePart;                                              // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EPickaxePartLocation                               PickaxePartLocation;                                      // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UVanityItem*                                 Item;                                                     // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPlayerCharacterID*                          Character;                                                // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.VanityTestCharacterItem
// 0x0010
struct FVanityTestCharacterItem
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimBP;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.SchematicBankItem
// 0x0020
struct FSchematicBankItem
{
	class USchematicPricingTier*                       PricingTier;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USchematicRarity*                            Rarity;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class USchematic*>                          Schematics;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.WeightedRoomSelectorItem
// 0x0010
struct FWeightedRoomSelectorItem
{
	class URoomGenerator*                              Room;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.WeightedRoomSelector
// 0x0010
struct FWeightedRoomSelector
{
	TArray<struct FWeightedRoomSelectorItem>           Items;                                                    // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.YesNoPromptSettings
// 0x0040
struct FYesNoPromptSettings
{
	class UClass*                                      WidgetClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0010(0x0028) (Edit, BlueprintVisible)
	struct FText                                       Message;                                                  // 0x0028(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct FSD.ZapperTarget
// 0x0010
struct FZapperTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ZipLineConnectorHandler
// 0x0010
struct FZipLineConnectorHandler
{
	class UClass*                                      ConnectorClass;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AZipLineConnector*                           Connector;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ZipLine
// 0x0038
struct FZipLine
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct FSD.DiscordUser
// 0x0040
struct FDiscordUser
{
	class FString                                      userId;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      UserName;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      discriminator;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      avatar;                                                   // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.DiscordServerData
// 0x0008
struct FDiscordServerData
{
	int                                                presenceCount;                                            // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                memberCount;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CharacterViewInfo
// 0x0028
struct FCharacterViewInfo
{
	class UClass*                                      CharacterClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UVanityItem*>                         EquippedVanity;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               SurvivedInPod;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class UVictoryPose*                                VictoryPose;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CharacterViewScene
// 0x0018
struct FCharacterViewScene
{
	TArray<struct FCharacterViewInfo>                  Characters;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               MissionSuccess;                                           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.ExampleStruct
// 0x0004
struct FExampleStruct
{
	float                                              Field;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PricingTierEntry
// 0x0020 (0x0028 - 0x0008)
struct FPricingTierEntry : public FTableRowBase
{
	struct FIRandRange                                 CreditCost;                                               // 0x0008(0x0008) (Edit)
	struct FIRandRange                                 Material1;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FIRandRange                                 Material2;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FIRandRange                                 Material3;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSD.DeepCSGTree
// 0x0018
struct FDeepCSGTree
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FSD.ChunkOffset
// 0x0006
struct FChunkOffset
{
	int16_t                                            X;                                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Y;                                                        // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Z;                                                        // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ChunkId
// 0x0006
struct FChunkId
{
	int16_t                                            X;                                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Y;                                                        // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Z;                                                        // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CellId
// 0x0006
struct FCellId
{
	int16_t                                            X;                                                        // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	int16_t                                            Y;                                                        // 0x0002(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	int16_t                                            Z;                                                        // 0x0004(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DeepCSGTreeOperations
// 0x0001
struct FDeepCSGTreeOperations
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.DeepCSGUtils
// 0x0001
struct FDeepCSGUtils
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.LinearCellId
// 0x0006
struct FLinearCellId
{
	uint16_t                                           X;                                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Y;                                                        // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Z;                                                        // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.EncodedChunkCellId
// 0x0008
struct FEncodedChunkCellId
{
	struct FEncodedChunkId                             ChunkId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           cellOffset;                                               // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct FSD.ChunckIDAndOffsetBox
// 0x0012
struct FChunckIDAndOffsetBox
{
	struct FChunkId                                    ChunkId;                                                  // 0x0000(0x0006)
	struct FChunkOffset                                minOffset;                                                // 0x0006(0x0006)
	struct FChunkOffset                                maxOffset;                                                // 0x000C(0x0006)
};

// ScriptStruct FSD.ChunckIDAndOffset
// 0x000C
struct FChunckIDAndOffset
{
	struct FChunkId                                    ChunkId;                                                  // 0x0000(0x0006)
	struct FChunkOffset                                Offset;                                                   // 0x0006(0x0006)
};

// ScriptStruct FSD.CellBox
// 0x000C
struct FCellBox
{
	struct FCellId                                     Min;                                                      // 0x0000(0x0006)
	struct FCellId                                     Max;                                                      // 0x0006(0x0006)
};

// ScriptStruct FSD.TerrainLateJoinIteration
// 0x0028
struct FTerrainLateJoinIteration
{
	int                                                DrillsIndex;                                              // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MeltsIndex;                                               // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PickAxeIndex;                                             // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                FloatingIndex;                                            // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ColliderCarvesIndex;                                      // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MeshCarvesIndex;                                          // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ExplosionsIndex;                                          // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                LateJoinIndex;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                DebrisIndex;                                              // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ChunkVisibilityIndex;                                     // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.EnemyGroupDescriptorSpawnItem
// 0x0010
struct FEnemyGroupDescriptorSpawnItem
{
	class UEnemyDescriptor*                            enemy;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                count;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EnemySpawnParamsEntry
// 0x0028 (0x0030 - 0x0008)
struct FEnemySpawnParamsEntry : public FTableRowBase
{
	class FString                                      ItemName;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              DifficultyRating;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinSpawnCount;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxSpawnCount;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Rarity;                                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnAmountModifier;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RequiredMainCampaignProgress;                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.EnemySpawnItem
// 0x0010
struct FEnemySpawnItem
{
	class UEnemyDescriptor*                            enemy;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                count;                                                    // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              VeteranComposition;                                       // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.MUSTBEHERETOCOMPILE
// 0x0001
struct FMUSTBEHERETOCOMPILE
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.Formation
// 0x0020
struct FFormation
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UFormationData*                              FormationData;                                            // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.FormationID
// 0x0008
struct FFormationID
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.DamageData
// 0x0018
struct FDamageData
{
	class UFSDPhysicalMaterial*                        Bodypart;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.DelegateStruct
// 0x0001
struct FDelegateStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.SoundClassManagerItem
// 0x000C
struct FSoundClassManagerItem
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FSD.TesterName
// 0x0020 (0x0028 - 0x0008)
struct FTesterName : public FTableRowBase
{
	class FString                                      SteamID;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      SteamProfileName;                                         // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.TipsTableRow
// 0x0068 (0x0070 - 0x0008)
struct FTipsTableRow : public FTableRowBase
{
	struct FText                                       Header;                                                   // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       InputText;                                                // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       InputTextControllerOverride;                              // 0x0050(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TimeToDisplay;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ResourcePouchItem
// 0x0010
struct FResourcePouchItem
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.MinersManualDescription
// 0x0040
struct FMinersManualDescription
{
	struct FText                                       Headline;                                                 // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       RichDescription;                                          // 0x0018(0x0028) (BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  ImageFront;                                               // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ImageBackground;                                          // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PlanetZoneItem
// 0x0028
struct FPlanetZoneItem
{
	TArray<class UBiome*>                              Biomes;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct FSD.PathCell
// 0x0010
struct FPathCell
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.PathDebugNode
// 0x0020
struct FPathDebugNode
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FSD.DebrisPatchResource
// 0x0018
struct FDebrisPatchResource
{
	class UDebrisPatchComponent*                       Debris;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.DebrisVeinResource
// 0x0018
struct FDebrisVeinResource
{
	class UDebrisVeinComponent*                        Debris;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.TerrainPlacementDebugItem
// 0x0070
struct FTerrainPlacementDebugItem
{
	TArray<struct FTerrainPlacementBox>                TerrainCheckers;                                          // 0x0000(0x0010) (ZeroConstructor, Transient)
	bool                                               BoxGood;                                                  // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               CapsuleGood;                                              // 0x0011(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDebrisColliderType                                CapsuleType;                                              // 0x0012(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	struct FDebrisCapsule                              Capsule;                                                  // 0x0014(0x0020) (Transient)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (Transient, IsPlainOldData)
};

// ScriptStruct FSD.PLSResource
// 0x0010
struct FPLSResource
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AmountToGenerate;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ExposedProperty
// 0x0001
struct FExposedProperty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.ExposedFloat
// 0x0027 (0x0028 - 0x0001)
struct FExposedFloat : public FExposedProperty
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MinValue;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ExposableFloat
// 0x0028
struct FExposableFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Exposed;                                                  // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MinValue;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RecoilImpulse
// 0x000C
struct FRecoilImpulse
{
	float                                              Rotation;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Impulse;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ResourceInitalizer
// 0x0010
struct FResourceInitalizer
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAmount;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.SchematicGADataEntry
// 0x0028 (0x0030 - 0x0008)
struct FSchematicGADataEntry : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	int                                                SchematicGAID;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class FString                                      SchematicName;                                            // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.SpiderAnimInstanceProxy
// 0x0000 (0x0690 - 0x0690)
struct FSpiderAnimInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct FSD.CraftableDataEntry
// 0x0030 (0x0038 - 0x0008)
struct FCraftableDataEntry : public FTableRowBase
{
	class FString                                      ItemName;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                PlayerRank;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Credits;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Jadiz;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Magnite;                                                  // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Croppa;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Umanite;                                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Enor;                                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Bismor;                                                   // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.VanityDataEntry
// 0x0020 (0x0058 - 0x0038)
struct FVanityDataEntry : public FCraftableDataEntry
{
	class FString                                      Character;                                                // 0x0038(0x0010) (Edit, ZeroConstructor)
	class FString                                      Category;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.WeakpointChannel
// 0x0028
struct FWeakpointChannel
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UFSDPhysicalMaterial*                        WeakPointMaterial;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.WeakpointTask
// 0x0128
struct FWeakpointTask
{
	unsigned char                                      UnknownData00[0x128];                                     // 0x0000(0x0128) MISSED OFFSET
};

// ScriptStruct FSD.WeaponHitCounterEffectItem
// 0x0008
struct FWeaponHitCounterEffectItem
{
	TWeakObjectPtr<class AActor>                       Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.XPSettings
// 0x000C
struct FXPSettings
{
	float                                              XP_PerGold;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              XP_PerKill;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              XP_OnSurvivedLevel;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
