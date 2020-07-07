// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Option_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Option.Basic_Option_C.SetOptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_Option_C::SetOptionText(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Option.Basic_Option_C.SetOptionText");

	UBasic_Option_C_SetOptionText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Option.Basic_Option_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Option_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Option.Basic_Option_C.PreConstruct");

	UBasic_Option_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Option.Basic_Option_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Option_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Option.Basic_Option_C.Tick");

	UBasic_Option_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Option.Basic_Option_C.ExecuteUbergraph_Basic_Option
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Option_C::ExecuteUbergraph_Basic_Option(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Option.Basic_Option_C.ExecuteUbergraph_Basic_Option");

	UBasic_Option_C_ExecuteUbergraph_Basic_Option_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Option.Basic_Option_C.OnHoveringEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_Option_C::OnHoveringEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Option.Basic_Option_C.OnHoveringEnd__DelegateSignature");

	UBasic_Option_C_OnHoveringEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Option.Basic_Option_C.OnHoveringBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_Option_C::OnHoveringBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Option.Basic_Option_C.OnHoveringBegin__DelegateSignature");

	UBasic_Option_C_OnHoveringBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
