#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BPL_UpgradeHelpers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatUpgradeToEntry
struct UBPL_UpgradeHelpers_C_FormatUpgradeToEntry_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FUpgradeValues                              UpgradeValues;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EFormatWeaponStatType>*                StatFormat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFormatPreviewStatusType>*             PreviewFormat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasAnyupgrades;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatUpgrade
struct UBPL_UpgradeHelpers_C_FormatUpgrade_Params
{
	struct FUpgradeValues                              UpgradeValues;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EFormatWeaponStatType>*                StatFormat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFormatPreviewStatusType>*             PreviewFormat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       BaseText;                                                 // (Parm, OutParm)
	struct FText                                       UpgradeText;                                              // (Parm, OutParm)
	struct FText                                       Value;                                                    // (Parm, OutParm)
	EItemPreviewStatus                                 Format;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasAnyupgrades;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Generic
struct UBPL_UpgradeHelpers_C_UPGDESC_Generic_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemUpgrade**                               upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseCustomText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CryoSprayProjectile
struct UBPL_UpgradeHelpers_C_UPGDESC_CryoSprayProjectile_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     projectileClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      UpgradeText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Random
struct UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_Random_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitCounter
struct UBPL_UpgradeHelpers_C_UPGDESC_HitCounter_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     HitCounterClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Upgrade_Text;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatToPercentageNormalized
struct UBPL_UpgradeHelpers_C_FormatToPercentageNormalized_Params
{
	float*                                             Base_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Upgrade_Value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Old_Upgrade_Value;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Final_Value;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFormatWeaponStatType>*                FormatType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Base_Text;                                                // (Parm, OutParm)
	struct FText                                       Upgrade_Text;                                             // (Parm, OutParm)
	struct FText                                       Value;                                                    // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDrivenEx
struct UBPL_UpgradeHelpers_C_UPGDESC_AmmoDrivenEx_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EAmmoDrivenWeapnUpgradeType>                UpgradeTypes;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FGearStatEntry>                      GearStats;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPreviewStatus
struct UBPL_UpgradeHelpers_C_FormatPreviewStatus_Params
{
	bool*                                              FormatValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUpgradeValues                              UpgradeValues;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EFormatPreviewStatusType>*             FormatType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemPreviewStatus                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DualMPs
struct UBPL_UpgradeHelpers_C_UPGDESC_DualMPs_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDualMachinePistolsUpgrades*                       upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SentryGun
struct UBPL_UpgradeHelpers_C_UPGDESC_SentryGun_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESentryGunUpgradeType*                             Upgrade_Type;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               Has_Upgraded_Value;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Detpack
struct UBPL_UpgradeHelpers_C_UPGDESC_Detpack_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDetPackUpgrades*                                  upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flaregun
struct UBPL_UpgradeHelpers_C_UPGDESC_Flaregun_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFlaregunUpgrades*                                 upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ArmorStat
struct UBPL_UpgradeHelpers_C_UPGDESC_ArmorStat_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     armorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPawnStat**                                  Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EFormatWeaponStatType>*                Format;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_TriggeredStat
struct UBPL_UpgradeHelpers_C_UPGDESC_TriggeredStat_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Status_Effect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	ETriggeredStatusEffectType*                        Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFormatWeaponStatType>*                Format;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              gear_stat_entry;                                          // (Parm, OutParm)
	bool                                               is_upgraded;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_PlatformGun
struct UBPL_UpgradeHelpers_C_UPGDESC_PlatformGun_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPlatformGunUpgrades*                              upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               Should_show_text;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Bosco
struct UBPL_UpgradeHelpers_C_UPGDESC_Bosco_Params
{
	class UClass**                                     upgradedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBoscoUpgrades*                                    upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasChanged;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CoooldownAggregator
struct UBPL_UpgradeHelpers_C_UPGDESC_CoooldownAggregator_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GrapplingHook
struct UBPL_UpgradeHelpers_C_UPGDESC_GrapplingHook_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGrapplingHookUpgrade*                             upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlaregunProjectile
struct UBPL_UpgradeHelpers_C_UPGDESC_FlaregunProjectile_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFlaregunProjectileUpgrades*                       upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     upgradedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ZiplineGun
struct UBPL_UpgradeHelpers_C_UPGDESC_ZiplineGun_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EZiplineGunUpgrades*                               upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Grenades
struct UBPL_UpgradeHelpers_C_UPGDESC_Grenades_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGrenadeUpgradeType*                               upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Pickaxe
struct UBPL_UpgradeHelpers_C_UPGDESC_Pickaxe_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EManualMiningUpgradeType*                          upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_LineCutterProjectile
struct UBPL_UpgradeHelpers_C_UPGDESC_LineCutterProjectile_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ELineCutterProjectileUpgradeType*                  upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CombatShotgun
struct UBPL_UpgradeHelpers_C_UPGDESC_CombatShotgun_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAutoShotgunUpgrades*                              upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedProjectile
struct UBPL_UpgradeHelpers_C_UPGDESC_ChargedProjectile_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EChargedProjectileUpgrades*                        upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     upgradedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_StickyFlame
struct UBPL_UpgradeHelpers_C_UPGDESC_StickyFlame_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     StatusEffect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SawedOff
struct UBPL_UpgradeHelpers_C_UPGDESC_SawedOff_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESawedOffShotgunUpgrades*                          upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Armor
struct UBPL_UpgradeHelpers_C_UPGDESC_Armor_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     armorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorUpgradeType*                                 Armor_Upgrade_Type;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EFormatWeaponStatType>*                Format;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BurstWeapon
struct UBPL_UpgradeHelpers_C_UPGDESC_BurstWeapon_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBurstWeaponUpgrades*                              upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_AoEFear
struct UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_AoEFear_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      StatName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_HotBullets
struct UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_HotBullets_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageClass**                               DamageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      StatName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BeltDriven
struct UBPL_UpgradeHelpers_C_UPGDESC_BeltDriven_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBeltDrivenWeaponUpgrade*                          upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AutoCannon
struct UBPL_UpgradeHelpers_C_UPGDESC_AutoCannon_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAutoCannonUpgrades*                               upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValues
struct UBPL_UpgradeHelpers_C_FormatValues_Params
{
	struct FUpgradeValues                              UpgradeValues;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EFormatWeaponStatType>*                Format;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       BaseText;                                                 // (Parm, OutParm)
	struct FText                                       UpgradeText;                                              // (Parm, OutParm)
	struct FText                                       Value;                                                    // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AssaultRifle
struct UBPL_UpgradeHelpers_C_UPGDESC_AssaultRifle_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAssaultRifleUpgrade*                              upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GatlingGun
struct UBPL_UpgradeHelpers_C_UPGDESC_GatlingGun_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGatlingGunUpgrade*                                upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ShieldRegenerator
struct UBPL_UpgradeHelpers_C_UPGDESC_ShieldRegenerator_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorRegeneratorUpgrades*                         upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatCmtoM
struct UBPL_UpgradeHelpers_C_FormatCmtoM_Params
{
	float*                                             Base_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Upgrade_Value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Old_Upgrade_Value;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Final_Value;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Base_Text;                                                // (Parm, OutParm)
	struct FText                                       Upgrade_Text;                                             // (Parm, OutParm)
	struct FText                                       Value;                                                    // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPercentage
struct UBPL_UpgradeHelpers_C_FormatPercentage_Params
{
	float*                                             Base_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Upgraded_Value;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Old_Upgraded_Value;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Final_Value;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFormatWeaponStatType>*                Format;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Base_Text;                                                // (Parm, OutParm)
	struct FText                                       Upgrade_Text;                                             // (Parm, OutParm)
	struct FText                                       Value;                                                    // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Cryospray
struct UBPL_UpgradeHelpers_C_UPGDESC_Cryospray_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECryoSprayUpgrades*                                upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlameThrower
struct UBPL_UpgradeHelpers_C_UPGDESC_FlameThrower_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFlameThrowerUpgradeType*                          upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedWeapon
struct UBPL_UpgradeHelpers_C_UPGDESC_ChargedWeapon_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EChargedWeaponUpgrades*                            upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Projectile
struct UBPL_UpgradeHelpers_C_UPGDESC_Projectile_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     upgradedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EProjectileUpgrade*                                upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BoltAction
struct UBPL_UpgradeHelpers_C_UPGDESC_BoltAction_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBoltActionRifleUpgrades*                          upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetStateBonus
struct UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_TargetStateBonus_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      StatName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	ETargetStateDamageBonusType*                       TargetState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetTypeBonus
struct UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_TargetTypeBonus_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      StatName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName*                                      Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_StatusBonus
struct UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_StatusBonus_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SstatusEffectIn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      StatName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ElectricalSMG
struct UBPL_UpgradeHelpers_C_UPGDESC_ElectricalSMG_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EElectricalSMGUpgrades*                            upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Flat
struct UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_Flat_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageClass**                               DamageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      StatName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EFormatPreviewStatusType>*             FormatType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_DamageConversion
struct UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_DamageConversion_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     upgradedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageClass**                               DamageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      StatName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              OverrideStatType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFormatWeaponStatType>*                StatTypeOverride;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_PushStatus
struct UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_PushStatus_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     StatusEffect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      StatName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven
struct UBPL_UpgradeHelpers_C_UPGDESC_AmmoDriven_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAmmoDrivenWeapnUpgradeType*                       upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              OverrideStatType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFormatWeaponStatType>*                StatTypeOverride;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasAnyupgrades;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValue
struct UBPL_UpgradeHelpers_C_FormatValue_Params
{
	float*                                             BaseValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             UpgradeValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OldUpgradeValue;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemPreviewStatus*                                PreviewStatus;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FinalValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFormatWeaponStatType>*                Format;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       BaseText;                                                 // (Parm, OutParm)
	struct FText                                       UpgradeText;                                              // (Parm, OutParm)
	struct FText                                       Value;                                                    // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Damage
struct UBPL_UpgradeHelpers_C_UPGDESC_Damage_Params
{
	class UClass*                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass**                                     upgradedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState*                             Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EDamageUpgrade*                                    upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Prefix;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EDamageComponentType*                              DamageComponentType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan
struct UBPL_UpgradeHelpers_C_UPGDESC_HitScan_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EHitScanBaseUpgradeType*                           upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasAnyupgrades;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SingleUsable_UseDuration
struct UBPL_UpgradeHelpers_C_UPGDESC_SingleUsable_UseDuration_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     subItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SentryGun_Capacity
struct UBPL_UpgradeHelpers_C_UPGDESC_SentryGun_Capacity_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Item
struct UBPL_UpgradeHelpers_C_UPGDESC_Item_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryItemUpgradeType*                         upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flare_Base
struct UBPL_UpgradeHelpers_C_UPGDESC_Flare_Base_Params
{
	class UClass**                                     flareClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFlareUpgradeType*                                 upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Drills
struct UBPL_UpgradeHelpers_C_UPGDESC_Drills_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAutoMinerUpgradeType*                             upgradeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               Has_Upgraded_Value;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Capacity
struct UBPL_UpgradeHelpers_C_UPGDESC_Capacity_Params
{
	class UClass**                                     upgradedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Explosion_Damage
struct UBPL_UpgradeHelpers_C_UPGDESC_Explosion_Damage_Params
{
	class UClass**                                     upgradedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     componentItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Explosion_Radius
struct UBPL_UpgradeHelpers_C_UPGDESC_Explosion_Radius_Params
{
	class UClass**                                     upgradedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     componentItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
};

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan_Bullets
struct UBPL_UpgradeHelpers_C_UPGDESC_HitScan_Bullets_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              GearStatEntry;                                            // (Parm, OutParm)
	bool                                               HasUpgradedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
