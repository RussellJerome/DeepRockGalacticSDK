// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_LevelIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.GetLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_LevelIcon_C::GetLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.GetLevel");

	UUI_Forge_LevelIcon_C_GetLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevelFromSchematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             Schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_LevelIcon_C::SetLevelFromSchematic(class USchematic** Schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevelFromSchematic");

	UUI_Forge_LevelIcon_C_SetLevelFromSchematic_Params params;
	params.Schematic = Schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InLevel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_LevelIcon_C::SetLevel(int* InLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevel");

	UUI_Forge_LevelIcon_C_SetLevel_Params params;
	params.InLevel = InLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetIconColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_LevelIcon_C::SetIconColor(TEnumAsByte<ENUM_MenuColors>* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetIconColor");

	UUI_Forge_LevelIcon_C_SetIconColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_LevelIcon_C::SetSize(float* InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetSize");

	UUI_Forge_LevelIcon_C_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_LevelIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.PreConstruct");

	UUI_Forge_LevelIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.ExecuteUbergraph_UI_Forge_LevelIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_LevelIcon_C::ExecuteUbergraph_UI_Forge_LevelIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.ExecuteUbergraph_UI_Forge_LevelIcon");

	UUI_Forge_LevelIcon_C_ExecuteUbergraph_UI_Forge_LevelIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
