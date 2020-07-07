// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_PointOfInterest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_PointOfInterest.UI_PointOfInterest_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PointOfInterest_C::Init(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.Init");

	UUI_PointOfInterest_C_Init_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PointOfInterest.UI_PointOfInterest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PointOfInterest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.Construct");

	UUI_PointOfInterest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PointOfInterest.UI_PointOfInterest_C.OnIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_PointOfInterest_C::OnIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.OnIntroFinished");

	UUI_PointOfInterest_C_OnIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PointOfInterest.UI_PointOfInterest_C.OnOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_PointOfInterest_C::OnOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.OnOutroFinished");

	UUI_PointOfInterest_C_OnOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PointOfInterest.UI_PointOfInterest_C.ExecuteUbergraph_UI_PointOfInterest
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PointOfInterest_C::ExecuteUbergraph_UI_PointOfInterest(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.ExecuteUbergraph_UI_PointOfInterest");

	UUI_PointOfInterest_C_ExecuteUbergraph_UI_PointOfInterest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PointOfInterest.UI_PointOfInterest_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PointOfInterest_C::Finished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.Finished__DelegateSignature");

	UUI_PointOfInterest_C_Finished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
