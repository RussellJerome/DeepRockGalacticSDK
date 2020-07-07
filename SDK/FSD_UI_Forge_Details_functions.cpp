// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_Details_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Forge_Details.UI_Forge_Details_C.StartCounting
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_Forge_Details_C::StartCounting()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.StartCounting");

	UUI_Forge_Details_C_StartCounting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Details.UI_Forge_Details_C.SetCountProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Details_C::SetCountProgress(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.SetCountProgress");

	UUI_Forge_Details_C_SetCountProgress_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Details.UI_Forge_Details_C.OpenMatrixCore
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Forge_Details_C::OpenMatrixCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.OpenMatrixCore");

	UUI_Forge_Details_C_OpenMatrixCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Details.UI_Forge_Details_C.SetItemDescription
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Forge_Details_C::SetItemDescription(struct FText* Title, struct FText* Subtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.SetItemDescription");

	UUI_Forge_Details_C_SetItemDescription_Params params;
	params.Title = Title;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Details.UI_Forge_Details_C.ShowSchematic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InSchematic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Details_C::ShowSchematic(class USchematic** InSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.ShowSchematic");

	UUI_Forge_Details_C_ShowSchematic_Params params;
	params.InSchematic = InSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Details.UI_Forge_Details_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Details_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.PreConstruct");

	UUI_Forge_Details_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Details.UI_Forge_Details_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Forge_Details_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.Construct");

	UUI_Forge_Details_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Details.UI_Forge_Details_C.AnimOpenMatrixFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_Forge_Details_C::AnimOpenMatrixFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.AnimOpenMatrixFinished");

	UUI_Forge_Details_C_AnimOpenMatrixFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Details.UI_Forge_Details_C.Stop Counting
// (BlueprintCallable, BlueprintEvent)

void UUI_Forge_Details_C::Stop_Counting()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.Stop Counting");

	UUI_Forge_Details_C_Stop_Counting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Details.UI_Forge_Details_C.ExecuteUbergraph_UI_Forge_Details
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Details_C::ExecuteUbergraph_UI_Forge_Details(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.ExecuteUbergraph_UI_Forge_Details");

	UUI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Details.UI_Forge_Details_C.OnMatrixCoreOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Forge_Details_C::OnMatrixCoreOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.OnMatrixCoreOpened__DelegateSignature");

	UUI_Forge_Details_C_OnMatrixCoreOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
