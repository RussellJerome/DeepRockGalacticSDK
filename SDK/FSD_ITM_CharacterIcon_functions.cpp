// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CharacterIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID**     characterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterIcon_C::SetFromCharacterID(class UPlayerCharacterID** characterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterID");

	UITM_CharacterIcon_C_SetFromCharacterID_Params params;
	params.characterID = characterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InCharacterClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterIcon_C::SetFromCharacterClass(class UClass** InCharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterClass");

	UITM_CharacterIcon_C_SetFromCharacterClass_Params params;
	params.InCharacterClass = InCharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterIcon_C::SetFromPlayerCharacter(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerCharacter");

	UITM_CharacterIcon_C_SetFromPlayerCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           InState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterIcon_C::SetFromPlayerState(class APlayerState** InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerState");

	UITM_CharacterIcon_C_SetFromPlayerState_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetBaseSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterIcon_C::SetBaseSize(float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetBaseSize");

	UITM_CharacterIcon_C_SetBaseSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowPromotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterIcon_C::SetShowPromotion(bool* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowPromotion");

	UITM_CharacterIcon_C_SetShowPromotion_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterIcon_C::SetImage(class UTexture2D** Value, struct FLinearColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetImage");

	UITM_CharacterIcon_C_SetImage_Params params;
	params.Value = Value;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetCharacterImageAndColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterIcon_C::SetCharacterImageAndColor(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetCharacterImageAndColor");

	UITM_CharacterIcon_C_SetCharacterImageAndColor_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowHostIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterIcon_C::SetShowHostIcon(bool* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowHostIcon");

	UITM_CharacterIcon_C_SetShowHostIcon_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.PreConstruct");

	UITM_CharacterIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.ExecuteUbergraph_ITM_CharacterIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterIcon_C::ExecuteUbergraph_ITM_CharacterIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.ExecuteUbergraph_ITM_CharacterIcon");

	UITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
