// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_BG_CutCorner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_BG_CutCorner_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.PreConstruct");

	UBasic_BG_CutCorner_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.SetBorderColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_BG_CutCorner_C::SetBorderColor(struct FLinearColor* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.SetBorderColor");

	UBasic_BG_CutCorner_C_SetBorderColor_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.ExecuteUbergraph_Basic_BG_CutCorner
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_BG_CutCorner_C::ExecuteUbergraph_Basic_BG_CutCorner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.ExecuteUbergraph_Basic_BG_CutCorner");

	UBasic_BG_CutCorner_C_ExecuteUbergraph_Basic_BG_CutCorner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
