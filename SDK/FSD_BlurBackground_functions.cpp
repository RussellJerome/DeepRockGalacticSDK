// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BlurBackground_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BlurBackground.BlurBackground_C.SetBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InBlur                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlurBackground_C::SetBlur(float* InBlur)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlurBackground.BlurBackground_C.SetBlur");

	UBlurBackground_C_SetBlur_Params params;
	params.InBlur = InBlur;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlurBackground.BlurBackground_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlurBackground_C::SetColor(struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlurBackground.BlurBackground_C.SetColor");

	UBlurBackground_C_SetColor_Params params;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlurBackground.BlurBackground_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlurBackground_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlurBackground.BlurBackground_C.PreConstruct");

	UBlurBackground_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlurBackground.BlurBackground_C.ExecuteUbergraph_BlurBackground
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlurBackground_C::ExecuteUbergraph_BlurBackground(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlurBackground.BlurBackground_C.ExecuteUbergraph_BlurBackground");

	UBlurBackground_C_ExecuteUbergraph_BlurBackground_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
