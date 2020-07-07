// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_HUD_BracketWindowSmall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.SetEdgeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_HUD_BracketWindowSmall_C::SetEdgeColor(TEnumAsByte<ENUM_MenuColors>* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.SetEdgeColor");

	UBasic_HUD_BracketWindowSmall_C_SetEdgeColor_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_HUD_BracketWindowSmall_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.PreConstruct");

	UBasic_HUD_BracketWindowSmall_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.ExecuteUbergraph_Basic_HUD_BracketWindowSmall
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_HUD_BracketWindowSmall_C::ExecuteUbergraph_Basic_HUD_BracketWindowSmall(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.ExecuteUbergraph_Basic_HUD_BracketWindowSmall");

	UBasic_HUD_BracketWindowSmall_C_ExecuteUbergraph_Basic_HUD_BracketWindowSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
