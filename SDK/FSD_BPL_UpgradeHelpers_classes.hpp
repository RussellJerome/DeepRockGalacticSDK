#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BPL_UpgradeHelpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPL_UpgradeHelpers.BPL_UpgradeHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_UpgradeHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UpgradeHelpers.BPL_UpgradeHelpers_C");
		return ptr;
	}


	void STATIC_FormatUpgradeToEntry(TEnumAsByte<EFormatWeaponStatType>* StatFormat, TEnumAsByte<EFormatPreviewStatusType>* PreviewFormat, class UObject** __WorldContext, struct FText* Text, struct FUpgradeValues* UpgradeValues, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	void STATIC_FormatUpgrade(TEnumAsByte<EFormatWeaponStatType>* StatFormat, TEnumAsByte<EFormatPreviewStatusType>* PreviewFormat, class UObject** __WorldContext, struct FUpgradeValues* UpgradeValues, struct FText* BaseText, struct FText* UpgradeText, struct FText* Value, EItemPreviewStatus* Format, bool* HasAnyupgrades);
	void STATIC_UPGDESC_Generic(class AFSDPlayerState** Player, class UClass** Item, class UItemUpgrade** upgradeType, bool* UseCustomText, struct FText* Text, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_CryoSprayProjectile(class UClass** Item, class AFSDPlayerState** Player, class UClass** projectileClass, struct FText* UpgradeText, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_DamageBonus_Random(class UClass** Item, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_HitCounter(class UClass** Item, class AFSDPlayerState** Player, class UClass** HitCounterClass, struct FText* Upgrade_Text, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_FormatToPercentageNormalized(float* Base_Value, float* Upgrade_Value, float* Old_Upgrade_Value, float* Final_Value, TEnumAsByte<EFormatWeaponStatType>* FormatType, class UObject** __WorldContext, struct FText* Base_Text, struct FText* Upgrade_Text, struct FText* Value);
	void STATIC_UPGDESC_AmmoDrivenEx(class UClass** Item, class AFSDPlayerState** Player, class UObject** __WorldContext, TArray<EAmmoDrivenWeapnUpgradeType>* UpgradeTypes, TArray<struct FGearStatEntry>* GearStats);
	EItemPreviewStatus STATIC_FormatPreviewStatus(bool* FormatValue, TEnumAsByte<EFormatPreviewStatusType>* FormatType, class UObject** __WorldContext, struct FUpgradeValues* UpgradeValues);
	void STATIC_UPGDESC_DualMPs(class UClass** Item, class AFSDPlayerState** Player, EDualMachinePistolsUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_SentryGun(class UClass** Item, class AFSDPlayerState** Player, ESentryGunUpgradeType* Upgrade_Type, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Has_Upgraded_Value);
	void STATIC_UPGDESC_Detpack(class UClass** Item, class AFSDPlayerState** PlayerState, EDetPackUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_Flaregun(class UClass** Item, class AFSDPlayerState** PlayerState, EFlaregunUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_ArmorStat(class AFSDPlayerState** Player, class UClass** armorClass, class UPawnStat** Stat, struct FText* Text, TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Changed);
	void STATIC_UPGDESC_TriggeredStat(class AFSDPlayerState** Player, class UClass** Item, class UClass** Status_Effect, struct FText* Text, ETriggeredStatusEffectType* Type, TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FGearStatEntry* gear_stat_entry, bool* is_upgraded);
	void STATIC_UPGDESC_PlatformGun(class UClass** Item, class AFSDPlayerState** Player, EPlatformGunUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Should_show_text);
	void STATIC_UPGDESC_Bosco(class UClass** upgradedItem, class AFSDPlayerState** Player, EBoscoUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasChanged);
	void STATIC_UPGDESC_CoooldownAggregator(class UClass** Item, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_GrapplingHook(class UClass** Item, class AFSDPlayerState** Player, EGrapplingHookUpgrade* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_FlaregunProjectile(class UClass** Item, class AFSDPlayerState** Player, EFlaregunProjectileUpgrades* upgradeType, class UClass** upgradedActor, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_ZiplineGun(class UClass** Item, class AFSDPlayerState** Player, EZiplineGunUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_Grenades(class UClass** Item, class AFSDPlayerState** Player, EGrenadeUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry);
	void STATIC_UPGDESC_Pickaxe(class UClass** Item, class AFSDPlayerState** Player, EManualMiningUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_LineCutterProjectile(class UClass** Item, class AFSDPlayerState** Player, ELineCutterProjectileUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_CombatShotgun(class UClass** Item, class AFSDPlayerState** Player, EAutoShotgunUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_ChargedProjectile(class UClass** Item, class AFSDPlayerState** Player, EChargedProjectileUpgrades* upgradeType, class UClass** upgradedActor, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_StickyFlame(class UClass** Item, class AFSDPlayerState** Player, class UClass** StatusEffect, struct FText* Text, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_SawedOff(class UClass** Item, class AFSDPlayerState** Player, ESawedOffShotgunUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_Armor(class AFSDPlayerState** Player, class UClass** armorClass, EArmorUpgradeType* Armor_Upgrade_Type, struct FText* Text, TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry);
	void STATIC_UPGDESC_BurstWeapon(class UClass** Item, class AFSDPlayerState** Player, EBurstWeaponUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_DamageBonus_AoEFear(class UClass** Item, class AFSDPlayerState** Player, struct FText* StatName, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_DamageBonus_HotBullets(class UClass** Item, class AFSDPlayerState** Player, class UDamageClass** DamageClass, struct FText* StatName, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_BeltDriven(class UClass** Item, class AFSDPlayerState** Player, EBeltDrivenWeaponUpgrade* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_AutoCannon(class UClass** Item, class AFSDPlayerState** Player, EAutoCannonUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_FormatValues(TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FUpgradeValues* UpgradeValues, struct FText* BaseText, struct FText* UpgradeText, struct FText* Value);
	void STATIC_UPGDESC_AssaultRifle(class UClass** Item, class AFSDPlayerState** Player, EAssaultRifleUpgrade* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_GatlingGun(class UClass** Item, class AFSDPlayerState** Player, EGatlingGunUpgrade* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_ShieldRegenerator(class UClass** Item, class AFSDPlayerState** Player, EArmorRegeneratorUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_FormatCmtoM(float* Base_Value, float* Upgrade_Value, float* Old_Upgrade_Value, float* Final_Value, class UObject** __WorldContext, struct FText* Base_Text, struct FText* Upgrade_Text, struct FText* Value);
	void STATIC_FormatPercentage(float* Base_Value, float* Upgraded_Value, float* Old_Upgraded_Value, float* Final_Value, TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FText* Base_Text, struct FText* Upgrade_Text, struct FText* Value);
	void STATIC_UPGDESC_Cryospray(class UClass** Item, class AFSDPlayerState** Player, ECryoSprayUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_FlameThrower(class UClass** Item, class AFSDPlayerState** Player, EFlameThrowerUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_ChargedWeapon(class UClass** Item, class AFSDPlayerState** Player, EChargedWeaponUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_Projectile(class UClass** Item, class UClass** upgradedItem, class AFSDPlayerState** Player, EProjectileUpgrade* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_BoltAction(class UClass** Item, class AFSDPlayerState** Player, EBoltActionRifleUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_DamageBonus_TargetStateBonus(class UClass** Item, class AFSDPlayerState** Player, struct FText* StatName, ETargetStateDamageBonusType* TargetState, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_DamageBonus_TargetTypeBonus(class UClass** Item, class AFSDPlayerState** Player, struct FText* StatName, struct FName* Key, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_DamageBonus_StatusBonus(class UClass** Item, class AFSDPlayerState** Player, class UClass** SstatusEffectIn, struct FText* StatName, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_ElectricalSMG(class UClass** Item, class AFSDPlayerState** Player, EElectricalSMGUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_DamageBonus_Flat(class UClass** Item, class AFSDPlayerState** Player, class UDamageClass** DamageClass, struct FText* StatName, TEnumAsByte<EFormatPreviewStatusType>* FormatType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_DamageBonus_DamageConversion(class UClass** Item, class UClass** upgradedItem, class AFSDPlayerState** Player, class UDamageClass** DamageClass, struct FText* StatName, bool* OverrideStatType, TEnumAsByte<EFormatWeaponStatType>* StatTypeOverride, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_DamageBonus_PushStatus(class UClass** Item, class AFSDPlayerState** Player, class UClass** StatusEffect, struct FText* StatName, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_AmmoDriven(class UClass** Item, class AFSDPlayerState** Player, EAmmoDrivenWeapnUpgradeType* upgradeType, bool* OverrideStatType, TEnumAsByte<EFormatWeaponStatType>* StatTypeOverride, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	void STATIC_FormatValue(float* BaseValue, float* UpgradeValue, float* OldUpgradeValue, EItemPreviewStatus* PreviewStatus, float* FinalValue, TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FText* BaseText, struct FText* UpgradeText, struct FText* Value);
	void STATIC_UPGDESC_Damage(class UClass** upgradedItem, EDamageUpgrade* upgradeType, struct FText* Prefix, EDamageComponentType* DamageComponentType, class UObject** __WorldContext, class UClass** Item, class AFSDPlayerState** Player, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_HitScan(class UClass** Item, class AFSDPlayerState** Player, EHitScanBaseUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	void STATIC_UPGDESC_SingleUsable_UseDuration(class UClass** Item, class UClass** subItem, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry);
	void STATIC_UPGDESC_SentryGun_Capacity(class UClass** Item, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry);
	void STATIC_UPGDESC_Item(class AFSDPlayerState** Player, class UClass** Item, EInventoryItemUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	void STATIC_UPGDESC_Flare_Base(class UClass** flareClass, class AFSDPlayerState** Player, EFlareUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry);
	void STATIC_UPGDESC_Drills(class UClass** Item, class AFSDPlayerState** Player, EAutoMinerUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Has_Upgraded_Value);
	void STATIC_UPGDESC_Capacity(class UClass** upgradedItem, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry);
	void STATIC_UPGDESC_Explosion_Damage(class UClass** upgradedItem, class UClass** componentItem, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry);
	void STATIC_UPGDESC_Explosion_Radius(class UClass** upgradedItem, class UClass** componentItem, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry);
	void STATIC_UPGDESC_HitScan_Bullets(class UClass** Item, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
