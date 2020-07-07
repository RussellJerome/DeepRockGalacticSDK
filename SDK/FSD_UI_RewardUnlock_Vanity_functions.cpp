// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RewardUnlock_Vanity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SetCharacterIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID**     characterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID*      OutCharacterID                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_RewardUnlock_Vanity_C::SetCharacterIcon(class UPlayerCharacterID** characterID, class UPlayerCharacterID** OutCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SetCharacterIcon");

	UUI_RewardUnlock_Vanity_C_SetCharacterIcon_Params params;
	params.characterID = characterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCharacterID != nullptr)
		*OutCharacterID = params.OutCharacterID;
}


// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SelectCharacterID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlayerCharacterID**     OptionalID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID*      OutputPin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_RewardUnlock_Vanity_C::SelectCharacterID(class UPlayerCharacterID** OptionalID, class UPlayerCharacterID** OutputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SelectCharacterID");

	UUI_RewardUnlock_Vanity_C_SelectCharacterID_Params params;
	params.OptionalID = OptionalID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.GetUnlockDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   OutTitle                       (Parm, OutParm)
// struct FText                   OutSubTitle                    (Parm, OutParm)
// class UTexture*                Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_RewardUnlock_Vanity_C::GetUnlockDetails(struct FText* OutTitle, struct FText* OutSubTitle, class UTexture** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.GetUnlockDetails");

	UUI_RewardUnlock_Vanity_C_GetUnlockDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTitle != nullptr)
		*OutTitle = params.OutTitle;
	if (OutSubTitle != nullptr)
		*OutSubTitle = params.OutSubTitle;
	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RewardUnlock_Vanity_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.PreConstruct");

	UUI_RewardUnlock_Vanity_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.PlayReceiveAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_RewardUnlock_Vanity_C::PlayReceiveAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.PlayReceiveAnim");

	UUI_RewardUnlock_Vanity_C_PlayReceiveAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_RewardUnlock_Vanity_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.Construct");

	UUI_RewardUnlock_Vanity_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.ExecuteUbergraph_UI_RewardUnlock_Vanity
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RewardUnlock_Vanity_C::ExecuteUbergraph_UI_RewardUnlock_Vanity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.ExecuteUbergraph_UI_RewardUnlock_Vanity");

	UUI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
