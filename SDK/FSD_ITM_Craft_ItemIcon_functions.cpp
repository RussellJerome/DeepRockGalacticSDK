// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Craft_ItemIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.FreeRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Craft_ItemIcon_C::FreeRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.FreeRenderTarget");

	UITM_Craft_ItemIcon_C_FreeRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ItemIcon_C::SetIconTexture(class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetIconTexture");

	UITM_Craft_ItemIcon_C_SetIconTexture_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFSDPlayerState*         AsFSDPlayer_State              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ItemIcon_C::GetPlayerState(class AFSDPlayerState** AsFSDPlayer_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetPlayerState");

	UITM_Craft_ItemIcon_C_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFSDPlayer_State != nullptr)
		*AsFSDPlayer_State = params.AsFSDPlayer_State;
}


// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ItemIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.PreConstruct");

	UITM_Craft_ItemIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable>* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ItemIcon_C::SetData(TScriptInterface<class UCraftable>* Item, class UClass** CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetData");

	UITM_Craft_ItemIcon_C_SetData_Params params;
	params.Item = Item;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Craft_ItemIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.Construct");

	UITM_Craft_ItemIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.ExecuteUbergraph_ITM_Craft_ItemIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ItemIcon_C::ExecuteUbergraph_ITM_Craft_ItemIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.ExecuteUbergraph_ITM_Craft_ItemIcon");

	UITM_Craft_ItemIcon_C_ExecuteUbergraph_ITM_Craft_ItemIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
