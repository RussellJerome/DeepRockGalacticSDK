// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_HUD_BracketWindowBig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_HUD_BracketWindowBig_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.PreConstruct");

	UBasic_HUD_BracketWindowBig_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.Set Edge Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Edge_Tint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_HUD_BracketWindowBig_C::Set_Edge_Color(struct FLinearColor* Edge_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.Set Edge Color");

	UBasic_HUD_BracketWindowBig_C_Set_Edge_Color_Params params;
	params.Edge_Tint = Edge_Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.Set Background Opacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         BG_Opacity                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_HUD_BracketWindowBig_C::Set_Background_Opacity(float* BG_Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.Set Background Opacity");

	UBasic_HUD_BracketWindowBig_C_Set_Background_Opacity_Params params;
	params.BG_Opacity = BG_Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.ExecuteUbergraph_Basic_HUD_BracketWindowBig
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_HUD_BracketWindowBig_C::ExecuteUbergraph_Basic_HUD_BracketWindowBig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.ExecuteUbergraph_Basic_HUD_BracketWindowBig");

	UBasic_HUD_BracketWindowBig_C_ExecuteUbergraph_Basic_HUD_BracketWindowBig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
