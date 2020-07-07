// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ScrollArrow2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.SetActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewVar_1                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UBasic_ScrollArrow2_C::SetActive(bool* NewVar_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.SetActive");

	UBasic_ScrollArrow2_C_SetActive_Params params;
	params.NewVar_1 = NewVar_1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ScrollArrow2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.PreConstruct");

	UBasic_ScrollArrow2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.ExecuteUbergraph_Basic_ScrollArrow2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ScrollArrow2_C::ExecuteUbergraph_Basic_ScrollArrow2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.ExecuteUbergraph_Basic_ScrollArrow2");

	UBasic_ScrollArrow2_C_ExecuteUbergraph_Basic_ScrollArrow2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_ScrollArrow2_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.OnClicked__DelegateSignature");

	UBasic_ScrollArrow2_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
