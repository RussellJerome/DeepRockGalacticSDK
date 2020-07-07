// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Game_UI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_Game_UI.LIB_Game_UI_C.GetArmorTypeInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EArmorType*                    Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Display_Text                   (Parm, OutParm)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_UI_C::STATIC_GetArmorTypeInfo(EArmorType* Type, class UObject** __WorldContext, struct FText* Display_Text, class UTexture2D** Icon, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetArmorTypeInfo");

	ULIB_Game_UI_C_GetArmorTypeInfo_Params params;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Display_Text != nullptr)
		*Display_Text = params.Display_Text;
	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyTypeInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EEnemyType*                    Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Display_Text                   (Parm, OutParm)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            IconColor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_UI_C::STATIC_GetEnemyTypeInfo(EEnemyType* Type, class UObject** __WorldContext, struct FText* Display_Text, class UTexture2D** Icon, struct FLinearColor* IconColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyTypeInfo");

	ULIB_Game_UI_C_GetEnemyTypeInfo_Params params;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Display_Text != nullptr)
		*Display_Text = params.Display_Text;
	if (Icon != nullptr)
		*Icon = params.Icon;
	if (IconColor != nullptr)
		*IconColor = params.IconColor;
}


// Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyFamilyInfo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EEnemyFamily*                  Family                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm, OutParm)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_UI_C::STATIC_GetEnemyFamilyInfo(EEnemyFamily* Family, class UObject** __WorldContext, struct FText* Name, class UTexture2D** Icon, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyFamilyInfo");

	ULIB_Game_UI_C_GetEnemyFamilyInfo_Params params;
	params.Family = Family;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function LIB_Game_UI.LIB_Game_UI_C.GetPickaxePartLocationTitle
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPickaxePartLocation*          InPartLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UpperCase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutTitle                       (Parm, OutParm)

void ULIB_Game_UI_C::STATIC_GetPickaxePartLocationTitle(EPickaxePartLocation* InPartLocation, bool* UpperCase, class UObject** __WorldContext, struct FText* OutTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetPickaxePartLocationTitle");

	ULIB_Game_UI_C_GetPickaxePartLocationTitle_Params params;
	params.InPartLocation = InPartLocation;
	params.UpperCase = UpperCase;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTitle != nullptr)
		*OutTitle = params.OutTitle;
}


// Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotTitle
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EVanitySlot*                   InVanitySlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UpperCase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutTitle                       (Parm, OutParm)

void ULIB_Game_UI_C::STATIC_GetVanitySlotTitle(EVanitySlot* InVanitySlot, bool* UpperCase, class UObject** __WorldContext, struct FText* OutTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotTitle");

	ULIB_Game_UI_C_GetVanitySlotTitle_Params params;
	params.InVanitySlot = InVanitySlot;
	params.UpperCase = UpperCase;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTitle != nullptr)
		*OutTitle = params.OutTitle;
}


// Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotIcon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EVanitySlot*                   VanitySlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              AsTexture_2D                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_UI_C::STATIC_GetVanitySlotIcon(EVanitySlot* VanitySlot, class UObject** __WorldContext, class UTexture2D** AsTexture_2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotIcon");

	ULIB_Game_UI_C_GetVanitySlotIcon_Params params;
	params.VanitySlot = VanitySlot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsTexture_2D != nullptr)
		*AsTexture_2D = params.AsTexture_2D;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
