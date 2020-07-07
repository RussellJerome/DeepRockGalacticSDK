// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BPL_UpgradeHelpers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatUpgradeToEntry
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FUpgradeValues          UpgradeValues                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EFormatWeaponStatType>* StatFormat                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFormatPreviewStatusType>* PreviewFormat                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasAnyupgrades                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_FormatUpgradeToEntry(TEnumAsByte<EFormatWeaponStatType>* StatFormat, TEnumAsByte<EFormatPreviewStatusType>* PreviewFormat, class UObject** __WorldContext, struct FText* Text, struct FUpgradeValues* UpgradeValues, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatUpgradeToEntry");

	UBPL_UpgradeHelpers_C_FormatUpgradeToEntry_Params params;
	params.StatFormat = StatFormat;
	params.PreviewFormat = PreviewFormat;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (UpgradeValues != nullptr)
		*UpgradeValues = params.UpgradeValues;
	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasAnyupgrades != nullptr)
		*HasAnyupgrades = params.HasAnyupgrades;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatUpgrade
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUpgradeValues          UpgradeValues                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EFormatWeaponStatType>* StatFormat                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFormatPreviewStatusType>* PreviewFormat                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   BaseText                       (Parm, OutParm)
// struct FText                   UpgradeText                    (Parm, OutParm)
// struct FText                   Value                          (Parm, OutParm)
// EItemPreviewStatus             Format                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasAnyupgrades                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_FormatUpgrade(TEnumAsByte<EFormatWeaponStatType>* StatFormat, TEnumAsByte<EFormatPreviewStatusType>* PreviewFormat, class UObject** __WorldContext, struct FUpgradeValues* UpgradeValues, struct FText* BaseText, struct FText* UpgradeText, struct FText* Value, EItemPreviewStatus* Format, bool* HasAnyupgrades)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatUpgrade");

	UBPL_UpgradeHelpers_C_FormatUpgrade_Params params;
	params.StatFormat = StatFormat;
	params.PreviewFormat = PreviewFormat;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpgradeValues != nullptr)
		*UpgradeValues = params.UpgradeValues;
	if (BaseText != nullptr)
		*BaseText = params.BaseText;
	if (UpgradeText != nullptr)
		*UpgradeText = params.UpgradeText;
	if (Value != nullptr)
		*Value = params.Value;
	if (Format != nullptr)
		*Format = params.Format;
	if (HasAnyupgrades != nullptr)
		*HasAnyupgrades = params.HasAnyupgrades;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Generic
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemUpgrade**           upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseCustomText                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Generic(class AFSDPlayerState** Player, class UClass** Item, class UItemUpgrade** upgradeType, bool* UseCustomText, struct FText* Text, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Generic");

	UBPL_UpgradeHelpers_C_UPGDESC_Generic_Params params;
	params.Player = Player;
	params.Item = Item;
	params.upgradeType = upgradeType;
	params.UseCustomText = UseCustomText;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CryoSprayProjectile
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 projectileClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  UpgradeText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_CryoSprayProjectile(class UClass** Item, class AFSDPlayerState** Player, class UClass** projectileClass, struct FText* UpgradeText, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CryoSprayProjectile");

	UBPL_UpgradeHelpers_C_UPGDESC_CryoSprayProjectile_Params params;
	params.Item = Item;
	params.Player = Player;
	params.projectileClass = projectileClass;
	params.UpgradeText = UpgradeText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Random
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_DamageBonus_Random(class UClass** Item, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Random");

	UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_Random_Params params;
	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitCounter
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 HitCounterClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Upgrade_Text                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_HitCounter(class UClass** Item, class AFSDPlayerState** Player, class UClass** HitCounterClass, struct FText* Upgrade_Text, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitCounter");

	UBPL_UpgradeHelpers_C_UPGDESC_HitCounter_Params params;
	params.Item = Item;
	params.Player = Player;
	params.HitCounterClass = HitCounterClass;
	params.Upgrade_Text = Upgrade_Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatToPercentageNormalized
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Base_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Upgrade_Value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Old_Upgrade_Value              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Final_Value                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFormatWeaponStatType>* FormatType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Base_Text                      (Parm, OutParm)
// struct FText                   Upgrade_Text                   (Parm, OutParm)
// struct FText                   Value                          (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_FormatToPercentageNormalized(float* Base_Value, float* Upgrade_Value, float* Old_Upgrade_Value, float* Final_Value, TEnumAsByte<EFormatWeaponStatType>* FormatType, class UObject** __WorldContext, struct FText* Base_Text, struct FText* Upgrade_Text, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatToPercentageNormalized");

	UBPL_UpgradeHelpers_C_FormatToPercentageNormalized_Params params;
	params.Base_Value = Base_Value;
	params.Upgrade_Value = Upgrade_Value;
	params.Old_Upgrade_Value = Old_Upgrade_Value;
	params.Final_Value = Final_Value;
	params.FormatType = FormatType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Base_Text != nullptr)
		*Base_Text = params.Base_Text;
	if (Upgrade_Text != nullptr)
		*Upgrade_Text = params.Upgrade_Text;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDrivenEx
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<EAmmoDrivenWeapnUpgradeType> UpgradeTypes                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FGearStatEntry>  GearStats                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_AmmoDrivenEx(class UClass** Item, class AFSDPlayerState** Player, class UObject** __WorldContext, TArray<EAmmoDrivenWeapnUpgradeType>* UpgradeTypes, TArray<struct FGearStatEntry>* GearStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDrivenEx");

	UBPL_UpgradeHelpers_C_UPGDESC_AmmoDrivenEx_Params params;
	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpgradeTypes != nullptr)
		*UpgradeTypes = params.UpgradeTypes;
	if (GearStats != nullptr)
		*GearStats = params.GearStats;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPreviewStatus
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool*                          FormatValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUpgradeValues          UpgradeValues                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EFormatPreviewStatusType>* FormatType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemPreviewStatus             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EItemPreviewStatus UBPL_UpgradeHelpers_C::STATIC_FormatPreviewStatus(bool* FormatValue, TEnumAsByte<EFormatPreviewStatusType>* FormatType, class UObject** __WorldContext, struct FUpgradeValues* UpgradeValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPreviewStatus");

	UBPL_UpgradeHelpers_C_FormatPreviewStatus_Params params;
	params.FormatValue = FormatValue;
	params.FormatType = FormatType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpgradeValues != nullptr)
		*UpgradeValues = params.UpgradeValues;

	return params.ReturnValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DualMPs
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDualMachinePistolsUpgrades*   upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_DualMPs(class UClass** Item, class AFSDPlayerState** Player, EDualMachinePistolsUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DualMPs");

	UBPL_UpgradeHelpers_C_UPGDESC_DualMPs_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SentryGun
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESentryGunUpgradeType*         Upgrade_Type                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           Has_Upgraded_Value             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_SentryGun(class UClass** Item, class AFSDPlayerState** Player, ESentryGunUpgradeType* Upgrade_Type, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Has_Upgraded_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SentryGun");

	UBPL_UpgradeHelpers_C_UPGDESC_SentryGun_Params params;
	params.Item = Item;
	params.Player = Player;
	params.Upgrade_Type = Upgrade_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (Has_Upgraded_Value != nullptr)
		*Has_Upgraded_Value = params.Has_Upgraded_Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Detpack
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDetPackUpgrades*              upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Detpack(class UClass** Item, class AFSDPlayerState** PlayerState, EDetPackUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Detpack");

	UBPL_UpgradeHelpers_C_UPGDESC_Detpack_Params params;
	params.Item = Item;
	params.PlayerState = PlayerState;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flaregun
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFlaregunUpgrades*             upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Flaregun(class UClass** Item, class AFSDPlayerState** PlayerState, EFlaregunUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flaregun");

	UBPL_UpgradeHelpers_C_UPGDESC_Flaregun_Params params;
	params.Item = Item;
	params.PlayerState = PlayerState;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ArmorStat
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 armorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPawnStat**              Stat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EFormatWeaponStatType>* Format                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_ArmorStat(class AFSDPlayerState** Player, class UClass** armorClass, class UPawnStat** Stat, struct FText* Text, TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ArmorStat");

	UBPL_UpgradeHelpers_C_UPGDESC_ArmorStat_Params params;
	params.Player = Player;
	params.armorClass = armorClass;
	params.Stat = Stat;
	params.Text = Text;
	params.Format = Format;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_TriggeredStat
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Status_Effect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// ETriggeredStatusEffectType*    Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFormatWeaponStatType>* Format                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          gear_stat_entry                (Parm, OutParm)
// bool                           is_upgraded                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_TriggeredStat(class AFSDPlayerState** Player, class UClass** Item, class UClass** Status_Effect, struct FText* Text, ETriggeredStatusEffectType* Type, TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FGearStatEntry* gear_stat_entry, bool* is_upgraded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_TriggeredStat");

	UBPL_UpgradeHelpers_C_UPGDESC_TriggeredStat_Params params;
	params.Player = Player;
	params.Item = Item;
	params.Status_Effect = Status_Effect;
	params.Text = Text;
	params.Type = Type;
	params.Format = Format;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (gear_stat_entry != nullptr)
		*gear_stat_entry = params.gear_stat_entry;
	if (is_upgraded != nullptr)
		*is_upgraded = params.is_upgraded;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_PlatformGun
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPlatformGunUpgrades*          upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           Should_show_text               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_PlatformGun(class UClass** Item, class AFSDPlayerState** Player, EPlatformGunUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Should_show_text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_PlatformGun");

	UBPL_UpgradeHelpers_C_UPGDESC_PlatformGun_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (Should_show_text != nullptr)
		*Should_show_text = params.Should_show_text;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Bosco
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 upgradedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBoscoUpgrades*                upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasChanged                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Bosco(class UClass** upgradedItem, class AFSDPlayerState** Player, EBoscoUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Bosco");

	UBPL_UpgradeHelpers_C_UPGDESC_Bosco_Params params;
	params.upgradedItem = upgradedItem;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasChanged != nullptr)
		*HasChanged = params.HasChanged;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CoooldownAggregator
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_CoooldownAggregator(class UClass** Item, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CoooldownAggregator");

	UBPL_UpgradeHelpers_C_UPGDESC_CoooldownAggregator_Params params;
	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GrapplingHook
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EGrapplingHookUpgrade*         upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_GrapplingHook(class UClass** Item, class AFSDPlayerState** Player, EGrapplingHookUpgrade* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GrapplingHook");

	UBPL_UpgradeHelpers_C_UPGDESC_GrapplingHook_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlaregunProjectile
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFlaregunProjectileUpgrades*   upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 upgradedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_FlaregunProjectile(class UClass** Item, class AFSDPlayerState** Player, EFlaregunProjectileUpgrades* upgradeType, class UClass** upgradedActor, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlaregunProjectile");

	UBPL_UpgradeHelpers_C_UPGDESC_FlaregunProjectile_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.upgradedActor = upgradedActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ZiplineGun
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EZiplineGunUpgrades*           upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_ZiplineGun(class UClass** Item, class AFSDPlayerState** Player, EZiplineGunUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ZiplineGun");

	UBPL_UpgradeHelpers_C_UPGDESC_ZiplineGun_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Grenades
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EGrenadeUpgradeType*           upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Grenades(class UClass** Item, class AFSDPlayerState** Player, EGrenadeUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Grenades");

	UBPL_UpgradeHelpers_C_UPGDESC_Grenades_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Pickaxe
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EManualMiningUpgradeType*      upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Pickaxe(class UClass** Item, class AFSDPlayerState** Player, EManualMiningUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Pickaxe");

	UBPL_UpgradeHelpers_C_UPGDESC_Pickaxe_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_LineCutterProjectile
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ELineCutterProjectileUpgradeType* upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_LineCutterProjectile(class UClass** Item, class AFSDPlayerState** Player, ELineCutterProjectileUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_LineCutterProjectile");

	UBPL_UpgradeHelpers_C_UPGDESC_LineCutterProjectile_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CombatShotgun
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAutoShotgunUpgrades*          upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_CombatShotgun(class UClass** Item, class AFSDPlayerState** Player, EAutoShotgunUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CombatShotgun");

	UBPL_UpgradeHelpers_C_UPGDESC_CombatShotgun_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedProjectile
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EChargedProjectileUpgrades*    upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 upgradedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_ChargedProjectile(class UClass** Item, class AFSDPlayerState** Player, EChargedProjectileUpgrades* upgradeType, class UClass** upgradedActor, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedProjectile");

	UBPL_UpgradeHelpers_C_UPGDESC_ChargedProjectile_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.upgradedActor = upgradedActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_StickyFlame
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 StatusEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_StickyFlame(class UClass** Item, class AFSDPlayerState** Player, class UClass** StatusEffect, struct FText* Text, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_StickyFlame");

	UBPL_UpgradeHelpers_C_UPGDESC_StickyFlame_Params params;
	params.Item = Item;
	params.Player = Player;
	params.StatusEffect = StatusEffect;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SawedOff
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESawedOffShotgunUpgrades*      upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_SawedOff(class UClass** Item, class AFSDPlayerState** Player, ESawedOffShotgunUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SawedOff");

	UBPL_UpgradeHelpers_C_UPGDESC_SawedOff_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Armor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 armorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorUpgradeType*             Armor_Upgrade_Type             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EFormatWeaponStatType>* Format                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Armor(class AFSDPlayerState** Player, class UClass** armorClass, EArmorUpgradeType* Armor_Upgrade_Type, struct FText* Text, TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Armor");

	UBPL_UpgradeHelpers_C_UPGDESC_Armor_Params params;
	params.Player = Player;
	params.armorClass = armorClass;
	params.Armor_Upgrade_Type = Armor_Upgrade_Type;
	params.Text = Text;
	params.Format = Format;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BurstWeapon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBurstWeaponUpgrades*          upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_BurstWeapon(class UClass** Item, class AFSDPlayerState** Player, EBurstWeaponUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BurstWeapon");

	UBPL_UpgradeHelpers_C_UPGDESC_BurstWeapon_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_AoEFear
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  StatName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_DamageBonus_AoEFear(class UClass** Item, class AFSDPlayerState** Player, struct FText* StatName, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_AoEFear");

	UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_AoEFear_Params params;
	params.Item = Item;
	params.Player = Player;
	params.StatName = StatName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_HotBullets
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageClass**           DamageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  StatName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_DamageBonus_HotBullets(class UClass** Item, class AFSDPlayerState** Player, class UDamageClass** DamageClass, struct FText* StatName, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_HotBullets");

	UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_HotBullets_Params params;
	params.Item = Item;
	params.Player = Player;
	params.DamageClass = DamageClass;
	params.StatName = StatName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BeltDriven
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBeltDrivenWeaponUpgrade*      upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_BeltDriven(class UClass** Item, class AFSDPlayerState** Player, EBeltDrivenWeaponUpgrade* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BeltDriven");

	UBPL_UpgradeHelpers_C_UPGDESC_BeltDriven_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AutoCannon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAutoCannonUpgrades*           upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_AutoCannon(class UClass** Item, class AFSDPlayerState** Player, EAutoCannonUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AutoCannon");

	UBPL_UpgradeHelpers_C_UPGDESC_AutoCannon_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValues
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FUpgradeValues          UpgradeValues                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EFormatWeaponStatType>* Format                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   BaseText                       (Parm, OutParm)
// struct FText                   UpgradeText                    (Parm, OutParm)
// struct FText                   Value                          (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_FormatValues(TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FUpgradeValues* UpgradeValues, struct FText* BaseText, struct FText* UpgradeText, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValues");

	UBPL_UpgradeHelpers_C_FormatValues_Params params;
	params.Format = Format;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpgradeValues != nullptr)
		*UpgradeValues = params.UpgradeValues;
	if (BaseText != nullptr)
		*BaseText = params.BaseText;
	if (UpgradeText != nullptr)
		*UpgradeText = params.UpgradeText;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AssaultRifle
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAssaultRifleUpgrade*          upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_AssaultRifle(class UClass** Item, class AFSDPlayerState** Player, EAssaultRifleUpgrade* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AssaultRifle");

	UBPL_UpgradeHelpers_C_UPGDESC_AssaultRifle_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GatlingGun
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EGatlingGunUpgrade*            upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_GatlingGun(class UClass** Item, class AFSDPlayerState** Player, EGatlingGunUpgrade* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GatlingGun");

	UBPL_UpgradeHelpers_C_UPGDESC_GatlingGun_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ShieldRegenerator
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorRegeneratorUpgrades*     upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_ShieldRegenerator(class UClass** Item, class AFSDPlayerState** Player, EArmorRegeneratorUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ShieldRegenerator");

	UBPL_UpgradeHelpers_C_UPGDESC_ShieldRegenerator_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatCmtoM
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Base_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Upgrade_Value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Old_Upgrade_Value              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Final_Value                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Base_Text                      (Parm, OutParm)
// struct FText                   Upgrade_Text                   (Parm, OutParm)
// struct FText                   Value                          (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_FormatCmtoM(float* Base_Value, float* Upgrade_Value, float* Old_Upgrade_Value, float* Final_Value, class UObject** __WorldContext, struct FText* Base_Text, struct FText* Upgrade_Text, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatCmtoM");

	UBPL_UpgradeHelpers_C_FormatCmtoM_Params params;
	params.Base_Value = Base_Value;
	params.Upgrade_Value = Upgrade_Value;
	params.Old_Upgrade_Value = Old_Upgrade_Value;
	params.Final_Value = Final_Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Base_Text != nullptr)
		*Base_Text = params.Base_Text;
	if (Upgrade_Text != nullptr)
		*Upgrade_Text = params.Upgrade_Text;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPercentage
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Base_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Upgraded_Value                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Old_Upgraded_Value             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Final_Value                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFormatWeaponStatType>* Format                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Base_Text                      (Parm, OutParm)
// struct FText                   Upgrade_Text                   (Parm, OutParm)
// struct FText                   Value                          (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_FormatPercentage(float* Base_Value, float* Upgraded_Value, float* Old_Upgraded_Value, float* Final_Value, TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FText* Base_Text, struct FText* Upgrade_Text, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPercentage");

	UBPL_UpgradeHelpers_C_FormatPercentage_Params params;
	params.Base_Value = Base_Value;
	params.Upgraded_Value = Upgraded_Value;
	params.Old_Upgraded_Value = Old_Upgraded_Value;
	params.Final_Value = Final_Value;
	params.Format = Format;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Base_Text != nullptr)
		*Base_Text = params.Base_Text;
	if (Upgrade_Text != nullptr)
		*Upgrade_Text = params.Upgrade_Text;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Cryospray
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECryoSprayUpgrades*            upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Cryospray(class UClass** Item, class AFSDPlayerState** Player, ECryoSprayUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Cryospray");

	UBPL_UpgradeHelpers_C_UPGDESC_Cryospray_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlameThrower
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFlameThrowerUpgradeType*      upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_FlameThrower(class UClass** Item, class AFSDPlayerState** Player, EFlameThrowerUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlameThrower");

	UBPL_UpgradeHelpers_C_UPGDESC_FlameThrower_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedWeapon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EChargedWeaponUpgrades*        upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_ChargedWeapon(class UClass** Item, class AFSDPlayerState** Player, EChargedWeaponUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedWeapon");

	UBPL_UpgradeHelpers_C_UPGDESC_ChargedWeapon_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Projectile
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 upgradedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EProjectileUpgrade*            upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Projectile(class UClass** Item, class UClass** upgradedItem, class AFSDPlayerState** Player, EProjectileUpgrade* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Projectile");

	UBPL_UpgradeHelpers_C_UPGDESC_Projectile_Params params;
	params.Item = Item;
	params.upgradedItem = upgradedItem;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BoltAction
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBoltActionRifleUpgrades*      upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_BoltAction(class UClass** Item, class AFSDPlayerState** Player, EBoltActionRifleUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BoltAction");

	UBPL_UpgradeHelpers_C_UPGDESC_BoltAction_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetStateBonus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  StatName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// ETargetStateDamageBonusType*   TargetState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_DamageBonus_TargetStateBonus(class UClass** Item, class AFSDPlayerState** Player, struct FText* StatName, ETargetStateDamageBonusType* TargetState, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetStateBonus");

	UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_TargetStateBonus_Params params;
	params.Item = Item;
	params.Player = Player;
	params.StatName = StatName;
	params.TargetState = TargetState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetTypeBonus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  StatName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName*                  Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_DamageBonus_TargetTypeBonus(class UClass** Item, class AFSDPlayerState** Player, struct FText* StatName, struct FName* Key, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetTypeBonus");

	UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_TargetTypeBonus_Params params;
	params.Item = Item;
	params.Player = Player;
	params.StatName = StatName;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_StatusBonus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SstatusEffectIn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  StatName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_DamageBonus_StatusBonus(class UClass** Item, class AFSDPlayerState** Player, class UClass** SstatusEffectIn, struct FText* StatName, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_StatusBonus");

	UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_StatusBonus_Params params;
	params.Item = Item;
	params.Player = Player;
	params.SstatusEffectIn = SstatusEffectIn;
	params.StatName = StatName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ElectricalSMG
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EElectricalSMGUpgrades*        upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_ElectricalSMG(class UClass** Item, class AFSDPlayerState** Player, EElectricalSMGUpgrades* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ElectricalSMG");

	UBPL_UpgradeHelpers_C_UPGDESC_ElectricalSMG_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Flat
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageClass**           DamageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  StatName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EFormatPreviewStatusType>* FormatType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_DamageBonus_Flat(class UClass** Item, class AFSDPlayerState** Player, class UDamageClass** DamageClass, struct FText* StatName, TEnumAsByte<EFormatPreviewStatusType>* FormatType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Flat");

	UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_Flat_Params params;
	params.Item = Item;
	params.Player = Player;
	params.DamageClass = DamageClass;
	params.StatName = StatName;
	params.FormatType = FormatType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_DamageConversion
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 upgradedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageClass**           DamageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  StatName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          OverrideStatType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFormatWeaponStatType>* StatTypeOverride               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_DamageBonus_DamageConversion(class UClass** Item, class UClass** upgradedItem, class AFSDPlayerState** Player, class UDamageClass** DamageClass, struct FText* StatName, bool* OverrideStatType, TEnumAsByte<EFormatWeaponStatType>* StatTypeOverride, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_DamageConversion");

	UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_DamageConversion_Params params;
	params.Item = Item;
	params.upgradedItem = upgradedItem;
	params.Player = Player;
	params.DamageClass = DamageClass;
	params.StatName = StatName;
	params.OverrideStatType = OverrideStatType;
	params.StatTypeOverride = StatTypeOverride;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_PushStatus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 StatusEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  StatName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_DamageBonus_PushStatus(class UClass** Item, class AFSDPlayerState** Player, class UClass** StatusEffect, struct FText* StatName, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_PushStatus");

	UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_PushStatus_Params params;
	params.Item = Item;
	params.Player = Player;
	params.StatusEffect = StatusEffect;
	params.StatName = StatName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAmmoDrivenWeapnUpgradeType*   upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          OverrideStatType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFormatWeaponStatType>* StatTypeOverride               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasAnyupgrades                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_AmmoDriven(class UClass** Item, class AFSDPlayerState** Player, EAmmoDrivenWeapnUpgradeType* upgradeType, bool* OverrideStatType, TEnumAsByte<EFormatWeaponStatType>* StatTypeOverride, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven");

	UBPL_UpgradeHelpers_C_UPGDESC_AmmoDriven_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.OverrideStatType = OverrideStatType;
	params.StatTypeOverride = StatTypeOverride;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasAnyupgrades != nullptr)
		*HasAnyupgrades = params.HasAnyupgrades;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValue
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         BaseValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         UpgradeValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         OldUpgradeValue                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemPreviewStatus*            PreviewStatus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FinalValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFormatWeaponStatType>* Format                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   BaseText                       (Parm, OutParm)
// struct FText                   UpgradeText                    (Parm, OutParm)
// struct FText                   Value                          (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_FormatValue(float* BaseValue, float* UpgradeValue, float* OldUpgradeValue, EItemPreviewStatus* PreviewStatus, float* FinalValue, TEnumAsByte<EFormatWeaponStatType>* Format, class UObject** __WorldContext, struct FText* BaseText, struct FText* UpgradeText, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValue");

	UBPL_UpgradeHelpers_C_FormatValue_Params params;
	params.BaseValue = BaseValue;
	params.UpgradeValue = UpgradeValue;
	params.OldUpgradeValue = OldUpgradeValue;
	params.PreviewStatus = PreviewStatus;
	params.FinalValue = FinalValue;
	params.Format = Format;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BaseText != nullptr)
		*BaseText = params.BaseText;
	if (UpgradeText != nullptr)
		*UpgradeText = params.UpgradeText;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Damage
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass**                 upgradedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState*         Player                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EDamageUpgrade*                upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Prefix                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EDamageComponentType*          DamageComponentType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Damage(class UClass** upgradedItem, EDamageUpgrade* upgradeType, struct FText* Prefix, EDamageComponentType* DamageComponentType, class UObject** __WorldContext, class UClass** Item, class AFSDPlayerState** Player, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Damage");

	UBPL_UpgradeHelpers_C_UPGDESC_Damage_Params params;
	params.upgradedItem = upgradedItem;
	params.upgradeType = upgradeType;
	params.Prefix = Prefix;
	params.DamageComponentType = DamageComponentType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Player != nullptr)
		*Player = params.Player;
	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EHitScanBaseUpgradeType*       upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasAnyupgrades                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_HitScan(class UClass** Item, class AFSDPlayerState** Player, EHitScanBaseUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan");

	UBPL_UpgradeHelpers_C_UPGDESC_HitScan_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasAnyupgrades != nullptr)
		*HasAnyupgrades = params.HasAnyupgrades;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SingleUsable_UseDuration
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 subItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_SingleUsable_UseDuration(class UClass** Item, class UClass** subItem, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SingleUsable_UseDuration");

	UBPL_UpgradeHelpers_C_UPGDESC_SingleUsable_UseDuration_Params params;
	params.Item = Item;
	params.subItem = subItem;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SentryGun_Capacity
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_SentryGun_Capacity(class UClass** Item, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SentryGun_Capacity");

	UBPL_UpgradeHelpers_C_UPGDESC_SentryGun_Capacity_Params params;
	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Item
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInventoryItemUpgradeType*     upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Item(class AFSDPlayerState** Player, class UClass** Item, EInventoryItemUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Item");

	UBPL_UpgradeHelpers_C_UPGDESC_Item_Params params;
	params.Player = Player;
	params.Item = Item;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flare_Base
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 flareClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFlareUpgradeType*             upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Flare_Base(class UClass** flareClass, class AFSDPlayerState** Player, EFlareUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flare_Base");

	UBPL_UpgradeHelpers_C_UPGDESC_Flare_Base_Params params;
	params.flareClass = flareClass;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Drills
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAutoMinerUpgradeType*         upgradeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           Has_Upgraded_Value             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Drills(class UClass** Item, class AFSDPlayerState** Player, EAutoMinerUpgradeType* upgradeType, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Has_Upgraded_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Drills");

	UBPL_UpgradeHelpers_C_UPGDESC_Drills_Params params;
	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (Has_Upgraded_Value != nullptr)
		*Has_Upgraded_Value = params.Has_Upgraded_Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Capacity
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 upgradedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Capacity(class UClass** upgradedItem, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Capacity");

	UBPL_UpgradeHelpers_C_UPGDESC_Capacity_Params params;
	params.upgradedItem = upgradedItem;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Explosion_Damage
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 upgradedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 componentItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Explosion_Damage(class UClass** upgradedItem, class UClass** componentItem, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Explosion_Damage");

	UBPL_UpgradeHelpers_C_UPGDESC_Explosion_Damage_Params params;
	params.upgradedItem = upgradedItem;
	params.componentItem = componentItem;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Explosion_Radius
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 upgradedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 componentItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_Explosion_Radius(class UClass** upgradedItem, class UClass** componentItem, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Explosion_Radius");

	UBPL_UpgradeHelpers_C_UPGDESC_Explosion_Radius_Params params;
	params.upgradedItem = upgradedItem;
	params.componentItem = componentItem;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan_Bullets
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (Parm, OutParm)
// bool                           HasUpgradedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPL_UpgradeHelpers_C::STATIC_UPGDESC_HitScan_Bullets(class UClass** Item, class AFSDPlayerState** Player, class UObject** __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan_Bullets");

	UBPL_UpgradeHelpers_C_UPGDESC_HitScan_Bullets_Params params;
	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
