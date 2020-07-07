// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_OverClock_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetOverclockTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade**           Overclock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::SetOverclockTooltip(class UItemUpgrade** Overclock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetOverclockTooltip");

	UITM_Overclock_Icon_C_SetOverclockTooltip_Params params;
	params.Overclock = Overclock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetOverclockTooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_Overclock_Icon_C::GetOverclockTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetOverclockTooltip");

	UITM_Overclock_Icon_C_GetOverclockTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetFrameLinearColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ColorAndOpacity                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::GetFrameLinearColor(struct FLinearColor* ColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetFrameLinearColor");

	UITM_Overclock_Icon_C_GetFrameLinearColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ColorAndOpacity != nullptr)
		*ColorAndOpacity = params.ColorAndOpacity;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematicType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESchematicType*                InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::FromSchematicType(ESchematicType* InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematicType");

	UITM_Overclock_Icon_C_FromSchematicType_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematicCategory**     InCategory                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::SetCategory(class USchematicCategory** InCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetCategory");

	UITM_Overclock_Icon_C_SetCategory_Params params;
	params.InCategory = InCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameLinearColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::SetFrameLinearColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameLinearColor");

	UITM_Overclock_Icon_C_SetFrameLinearColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromUpgrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade**           InUpgrade                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USchematicCategory*      OutSchematicCategory           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::FromUpgrade(class UItemUpgrade** InUpgrade, class USchematicCategory** OutSchematicCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromUpgrade");

	UITM_Overclock_Icon_C_FromUpgrade_Params params;
	params.InUpgrade = InUpgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSchematicCategory != nullptr)
		*OutSchematicCategory = params.OutSchematicCategory;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InSchematic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::FromSchematic(class USchematic** InSchematic, bool* ShowState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematic");

	UITM_Overclock_Icon_C_FromSchematic_Params params;
	params.InSchematic = InSchematic;
	params.ShowState = ShowState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::SetIconColor(TEnumAsByte<ENUM_MenuColors>* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconColor");

	UITM_Overclock_Icon_C_SetIconColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::SetIcon(class UTexture2D** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIcon");

	UITM_Overclock_Icon_C_SetIcon_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::SetFrame(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrame");

	UITM_Overclock_Icon_C_SetFrame_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  ColorSelector                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::SetFrameColor(TEnumAsByte<ENUM_MenuColors>* ColorSelector)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameColor");

	UITM_Overclock_Icon_C_SetFrameColor_Params params;
	params.ColorSelector = ColorSelector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::SetIconSize(int* InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconSize");

	UITM_Overclock_Icon_C_SetIconSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.PreConstruct");

	UITM_Overclock_Icon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.ExecuteUbergraph_ITM_Overclock_Icon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Icon_C::ExecuteUbergraph_ITM_Overclock_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.ExecuteUbergraph_ITM_Overclock_Icon");

	UITM_Overclock_Icon_C_ExecuteUbergraph_ITM_Overclock_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
