// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_PromotionDirections_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_PromotionDirections.WND_PromotionDirections_C.OnShown
// (Event, Public, BlueprintEvent)

void UWND_PromotionDirections_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.OnShown");

	UWND_PromotionDirections_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_PromotionDirections.WND_PromotionDirections_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_PromotionDirections_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.PreConstruct");

	UWND_PromotionDirections_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_PromotionDirections.WND_PromotionDirections_C.BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_PromotionDirections_C::BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWND_PromotionDirections_C_BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_PromotionDirections.WND_PromotionDirections_C.SetCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID**     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_PromotionDirections_C::SetCharacter(class UPlayerCharacterID** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.SetCharacter");

	UWND_PromotionDirections_C_SetCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_PromotionDirections.WND_PromotionDirections_C.ExecuteUbergraph_WND_PromotionDirections
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_PromotionDirections_C::ExecuteUbergraph_WND_PromotionDirections(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.ExecuteUbergraph_WND_PromotionDirections");

	UWND_PromotionDirections_C_ExecuteUbergraph_WND_PromotionDirections_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
