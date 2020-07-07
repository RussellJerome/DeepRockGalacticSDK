// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OVERLAY_RetirementGranted_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOVERLAY_RetirementGranted_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PreConstruct");

	UOVERLAY_RetirementGranted_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           RetirementCount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOVERLAY_RetirementGranted_C::Play(class UClass** CharacterClass, int* RetirementCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Play");

	UOVERLAY_RetirementGranted_C_Play_Params params;
	params.CharacterClass = CharacterClass;
	params.RetirementCount = RetirementCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOVERLAY_RetirementGranted_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Construct");

	UOVERLAY_RetirementGranted_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnEnterFinished
// (BlueprintCallable, BlueprintEvent)

void UOVERLAY_RetirementGranted_C::OnEnterFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnEnterFinished");

	UOVERLAY_RetirementGranted_C_OnEnterFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UOVERLAY_RetirementGranted_C::OnIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnIntroFinished");

	UOVERLAY_RetirementGranted_C_OnIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOVERLAY_RetirementGranted_C::PlayOutro(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PlayOutro");

	UOVERLAY_RetirementGranted_C_PlayOutro_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.ExecuteUbergraph_OVERLAY_RetirementGranted
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOVERLAY_RetirementGranted_C::ExecuteUbergraph_OVERLAY_RetirementGranted(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.ExecuteUbergraph_OVERLAY_RetirementGranted");

	UOVERLAY_RetirementGranted_C_ExecuteUbergraph_OVERLAY_RetirementGranted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOVERLAY_RetirementGranted_C::OnFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnFinished__DelegateSignature");

	UOVERLAY_RetirementGranted_C_OnFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
