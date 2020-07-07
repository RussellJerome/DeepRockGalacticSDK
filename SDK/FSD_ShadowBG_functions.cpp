// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ShadowBG_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShadowBG.ShadowBG_C.SetEdgeSharpness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         EdgeSharpness1                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShadowBG_C::SetEdgeSharpness(float* EdgeSharpness1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShadowBG.ShadowBG_C.SetEdgeSharpness");

	UShadowBG_C_SetEdgeSharpness_Params params;
	params.EdgeSharpness1 = EdgeSharpness1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShadowBG.ShadowBG_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShadowBG_C::SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShadowBG.ShadowBG_C.SetColor");

	UShadowBG_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShadowBG.ShadowBG_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShadowBG_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShadowBG.ShadowBG_C.PreConstruct");

	UShadowBG_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShadowBG.ShadowBG_C.ExecuteUbergraph_ShadowBG
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShadowBG_C::ExecuteUbergraph_ShadowBG(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShadowBG.ShadowBG_C.ExecuteUbergraph_ShadowBG");

	UShadowBG_C_ExecuteUbergraph_ShadowBG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
